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
          $.structure,
          field('comment', $.comment)
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
            field('vector_access', $.function_call)
          ),
          $._eq,
          choice($.operation, $.factor, $.vector_definition),
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
    return_value: ($) => $.identifier,
    block: ($) => prec(3, repeat1(choice($.expression, $.structure))),
    structure_keyword: ($) => choice('if', 'for', 'while'),

    identifier: ($) => /[a-zA-Z_]+[a-zA-Z0-9_]*/,
    // vector_access: ($) =>
    //   prec(4, /([a-zA-Z_]+[0-9a-zA-Z]*)+(\(([a-zA-Z_]*[0-9a-zA-Z]*)\))?/),
    factor: ($) =>
      prec.right(choice($._number, $.identifier, $.operation, $.function_call)),
    function_call: ($) =>
      prec.left(
        3,
        seq(
          field('function_name', $.identifier),
          $.argument_list,
          optional($._semi_colon)
        )
      ),

    vector_access: ($) => prec.left(seq($.identifier, '(', $.factor, ')')),

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
    comment: ($) => seq('%', /.+/, '\n'),
    _end_of_line: ($) => choice(';', '\n'),
  },
});
