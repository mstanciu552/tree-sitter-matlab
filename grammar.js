module.exports = grammar({
  name: 'matlab',

  word: ($) => $.identifier,

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          field('comment', $.comment),
          $.expression,
          $.function_definition,
          $.function_call,
          $._statements
        )
      ),

    _statements: ($) =>
      choice(
        $.if_statement,
        $.for_statement,
        $.while_statement,
        $.switch_statement,
        $.try_statement
      ),

    if_statement: ($) =>
      prec.right(
        seq(
          "if",
          optional($._not),
          field('condition', $._condition),
          optional($.block),
          optional(repeat1($.elseif_statement)),
          optional($.else_statement),
          field('end', $.end)
        )
      ),

    elseif_statement: ($) =>
      prec.right(
        seq(
          "elseif",
          field('condition', $._condition),
          optional($.block),
        )
      ),

    else_statement: ($) =>
      prec.right(
        seq(
          "else",
          optional($.block),
        )
      ),

    for_statement: ($) =>
      prec.right(
        seq(
          "for",
          optional($._not),
          $.expression,
          optional($.block),
          field('endfor', $.end)
        )
      ),

    while_statement: ($) =>
      prec.right(
        seq(
          "while",
          optional($._not),
          field('condition', $._condition),
          optional($.block),
          field('endwhile', $.end)
        )
      ),

    switch_statement: ($) =>
      prec.right(1,
        seq(
          "switch", $.identifier,
          repeat1($.case_statement),
          optional($.otherwise_statement),
          field('endswitch', $.end)
        )
      ),

    case_statement: ($) =>
      prec.right(1,
        seq("case",
          field('condition', choice($.identifier, $.number, $.string, $.cell_definition)),
          optional($.block))
      ),

    otherwise_statement: ($) =>
      prec.right(1,
        seq("otherwise", optional($.block))
      ),

    try_statement: ($) =>
      prec.right(1,
        seq("try",
          optional($.block),
          optional($.catch_statement),
          field('endtry', $.end))),

    catch_statement: ($) =>
      prec.right(1,
        seq("catch", optional($.identifier), optional($.block))
      ),

    _condition: ($) => prec(1, choice($.factor, $.bool, $._bool_keywords, $.function_call)),

    function_definition: ($) =>
      prec.right(
        seq(
          field('function_keyword', $.function_keyword),
          optional(seq(field('return_variable', $.return_value), $._eq)),
          field('function_name', $.identifier),
          $.parameter_list,
          optional($.block),
          field('end', $.end)
        )
      ),

    bool: ($) =>
      prec.right(
        1,
        seq(
          optional('('),
          $.factor,
          repeat1(seq(
            choice('&&', '||'),
            $.factor)),
          optional(')'),
          optional($._end_of_line)
        )
      ),

    operation: ($) =>
      prec.right(1, seq(
        $.factor, $._operator, $.factor, optional($._end_of_line))),

    expression: ($) =>
      prec(
        2,
        seq(
          choice(
            field('variable_name', $.identifier),
            field('vector_access', $.function_call),
            field('vector', $.vector_definition)
          ),
          $._eq,
          choice($.operation, $.factor, $.vector_definition, $.cell_definition),
          optional($._end_of_line)
        )
      ),

    parameter_list: ($) =>
      seq('(', repeat(seq($.identifier, optional(','))), ')'),
    argument_list: ($) =>
      prec.right(
        seq(
          '(',
          repeat(seq($.factor, optional(','))),
          ')',
          optional($._end_of_line)
        )
      ),
    return_value: ($) =>
      choice(
        $.identifier,
        seq('[', repeat1(seq($.identifier, optional(','))), ']')
      ),

    block: ($) =>
      prec(
        3, repeat1(
          choice(
            field('comment', $.comment),
            $.expression,
            $._statements,
            $.function_call,
            $.keyword))),

    identifier: ($) => /[a-zA-Z_]+[a-zA-Z0-9_]*/,

    factor: ($) =>
      prec.right(
        seq(
          choice(
            $.number,
            $.string,
            $.identifier,
            $.operation,
            $.function_call,
            $.range), optional($._end_of_line))),

    range: ($) =>
      seq(
        $._range_element, ':', $._range_element,
        optional(seq(':', $._range_element))
      ),

    _range_element: ($) =>
      choice($.identifier, $.number, $.function_call),

    function_call: ($) =>
      prec.left(
        3,
        seq(
          field('function_name', $.identifier),
          $.argument_list,
          optional($._end_of_line)
        )
      ),

    vector_access: ($) => prec.left(seq($.identifier, '(', $.factor, ')')),

    string: ($) => seq($._single_quote, /([^']|(''))*/, $._single_quote),

    keyword: ($) => seq(choice('return', 'continue', 'break'), optional($._end_of_line)),
    _return: (_) => 'return',
    _break: (_) => 'break',
    _continue: (_) => 'continue',

    _single_quote: (_) => '\'',
    _semi_colon: ($) => ';',
    _eq: ($) => '=',
    // _operator: ($) => new RegExp('[+\\-*/%\\^:<>=\.]+'),
    _operator: (_) => choice('>', '<', '==', '<=', '>=', '=<', '=>', '~=', '*', '.*', '/', '\\', './', '^', '.^', '+'),
    number: ($) => /\d+/g,
    end: ($) => 'end',
    function_keyword: ($) => 'function',
    vector_definition: ($) =>
      seq('[', repeat(seq($.factor, optional(choice(',', ';')))), ']', optional($._single_quote)),
    cell_definition: ($) =>
      seq('{', repeat(seq($.factor, optional(choice(',', ';')))), '}'),
    _and: ($) => '&&',
    _or: ($) => '||',
    _not: ($) => '~',
    _diff: ($) => '~=',
    _comparator_equal: ($) => '==',
    _bool_keywords: ($) => choice('true', 'false'),
    comment: ($) => seq('%', /.+/, '\n'),
    _end_of_line: ($) => choice(';', '\n', '\r', ','),
  },
});
