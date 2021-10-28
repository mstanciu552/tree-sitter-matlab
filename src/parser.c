#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_function = 1,
  anon_sym_ = 2,
  anon_sym_2 = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  sym_identifier = 8,
  sym__operator = 9,
  sym__number = 10,
  sym__end = 11,
  sym_source_file = 12,
  sym_expression = 13,
  sym_statement = 14,
  sym_function_definition = 15,
  sym_return_variable = 16,
  sym_function_name = 17,
  sym_parameter_list = 18,
  sym_block = 19,
  sym__whitespace = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_parameter_list_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_function] = "function",
  [anon_sym_] = "",
  [anon_sym_2] = " ",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym__operator] = "_operator",
  [sym__number] = "_number",
  [sym__end] = "_end",
  [sym_source_file] = "source_file",
  [sym_expression] = "expression",
  [sym_statement] = "statement",
  [sym_function_definition] = "function_definition",
  [sym_return_variable] = "return_variable",
  [sym_function_name] = "function_name",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [sym__whitespace] = "_whitespace",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym__operator] = sym__operator,
  [sym__number] = sym__number,
  [sym__end] = sym__end,
  [sym_source_file] = sym_source_file,
  [sym_expression] = sym_expression,
  [sym_statement] = sym_statement,
  [sym_function_definition] = sym_function_definition,
  [sym_return_variable] = sym_return_variable,
  [sym_function_name] = sym_function_name,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [sym__whitespace] = sym__whitespace,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_return_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
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
      if (eof) ADVANCE(13);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == '=') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == '=') ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_function);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__operator);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__operator] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(62),
    [sym_expression] = STATE(15),
    [sym_statement] = STATE(6),
    [sym_function_definition] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_function,
    ACTIONS(14), 1,
      sym_identifier,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(15), 2,
      sym_expression,
      sym_function_definition,
  [18] = 5,
    ACTIONS(17), 1,
      anon_sym_function,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(4), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_expression,
      sym_function_definition,
  [36] = 5,
    ACTIONS(17), 1,
      anon_sym_function,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(5), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_expression,
      sym_function_definition,
  [54] = 5,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_function,
    ACTIONS(28), 1,
      sym_identifier,
    STATE(5), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_expression,
      sym_function_definition,
  [72] = 5,
    ACTIONS(5), 1,
      anon_sym_function,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(15), 2,
      sym_expression,
      sym_function_definition,
  [90] = 4,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_parameter_list_repeat1,
  [103] = 2,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 2,
      anon_sym_function,
      sym_identifier,
  [111] = 3,
    ACTIONS(43), 1,
      anon_sym_2,
    ACTIONS(45), 1,
      sym__operator,
    STATE(51), 1,
      sym__whitespace,
  [121] = 2,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 2,
      anon_sym_function,
      sym_identifier,
  [129] = 2,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 2,
      anon_sym_function,
      sym_identifier,
  [137] = 3,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(9), 1,
      sym_return_variable,
    STATE(34), 1,
      sym_function_name,
  [147] = 2,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 2,
      anon_sym_function,
      sym_identifier,
  [155] = 3,
    ACTIONS(61), 1,
      anon_sym_2,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      sym__operator,
  [165] = 2,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 2,
      anon_sym_function,
      sym_identifier,
  [173] = 2,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 2,
      anon_sym_function,
      sym_identifier,
  [181] = 2,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 2,
      anon_sym_function,
      sym_identifier,
  [189] = 2,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 2,
      anon_sym_function,
      sym_identifier,
  [197] = 2,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 2,
      anon_sym_function,
      sym_identifier,
  [205] = 3,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(22), 1,
      sym_return_variable,
    STATE(38), 1,
      sym_function_name,
  [215] = 3,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym_parameter_list_repeat1,
  [225] = 3,
    ACTIONS(75), 1,
      anon_sym_2,
    ACTIONS(77), 1,
      sym__operator,
    STATE(63), 1,
      sym__whitespace,
  [235] = 2,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 2,
      anon_sym_function,
      sym_identifier,
  [243] = 3,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym_parameter_list_repeat1,
  [253] = 2,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
  [260] = 2,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_block,
  [267] = 1,
    ACTIONS(86), 2,
      anon_sym_,
      anon_sym_2,
  [272] = 1,
    ACTIONS(88), 2,
      anon_sym_,
      anon_sym_2,
  [277] = 2,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_parameter_list,
  [284] = 2,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(33), 1,
      sym_function_name,
  [291] = 2,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(35), 1,
      sym_function_name,
  [298] = 2,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(37), 1,
      sym_function_name,
  [305] = 2,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_parameter_list,
  [312] = 2,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_parameter_list,
  [319] = 2,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_parameter_list,
  [326] = 2,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_block,
  [333] = 2,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_parameter_list,
  [340] = 2,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_parameter_list,
  [347] = 2,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_block,
  [354] = 1,
    ACTIONS(94), 2,
      anon_sym_,
      anon_sym_2,
  [359] = 2,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(29), 1,
      sym_function_name,
  [366] = 2,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_block,
  [373] = 2,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_block,
  [380] = 1,
    ACTIONS(96), 2,
      anon_sym_,
      anon_sym_2,
  [385] = 1,
    ACTIONS(98), 1,
      sym__number,
  [389] = 1,
    ACTIONS(100), 1,
      sym__number,
  [393] = 1,
    ACTIONS(102), 1,
      sym__end,
  [397] = 1,
    ACTIONS(104), 1,
      sym__end,
  [401] = 1,
    ACTIONS(106), 1,
      sym__end,
  [405] = 1,
    ACTIONS(108), 1,
      sym__operator,
  [409] = 1,
    ACTIONS(110), 1,
      sym__operator,
  [413] = 1,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
  [417] = 1,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
  [421] = 1,
    ACTIONS(114), 1,
      sym__end,
  [425] = 1,
    ACTIONS(116), 1,
      sym__operator,
  [429] = 1,
    ACTIONS(118), 1,
      sym__end,
  [433] = 1,
    ACTIONS(120), 1,
      sym__end,
  [437] = 1,
    ACTIONS(122), 1,
      sym__end,
  [441] = 1,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
  [445] = 1,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
  [449] = 1,
    ACTIONS(128), 1,
      sym__end,
  [453] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
  [457] = 1,
    ACTIONS(132), 1,
      sym__operator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 103,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 121,
  [SMALL_STATE(11)] = 129,
  [SMALL_STATE(12)] = 137,
  [SMALL_STATE(13)] = 147,
  [SMALL_STATE(14)] = 155,
  [SMALL_STATE(15)] = 165,
  [SMALL_STATE(16)] = 173,
  [SMALL_STATE(17)] = 181,
  [SMALL_STATE(18)] = 189,
  [SMALL_STATE(19)] = 197,
  [SMALL_STATE(20)] = 205,
  [SMALL_STATE(21)] = 215,
  [SMALL_STATE(22)] = 225,
  [SMALL_STATE(23)] = 235,
  [SMALL_STATE(24)] = 243,
  [SMALL_STATE(25)] = 253,
  [SMALL_STATE(26)] = 260,
  [SMALL_STATE(27)] = 267,
  [SMALL_STATE(28)] = 272,
  [SMALL_STATE(29)] = 277,
  [SMALL_STATE(30)] = 284,
  [SMALL_STATE(31)] = 291,
  [SMALL_STATE(32)] = 298,
  [SMALL_STATE(33)] = 305,
  [SMALL_STATE(34)] = 312,
  [SMALL_STATE(35)] = 319,
  [SMALL_STATE(36)] = 326,
  [SMALL_STATE(37)] = 333,
  [SMALL_STATE(38)] = 340,
  [SMALL_STATE(39)] = 347,
  [SMALL_STATE(40)] = 354,
  [SMALL_STATE(41)] = 359,
  [SMALL_STATE(42)] = 366,
  [SMALL_STATE(43)] = 373,
  [SMALL_STATE(44)] = 380,
  [SMALL_STATE(45)] = 385,
  [SMALL_STATE(46)] = 389,
  [SMALL_STATE(47)] = 393,
  [SMALL_STATE(48)] = 397,
  [SMALL_STATE(49)] = 401,
  [SMALL_STATE(50)] = 405,
  [SMALL_STATE(51)] = 409,
  [SMALL_STATE(52)] = 413,
  [SMALL_STATE(53)] = 417,
  [SMALL_STATE(54)] = 421,
  [SMALL_STATE(55)] = 425,
  [SMALL_STATE(56)] = 429,
  [SMALL_STATE(57)] = 433,
  [SMALL_STATE(58)] = 437,
  [SMALL_STATE(59)] = 441,
  [SMALL_STATE(60)] = 445,
  [SMALL_STATE(61)] = 449,
  [SMALL_STATE(62)] = 453,
  [SMALL_STATE(63)] = 457,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_variable, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_variable, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(24),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lua(void) {
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
