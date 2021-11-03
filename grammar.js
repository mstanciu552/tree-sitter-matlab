module.exports = grammar({
  name: 'matlab',

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.expression,
          $.function_definition,
          $.function_call,
          $.structure
        )
      ),

    // TODO Add vector access support

    structure: ($) =>
      prec.right(
        seq(
          alias('_structure_keyword', $._structure_keyword),
          choice($.operation, $.bool, $.expression),
          $.block
        )
      ),

    function_definition: ($) =>
      prec.right(
        seq(
          alias('function', $._function_keyword),
          optional(seq($.return_value, $._eq)),
          $.function_name,
          $.parameter_list,
          optional($.block),
          $._end
        )
      ),

    bool: ($) =>
      prec.right(
        1,
        choice(
          seq(
            optional('('),
            $.factor,
            optional(seq($._comparator_equal, $.factor)),
            choice($._and, $._or, $._diff),
            $.factor,
            optional(seq($._comparator_equal, $.factor)),
            optional(')')
          ),
          alias('_bool_keywords', $._bool_keywords)
        )
      ),
    operation: ($) =>
      prec.right(1, seq(optional($._not), $.factor, $._operator, $.factor)),
    expression: ($) =>
      prec(
        2,
        seq(
          $.identifier,
          $._eq,
          choice($.operation, $.factor, $.vector_definition),
          optional($._semi_colon)
        )
      ),

    parameter_list: ($) =>
      seq('(', repeat(seq($.identifier, optional(','))), ')'),
    argument_list: ($) => seq('(', repeat(seq($.factor, optional(','))), ')'),
    function_name: ($) => $.identifier,
    return_value: ($) => alias('return_value', $.identifier),
    block: ($) => prec.right(seq(repeat1(choice($.expression, $.structure)))),
    _structure_keyword: ($) => choice('if', 'for', 'while'),

    identifier: ($) => choice(/[a-zA-Z_]+/g, /[a-zA-Z_]+([a-zA-Z_]+)/g), // TODO Check for more complex identifiers
    factor: ($) =>
      prec.right(choice($._number, $.identifier, $.operation, $.function_call)),
    function_call: ($) =>
      prec.right(
        seq($.function_name, $.argument_list, optional($._semi_colon))
      ),

    _semi_colon: ($) => ';',
    _eq: ($) => '=',
    _operator: ($) => new RegExp('[+\\-*/%\\^:<>]'),
    _number: ($) => /\d+/g,
    _end: ($) => 'end',
    _function_keyword: ($) => 'function',
    vector_definition: ($) =>
      seq('[', repeat(seq($.factor, optional(choice(',', ';')))), ']'),
    _and: ($) => '&&',
    _or: ($) => '||',
    _not: ($) => '!',
    _diff: ($) => '!=',
    _comparator_equal: ($) => '==',
    _bool_keywords: ($) => choice('true', 'false'),
  },
});
