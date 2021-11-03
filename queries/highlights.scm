; highlights.scm

function_keyword: (identifier) @keyword
(function_definition end: (end) @keyword)
structure_keyword: (_) @keyword 

"true" @constant.builtin
"false" @constant.builtin

(identifier) @string
(function_definition return_variable: (identifier)) @type.builtin
