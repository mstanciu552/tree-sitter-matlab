module.exports = grammar({
  name: 'matlab',

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          field('comment', $.comment),
          $.expression,
          $.function_definition,
          $.function_call,
          $.structure,
        )
      ),

    structure: ($) =>
      prec.right(
        seq(
          field('structure_keyword', $.structure_keyword),
          choice($.operation, $.bool, $.expression, $._bool_keywords),
          optional($.block),
          field('end', $.end)
        )
      ),

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
          optional(seq($._comparator_equal, $.factor)),
          choice($._and, $._or, $._diff),
          $.factor,
          optional(seq($._comparator_equal, $.factor)),
          optional(')')
        )
      ),
    operation: ($) =>
      prec.right(1, seq(optional($._not), $.factor, $._operator, $.factor)),
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
          optional($._semi_colon)
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
      prec(3, repeat1(choice(field('comment', $.comment), $.expression, $.structure, $.function_call))),

    structure_keyword: ($) => choice('if', 'for', 'while'),

    identifier: ($) => /[a-zA-Z_]+[a-zA-Z0-9_]*/,
    factor: ($) =>
      prec.right(choice($._number, $.string, $.identifier, $.operation, $.function_call)),
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

    string: ($) => seq('\'', /[^']*/, '\''),

    _semi_colon: ($) => ';',
    _eq: ($) => '=',
    _operator: ($) => new RegExp('[+\\-*/%\\^:<>]'),
    _number: ($) => /\d+/g,
    end: ($) => 'end',
    function_keyword: ($) => 'function',
    vector_definition: ($) =>
      seq('[', repeat(seq($.factor, optional(choice(',', ';')))), ']'),
    cell_definition: ($) =>
      seq('{', repeat(seq($.factor, optional(choice(',', ';')))), '}'),
    _and: ($) => '&&',
    _or: ($) => '||',
    _not: ($) => '!',
    _diff: ($) => '!=',
    _comparator_equal: ($) => '==',
    _bool_keywords: ($) => choice('true', 'false'),
    comment: ($) => seq('%', /.+/, '\n'),
    _end_of_line: ($) => choice(';', '\n', '\r'),
  },
});
