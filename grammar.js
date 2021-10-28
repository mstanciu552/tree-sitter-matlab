// @Source https://tree-sitter.github.io/tree-sitter/creating-parsers
module.exports = grammar({
  name: "matlab",

  rules: {
    source_file: $ => repeat($.statement),
    expression: $ => seq($.identifier, $._operator, $._number),
    statement: $ => choice($.expression, $.function_definition),
    function_definition: $ => choice(seq(
      'function',
      $.return_variable,
      optional($._whitespace),
      $._operator,
      choice('', ' '),
      $.function_name,
      $.parameter_list,
      $.block,
      $._end
    ), seq(
      'function',
      $.function_name,
      $.parameter_list,
      $.block,
      $._end
    )),
    return_variable: $ => $.identifier,
    function_name: $ => $.identifier,
    parameter_list: $ => seq(
      '(',
      choice('', repeat($.identifier)),
      ')'
    ),
    block: $ => seq(
      '{',
      repeat($.statement),
      '}'
    ),
    identifier: $ => new RegExp("[a-zA-Z]+"),
    _operator: $ => /[=*+-/%]/,
    _number: $ => /\d+/,
    _end: $ => "end",
    _whitespace: $ => ' ',
  },
});
