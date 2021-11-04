module.exports = grammar({
  name: 'matlab',

  // TODO Fix queries

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
          optional(seq(field('return_variable', $.identifier), $._eq)),
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
            field('vector_access', $.vector_access)
          ),
          $._eq,
          choice($.operation, $.factor, $.vector_definition),
          optional($._semi_colon)
        )
      ),

    parameter_list: ($) =>
      seq('(', repeat(seq($.identifier, optional(','))), ')'),
    argument_list: ($) => seq('(', repeat(seq($.factor, optional(','))), ')'),
    function_name: ($) => $.identifier,
    return_value: ($) => $.identifier,
    block: ($) => prec(3, repeat1(choice($.expression, $.structure))),
    structure_keyword: ($) => choice('if', 'for', 'while'),

    identifier: ($) => /[a-zA-Z_]+/, // TODO Check for more complex identifiers
    vector_access: ($) => /[a-zA-Z_]+(\([a-zA-Z_]+\))?/,
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
    end: ($) => 'end',
    function_keyword: ($) => 'function',
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
