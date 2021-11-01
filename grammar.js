module.exports = grammar({
  name: "matlab",

  rules: {
    source_file: $ => repeat($.expression),

    operation: $ => seq($.factor, $._operator, $.factor),
    expression: $ => seq($.identifier,
      $._eq, 
      choice($.operation, $.factor, $.vector_definition),
      optional($._semi_colon)
    ),

    identifier: $ => /[a-zA-Z_]/g, // TODO Check for more complex identifiers
    factor: $ => choice($._number, $.identifier),

    _semi_colon: $ => ';',
    _eq: $ => '=',
    _operator: $ => new RegExp("[\+\\-\*\/\%]"),
    _number: $ => /\d+/g,
    vector_definition: $ => seq(
      '[',
      $.factor,
      ']'
    ),
  }
})
