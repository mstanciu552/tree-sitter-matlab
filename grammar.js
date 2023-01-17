module.exports = grammar({
  name: 'matlab',

  word: ($) => $.identifier,

  rules: {
    source_file: ($) =>
      repeat(
        seq(choice(
          field('comment', $.comment),
          $.expression,
          $.function_definition,
          $.function_call,
          $.class_definition,
          $._statements,
          $.struct,
        ), optional($._end_of_line))
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
          field('condition', $._condition), $._end_of_line,
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
          field('condition', $._condition), $._end_of_line,
          optional($.block),
        )
      ),

    else_statement: ($) =>
      prec.right(
        seq(
          "else",
          $._end_of_line,
          optional($.block),
        )
      ),

    for_statement: ($) =>
      prec.right(
        seq(
          "for",
          optional($._not),
          $.expression, $._end_of_line,
          optional($.block),
          field('endfor', $.end)
        )
      ),

    while_statement: ($) =>
      prec.right(
        seq(
          "while",
          optional($._not),
          field('condition', $._condition), $._end_of_line,
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
          $._end_of_line,
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
          optional(seq(field('return_variable', $.return_value), '=')),
          field('function_name', $.identifier),
          $.parameter_list,
          optional($.block),
          field('end', $.end)
        )
      ),

    class_definition: ($) =>
      seq('classdef', field('classname', $.identifier),
        optional(seq('<', repeat1(seq(field('superclass', $._superclass), optional('&'))))),
        repeat(
          choice(
            $.comment,
            $.properties_definition,
            $.methods_definition
          )
        ),
        field('endclass', $.end)),

    _superclass: ($) => choice($.identifier, $.struct),

    properties_definition: ($) =>
      seq('properties',
        optional($.property_access),
        repeat(
          choice(
            $.comment,
            $.property
          )),
        field('endproperties', $.end)),

    property_access: ($) =>
      seq('(', repeat(seq(
        field('access_type', $.identifier), '=',
        field('access_value', choice($.identifier, $.string)), optional(','))), ')'),

    property: ($) => seq(field('property_name', $.identifier),
      optional($._property_size),
      optional($._property_type),
      optional($._property_validation),
      optional(seq('=', $._property_value)),
      optional($.comment), '\n'),

    _property_size: ($) => seq('(', repeat1(seq(choice($.number, ':'), optional(','))), ')'),

    _property_type: ($) => choice($.identifier, $.struct),

    _property_validation: ($) => seq('{', repeat1(seq(choice($.identifier, $.function_call), optional(','))) ,'}'),
    _property_value: ($) => $.factor,

    methods_definition: ($) =>
      seq('methods',
        repeat(
          choice(
            $.comment,
            $.function_definition
          )),
        field('endmethods', $.end)),

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
        )
      ),

    operation: ($) =>
      prec.right(1, seq(
        $.factor, $._operator, $.factor,
      )),

    expression: ($) =>
      prec(
        2,
        seq(
          choice(
            field('variable_name', $.identifier),
            field('vector_access', $.function_call),
            field('vector', $.vector_definition),
            field('struct', $.struct)
          ),
          '=',
          choice($.operation, $.factor, $.vector_definition, $.cell_definition),
        )
      ),

    struct: ($) => seq(repeat1(seq($.identifier, '.')), $.identifier),

    parameter_list: ($) =>
      seq('(', repeat(seq($.identifier, optional(','))), ')'),

    argument_list: ($) =>
      prec.right(
        seq(
          '(',
          repeat(seq($.factor, optional(','))),
          ')',
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
          seq(choice(
            field('comment', $.comment),
            $.expression,
            $._statements,
            $.function_call,
            $.struct,
            $.keyword),
            optional($._end_of_line)
          ))),

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
            $.range,
            $.struct),
        )),

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
          field('function_name', choice($.identifier, $.struct)),
          optional(seq('@', field('superclass', $.identifier))),
          $.argument_list,
          // optional($._end_of_line)
        )
      ),

    vector_access: ($) => prec.left(seq($.identifier, '(', $.factor, ')')),

    string: ($) => choice(
      seq($._double_quote, /([^"]|(""))*/, $._double_quote),
      seq($._single_quote, /([^']|(''))*/, $._single_quote),
    ),

    keyword: ($) => seq(choice('return', 'continue', 'break')),
    _return: (_) => 'return',
    _break: (_) => 'break',
    _continue: (_) => 'continue',

    _single_quote: (_) => '\'',
    _double_quote: (_) => '"',
    _semi_colon: ($) => ';',
    _eq: ($) => '=',
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
