#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_COMMA = 2,
  anon_sym_RPAREN = 3,
  sym_identifier = 4,
  sym__semi_colon = 5,
  sym__eq = 6,
  sym__operator = 7,
  sym__number = 8,
  sym__end = 9,
  sym__function_keyword = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  sym_source_file = 13,
  sym_function_definition = 14,
  sym_operation = 15,
  sym_expression = 16,
  sym_parameter_list = 17,
  sym_function_name = 18,
  sym_return_value = 19,
  sym_block = 20,
  sym_factor = 21,
  sym_vector_definition = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_parameter_list_repeat1 = 24,
  aux_sym_block_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [sym__semi_colon] = "_semi_colon",
  [sym__eq] = "_eq",
  [sym__operator] = "_operator",
  [sym__number] = "_number",
  [sym__end] = "_end",
  [sym__function_keyword] = "_function_keyword",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_source_file] = "source_file",
  [sym_function_definition] = "function_definition",
  [sym_operation] = "operation",
  [sym_expression] = "expression",
  [sym_parameter_list] = "parameter_list",
  [sym_function_name] = "function_name",
  [sym_return_value] = "return_value",
  [sym_block] = "block",
  [sym_factor] = "factor",
  [sym_vector_definition] = "vector_definition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [sym__semi_colon] = sym__semi_colon,
  [sym__eq] = sym__eq,
  [sym__operator] = sym__operator,
  [sym__number] = sym__number,
  [sym__end] = sym__end,
  [sym__function_keyword] = sym__function_keyword,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_source_file] = sym_source_file,
  [sym_function_definition] = sym_function_definition,
  [sym_operation] = sym_operation,
  [sym_expression] = sym_expression,
  [sym_parameter_list] = sym_parameter_list,
  [sym_function_name] = sym_function_name,
  [sym_return_value] = sym_return_value,
  [sym_block] = sym_block,
  [sym_factor] = sym_factor,
  [sym_vector_definition] = sym_vector_definition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__semi_colon] = {
    .visible = false,
    .named = true,
  },
  [sym__eq] = {
    .visible = false,
    .named = true,
  },
  [sym__operator] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym__function_keyword] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_return_value] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_factor] = {
    .visible = true,
    .named = true,
  },
  [sym_vector_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__semi_colon);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__eq);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__operator);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__function_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__semi_colon] = ACTIONS(1),
    [sym__eq] = ACTIONS(1),
    [sym__operator] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
    [sym__function_keyword] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym_function_definition] = STATE(5),
    [sym_expression] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym__function_keyword] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym__end,
    ACTIONS(15), 1,
      sym__function_keyword,
    STATE(32), 1,
      sym_block,
    STATE(25), 2,
      sym_expression,
      aux_sym_block_repeat1,
  [20] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym__end,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym__function_keyword,
    STATE(26), 1,
      sym_block,
    STATE(25), 2,
      sym_expression,
      aux_sym_block_repeat1,
  [40] = 5,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      sym_operation,
    STATE(19), 1,
      sym_factor,
    STATE(36), 1,
      sym_vector_definition,
    ACTIONS(21), 2,
      sym_identifier,
      sym__number,
  [57] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym__function_keyword,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(8), 3,
      sym_function_definition,
      sym_expression,
      aux_sym_source_file_repeat1,
  [72] = 5,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_operation,
    STATE(11), 1,
      sym_factor,
    STATE(16), 1,
      sym_vector_definition,
    ACTIONS(27), 2,
      sym_identifier,
      sym__number,
  [89] = 3,
    ACTIONS(35), 1,
      sym__operator,
    ACTIONS(33), 2,
      sym_identifier,
      sym__function_keyword,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      sym__semi_colon,
      anon_sym_RBRACK,
  [102] = 4,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(42), 1,
      sym__function_keyword,
    STATE(8), 3,
      sym_function_definition,
      sym_expression,
      aux_sym_source_file_repeat1,
  [117] = 2,
    ACTIONS(47), 2,
      sym_identifier,
      sym__function_keyword,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      sym__semi_colon,
      sym__operator,
      anon_sym_RBRACK,
  [128] = 4,
    ACTIONS(45), 1,
      sym__operator,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym__semi_colon,
    ACTIONS(51), 2,
      sym_identifier,
      sym__function_keyword,
  [142] = 4,
    ACTIONS(35), 1,
      sym__operator,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym__semi_colon,
    ACTIONS(51), 2,
      sym_identifier,
      sym__function_keyword,
  [156] = 3,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(58), 1,
      sym__end,
    STATE(12), 2,
      sym_expression,
      aux_sym_block_repeat1,
  [167] = 3,
    ACTIONS(45), 1,
      sym__operator,
    ACTIONS(60), 1,
      sym__semi_colon,
    ACTIONS(51), 2,
      sym_identifier,
      sym__end,
  [178] = 3,
    STATE(9), 1,
      sym_operation,
    STATE(45), 1,
      sym_factor,
    ACTIONS(27), 2,
      sym_identifier,
      sym__number,
  [189] = 3,
    STATE(9), 1,
      sym_operation,
    STATE(40), 1,
      sym_factor,
    ACTIONS(27), 2,
      sym_identifier,
      sym__number,
  [200] = 3,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym__semi_colon,
    ACTIONS(51), 2,
      sym_identifier,
      sym__function_keyword,
  [211] = 3,
    ACTIONS(31), 1,
      sym__semi_colon,
    ACTIONS(62), 1,
      sym__operator,
    ACTIONS(33), 2,
      sym_identifier,
      sym__end,
  [222] = 3,
    STATE(17), 1,
      sym_factor,
    STATE(20), 1,
      sym_operation,
    ACTIONS(21), 2,
      sym_identifier,
      sym__number,
  [233] = 3,
    ACTIONS(60), 1,
      sym__semi_colon,
    ACTIONS(62), 1,
      sym__operator,
    ACTIONS(51), 2,
      sym_identifier,
      sym__end,
  [244] = 2,
    ACTIONS(45), 2,
      sym__semi_colon,
      sym__operator,
    ACTIONS(47), 2,
      sym_identifier,
      sym__end,
  [253] = 3,
    STATE(7), 1,
      sym_factor,
    STATE(9), 1,
      sym_operation,
    ACTIONS(27), 2,
      sym_identifier,
      sym__number,
  [264] = 2,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 3,
      sym_identifier,
      sym__end,
      sym__function_keyword,
  [273] = 2,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 3,
      sym_identifier,
      sym__end,
      sym__function_keyword,
  [282] = 2,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym__semi_colon,
    ACTIONS(74), 2,
      sym_identifier,
      sym__function_keyword,
  [291] = 3,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(76), 1,
      sym__end,
    STATE(12), 2,
      sym_expression,
      aux_sym_block_repeat1,
  [302] = 2,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 2,
      sym_identifier,
      sym__function_keyword,
  [310] = 2,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 2,
      sym_identifier,
      sym__function_keyword,
  [318] = 3,
    ACTIONS(86), 1,
      sym_identifier,
    STATE(39), 1,
      sym_function_name,
    STATE(50), 1,
      sym_return_value,
  [328] = 3,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(30), 1,
      aux_sym_parameter_list_repeat1,
  [338] = 3,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_parameter_list_repeat1,
  [348] = 2,
    ACTIONS(72), 1,
      sym__semi_colon,
    ACTIONS(74), 2,
      sym_identifier,
      sym__end,
  [356] = 2,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 2,
      sym_identifier,
      sym__function_keyword,
  [364] = 2,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [372] = 3,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(34), 1,
      aux_sym_parameter_list_repeat1,
  [382] = 2,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 2,
      sym_identifier,
      sym__function_keyword,
  [390] = 2,
    ACTIONS(60), 1,
      sym__semi_colon,
    ACTIONS(51), 2,
      sym_identifier,
      sym__end,
  [398] = 2,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 2,
      sym_identifier,
      sym__function_keyword,
  [406] = 1,
    ACTIONS(102), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [411] = 2,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_parameter_list,
  [418] = 2,
    ACTIONS(35), 1,
      sym__operator,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
  [425] = 1,
    ACTIONS(113), 2,
      sym_identifier,
      sym__end,
  [430] = 2,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(44), 1,
      sym_function_name,
  [437] = 2,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym__eq,
  [444] = 2,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_parameter_list,
  [451] = 2,
    ACTIONS(35), 1,
      sym__operator,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
  [458] = 1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
  [462] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [466] = 1,
    ACTIONS(129), 1,
      sym__eq,
  [470] = 1,
    ACTIONS(131), 1,
      sym__eq,
  [474] = 1,
    ACTIONS(133), 1,
      sym__eq,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 89,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 117,
  [SMALL_STATE(10)] = 128,
  [SMALL_STATE(11)] = 142,
  [SMALL_STATE(12)] = 156,
  [SMALL_STATE(13)] = 167,
  [SMALL_STATE(14)] = 178,
  [SMALL_STATE(15)] = 189,
  [SMALL_STATE(16)] = 200,
  [SMALL_STATE(17)] = 211,
  [SMALL_STATE(18)] = 222,
  [SMALL_STATE(19)] = 233,
  [SMALL_STATE(20)] = 244,
  [SMALL_STATE(21)] = 253,
  [SMALL_STATE(22)] = 264,
  [SMALL_STATE(23)] = 273,
  [SMALL_STATE(24)] = 282,
  [SMALL_STATE(25)] = 291,
  [SMALL_STATE(26)] = 302,
  [SMALL_STATE(27)] = 310,
  [SMALL_STATE(28)] = 318,
  [SMALL_STATE(29)] = 328,
  [SMALL_STATE(30)] = 338,
  [SMALL_STATE(31)] = 348,
  [SMALL_STATE(32)] = 356,
  [SMALL_STATE(33)] = 364,
  [SMALL_STATE(34)] = 372,
  [SMALL_STATE(35)] = 382,
  [SMALL_STATE(36)] = 390,
  [SMALL_STATE(37)] = 398,
  [SMALL_STATE(38)] = 406,
  [SMALL_STATE(39)] = 411,
  [SMALL_STATE(40)] = 418,
  [SMALL_STATE(41)] = 425,
  [SMALL_STATE(42)] = 430,
  [SMALL_STATE(43)] = 437,
  [SMALL_STATE(44)] = 444,
  [SMALL_STATE(45)] = 451,
  [SMALL_STATE(46)] = 458,
  [SMALL_STATE(47)] = 462,
  [SMALL_STATE(48)] = 466,
  [SMALL_STATE(49)] = 470,
  [SMALL_STATE(50)] = 474,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factor, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(49),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_definition, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector_definition, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(33),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_value, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_matlab(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
