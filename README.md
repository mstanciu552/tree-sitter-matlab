# tree-sitter-matlab

# Installing the parser

## Neovim

Using a simple function from treesitter

```lua

local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.matlab = {
  install_info = {
    url = <path_to_repo>,
    files = { "src/parser.c" },
    branch= 'main'
  },
  filetype = "matlab", -- if filetype does not agrees with parser name
}

```

In our case `<path_to_repo>` is `https://github.com/mstanciu552/tree-sitter-matlab.git`

# TODO

- [x] Basic grammar
- [x] Add support for variable definition
- [x] Add support for array and matrix definitions
- [x] Add syntax highlighting
- [x] Add function call definition
- [x] Add support for comments
- [x] Add numbers in identifier definition
- [ ] Check out class definitions in Matlab
