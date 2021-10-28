#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_LF = 3,
  sym_identifier = 4,
  sym__operator = 5,
  sym__number = 6,
  sym__function_keyword = 7,
  sym__end = 8,
  sym__whitespace = 9,
  sym_source_file = 10,
  sym_expression = 11,
  sym__statement = 12,
  sym_function_definition = 13,
  sym_return_variable = 14,
  sym_function_name = 15,
  sym_parameter_list = 16,
  sym_block = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_parameter_list_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LF] = "\n",
  [sym_identifier] = "identifier",
  [sym__operator] = "_operator",
  [sym__number] = "_number",
  [sym__function_keyword] = "_function_keyword",
  [sym__end] = "_end",
  [sym__whitespace] = "_whitespace",
  [sym_source_file] = "source_file",
  [sym_expression] = "expression",
  [sym__statement] = "_statement",
  [sym_function_definition] = "function_definition",
  [sym_return_variable] = "return_variable",
  [sym_function_name] = "function_name",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LF] = anon_sym_LF,
  [sym_identifier] = sym_identifier,
  [sym__operator] = sym__operator,
  [sym__number] = sym__number,
  [sym__function_keyword] = sym__function_keyword,
  [sym__end] = sym__end,
  [sym__whitespace] = sym__whitespace,
  [sym_source_file] = sym_source_file,
  [sym_expression] = sym_expression,
  [sym__statement] = sym__statement,
  [sym_function_definition] = sym_function_definition,
  [sym_return_variable] = sym_return_variable,
  [sym_function_name] = sym_function_name,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
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
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
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
  [sym__function_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
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
  [sym__statement] = {
    .visible = false,
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
      if (eof) ADVANCE(15);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == '=') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == '=') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__operator);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__function_keyword);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__function_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
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
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__operator] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym__function_keyword] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(69),
    [sym_expression] = STATE(5),
    [sym__statement] = STATE(5),
    [sym_function_definition] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym__function_keyword] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(14), 1,
      sym__function_keyword,
    STATE(2), 4,
      sym_expression,
      sym__statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [16] = 4,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym__function_keyword,
    STATE(2), 4,
      sym_expression,
      sym__statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [32] = 4,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym__function_keyword,
    ACTIONS(23), 1,
      anon_sym_LF,
    STATE(3), 4,
      sym_expression,
      sym__statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [48] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym__function_keyword,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(6), 4,
      sym_expression,
      sym__statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [64] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(30), 1,
      sym__function_keyword,
    STATE(6), 4,
      sym_expression,
      sym__statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [80] = 2,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(35), 2,
      sym_identifier,
      sym__function_keyword,
  [88] = 3,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      sym__whitespace,
    STATE(40), 1,
      sym_function_name,
  [98] = 3,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym__operator,
    ACTIONS(45), 1,
      sym__whitespace,
  [108] = 3,
    ACTIONS(47), 1,
      anon_sym_LF,
    ACTIONS(49), 1,
      sym__end,
    STATE(60), 1,
      sym_block,
  [118] = 3,
    ACTIONS(47), 1,
      anon_sym_LF,
    ACTIONS(51), 1,
      sym__end,
    STATE(58), 1,
      sym_block,
  [128] = 2,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 2,
      sym_identifier,
      sym__function_keyword,
  [136] = 3,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym__whitespace,
    STATE(53), 1,
      sym_function_name,
  [146] = 3,
    ACTIONS(47), 1,
      anon_sym_LF,
    ACTIONS(59), 1,
      sym__end,
    STATE(57), 1,
      sym_block,
  [156] = 3,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_parameter_list_repeat1,
  [166] = 3,
    ACTIONS(47), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      sym__end,
    STATE(63), 1,
      sym_block,
  [176] = 3,
    ACTIONS(47), 1,
      anon_sym_LF,
    ACTIONS(67), 1,
      sym__end,
    STATE(59), 1,
      sym_block,
  [186] = 2,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 2,
      sym_identifier,
      sym__function_keyword,
  [194] = 3,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym__whitespace,
    STATE(49), 1,
      sym_function_name,
  [204] = 2,
    ACTIONS(71), 1,
      anon_sym_LF,
    ACTIONS(73), 2,
      sym_identifier,
      sym__function_keyword,
  [212] = 3,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(29), 1,
      aux_sym_parameter_list_repeat1,
  [222] = 3,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(42), 1,
      sym_return_variable,
    STATE(52), 1,
      sym_function_name,
  [232] = 2,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 2,
      sym_identifier,
      sym__function_keyword,
  [240] = 2,
    ACTIONS(85), 1,
      anon_sym_LF,
    ACTIONS(87), 2,
      sym_identifier,
      sym__function_keyword,
  [248] = 2,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(91), 2,
      sym_identifier,
      sym__function_keyword,
  [256] = 3,
    ACTIONS(47), 1,
      anon_sym_LF,
    ACTIONS(93), 1,
      sym__end,
    STATE(66), 1,
      sym_block,
  [266] = 2,
    ACTIONS(95), 1,
      anon_sym_LF,
    ACTIONS(97), 2,
      sym_identifier,
      sym__function_keyword,
  [274] = 2,
    ACTIONS(81), 1,
      anon_sym_LF,
    ACTIONS(83), 2,
      sym_identifier,
      sym__function_keyword,
  [282] = 3,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    STATE(29), 1,
      aux_sym_parameter_list_repeat1,
  [292] = 2,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(55), 2,
      sym_identifier,
      sym__function_keyword,
  [300] = 3,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(104), 1,
      sym__whitespace,
    STATE(50), 1,
      sym_function_name,
  [310] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 2,
      sym_identifier,
      sym__function_keyword,
  [318] = 3,
    ACTIONS(47), 1,
      anon_sym_LF,
    ACTIONS(106), 1,
      sym__end,
    STATE(70), 1,
      sym_block,
  [328] = 2,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 2,
      sym_identifier,
      sym__function_keyword,
  [336] = 3,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(45), 1,
      sym_return_variable,
    STATE(54), 1,
      sym_function_name,
  [346] = 2,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 2,
      sym_identifier,
      sym__function_keyword,
  [354] = 3,
    ACTIONS(47), 1,
      anon_sym_LF,
    ACTIONS(108), 1,
      sym__end,
    STATE(71), 1,
      sym_block,
  [364] = 2,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 2,
      sym_identifier,
      sym__function_keyword,
  [372] = 2,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(49), 1,
      sym_function_name,
  [379] = 2,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_parameter_list,
  [386] = 2,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_parameter_list,
  [393] = 2,
    ACTIONS(114), 1,
      sym__operator,
    ACTIONS(116), 1,
      sym__whitespace,
  [400] = 2,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(46), 1,
      sym_function_name,
  [407] = 2,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(40), 1,
      sym_function_name,
  [414] = 2,
    ACTIONS(118), 1,
      sym__operator,
    ACTIONS(120), 1,
      sym__whitespace,
  [421] = 2,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_parameter_list,
  [428] = 2,
    ACTIONS(122), 1,
      anon_sym_LF,
    ACTIONS(124), 1,
      sym__end,
  [435] = 2,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(41), 1,
      sym_function_name,
  [442] = 2,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_parameter_list,
  [449] = 2,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_parameter_list,
  [456] = 2,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(128), 1,
      sym__end,
  [463] = 2,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_parameter_list,
  [470] = 2,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_parameter_list,
  [477] = 2,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_parameter_list,
  [484] = 1,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
  [488] = 1,
    ACTIONS(132), 1,
      sym__operator,
  [492] = 1,
    ACTIONS(134), 1,
      sym__end,
  [496] = 1,
    ACTIONS(136), 1,
      sym__end,
  [500] = 1,
    ACTIONS(138), 1,
      sym__end,
  [504] = 1,
    ACTIONS(140), 1,
      sym__end,
  [508] = 1,
    ACTIONS(142), 1,
      sym__operator,
  [512] = 1,
    ACTIONS(144), 1,
      sym__number,
  [516] = 1,
    ACTIONS(146), 1,
      sym__end,
  [520] = 1,
    ACTIONS(148), 1,
      sym__end,
  [524] = 1,
    ACTIONS(150), 1,
      sym__end,
  [528] = 1,
    ACTIONS(152), 1,
      sym__end,
  [532] = 1,
    ACTIONS(154), 1,
      sym__number,
  [536] = 1,
    ACTIONS(156), 1,
      sym__operator,
  [540] = 1,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
  [544] = 1,
    ACTIONS(160), 1,
      sym__end,
  [548] = 1,
    ACTIONS(162), 1,
      sym__end,
  [552] = 1,
    ACTIONS(164), 1,
      sym__operator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 80,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 108,
  [SMALL_STATE(11)] = 118,
  [SMALL_STATE(12)] = 128,
  [SMALL_STATE(13)] = 136,
  [SMALL_STATE(14)] = 146,
  [SMALL_STATE(15)] = 156,
  [SMALL_STATE(16)] = 166,
  [SMALL_STATE(17)] = 176,
  [SMALL_STATE(18)] = 186,
  [SMALL_STATE(19)] = 194,
  [SMALL_STATE(20)] = 204,
  [SMALL_STATE(21)] = 212,
  [SMALL_STATE(22)] = 222,
  [SMALL_STATE(23)] = 232,
  [SMALL_STATE(24)] = 240,
  [SMALL_STATE(25)] = 248,
  [SMALL_STATE(26)] = 256,
  [SMALL_STATE(27)] = 266,
  [SMALL_STATE(28)] = 274,
  [SMALL_STATE(29)] = 282,
  [SMALL_STATE(30)] = 292,
  [SMALL_STATE(31)] = 300,
  [SMALL_STATE(32)] = 310,
  [SMALL_STATE(33)] = 318,
  [SMALL_STATE(34)] = 328,
  [SMALL_STATE(35)] = 336,
  [SMALL_STATE(36)] = 346,
  [SMALL_STATE(37)] = 354,
  [SMALL_STATE(38)] = 364,
  [SMALL_STATE(39)] = 372,
  [SMALL_STATE(40)] = 379,
  [SMALL_STATE(41)] = 386,
  [SMALL_STATE(42)] = 393,
  [SMALL_STATE(43)] = 400,
  [SMALL_STATE(44)] = 407,
  [SMALL_STATE(45)] = 414,
  [SMALL_STATE(46)] = 421,
  [SMALL_STATE(47)] = 428,
  [SMALL_STATE(48)] = 435,
  [SMALL_STATE(49)] = 442,
  [SMALL_STATE(50)] = 449,
  [SMALL_STATE(51)] = 456,
  [SMALL_STATE(52)] = 463,
  [SMALL_STATE(53)] = 470,
  [SMALL_STATE(54)] = 477,
  [SMALL_STATE(55)] = 484,
  [SMALL_STATE(56)] = 488,
  [SMALL_STATE(57)] = 492,
  [SMALL_STATE(58)] = 496,
  [SMALL_STATE(59)] = 500,
  [SMALL_STATE(60)] = 504,
  [SMALL_STATE(61)] = 508,
  [SMALL_STATE(62)] = 512,
  [SMALL_STATE(63)] = 516,
  [SMALL_STATE(64)] = 520,
  [SMALL_STATE(65)] = 524,
  [SMALL_STATE(66)] = 528,
  [SMALL_STATE(67)] = 532,
  [SMALL_STATE(68)] = 536,
  [SMALL_STATE(69)] = 540,
  [SMALL_STATE(70)] = 544,
  [SMALL_STATE(71)] = 548,
  [SMALL_STATE(72)] = 552,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_variable, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_variable, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(29),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [158] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
