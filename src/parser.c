#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LF = 5,
  sym_identifier = 6,
  sym__operator = 7,
  sym__number = 8,
  sym__function_keyword = 9,
  sym__end = 10,
  sym__whitespace = 11,
  sym_source_file = 12,
  sym_expression = 13,
  sym__statement = 14,
  sym__value = 15,
  sym__math_expression = 16,
  sym_function_definition = 17,
  sym_return_variable = 18,
  sym_function_name = 19,
  sym_parameter_list = 20,
  sym_block = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_parameter_list_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
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
  [sym__value] = "_value",
  [sym__math_expression] = "_math_expression",
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym__value] = sym__value,
  [sym__math_expression] = sym__math_expression,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
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
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__math_expression] = {
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
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == '=') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == '=') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == '=') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(33);
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
      if (lookahead == 'n') ADVANCE(31);
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
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == '=') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__operator);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__function_keyword);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__function_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 14},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__operator] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym__function_keyword] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym_expression] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym__function_keyword] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym__function_keyword,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(4), 4,
      sym_expression,
      sym__statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [16] = 4,
    ACTIONS(11), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(16), 1,
      sym__function_keyword,
    STATE(3), 4,
      sym_expression,
      sym__statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [32] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(22), 1,
      sym__function_keyword,
    STATE(4), 4,
      sym_expression,
      sym__statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [48] = 4,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym__function_keyword,
    STATE(3), 4,
      sym_expression,
      sym__statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [64] = 4,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym__function_keyword,
    ACTIONS(31), 1,
      anon_sym_LF,
    STATE(5), 4,
      sym_expression,
      sym__statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [80] = 4,
    ACTIONS(33), 1,
      anon_sym_SEMI,
    ACTIONS(35), 1,
      anon_sym_LF,
    ACTIONS(39), 1,
      sym__operator,
    ACTIONS(37), 2,
      sym_identifier,
      sym__function_keyword,
  [94] = 4,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym__operator,
    ACTIONS(37), 2,
      sym_identifier,
      sym__function_keyword,
  [108] = 2,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(47), 2,
      sym_identifier,
      sym__function_keyword,
  [117] = 3,
    STATE(7), 1,
      sym__value,
    STATE(13), 1,
      sym__math_expression,
    ACTIONS(49), 2,
      sym_identifier,
      sym__number,
  [128] = 2,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(47), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym__function_keyword,
  [137] = 3,
    STATE(8), 1,
      sym__value,
    STATE(14), 1,
      sym__math_expression,
    ACTIONS(51), 2,
      sym_identifier,
      sym__number,
  [148] = 3,
    ACTIONS(33), 1,
      anon_sym_SEMI,
    ACTIONS(35), 1,
      anon_sym_LF,
    ACTIONS(37), 2,
      sym_identifier,
      sym__function_keyword,
  [159] = 3,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(37), 2,
      sym_identifier,
      sym__function_keyword,
  [170] = 2,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(55), 2,
      sym_identifier,
      sym__function_keyword,
  [178] = 3,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(59), 1,
      sym__end,
    STATE(69), 1,
      sym_block,
  [188] = 3,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym_parameter_list_repeat1,
  [198] = 3,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      sym__end,
    STATE(73), 1,
      sym_block,
  [208] = 2,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 2,
      sym_identifier,
      sym__function_keyword,
  [216] = 2,
    STATE(9), 1,
      sym__value,
    ACTIONS(71), 2,
      sym_identifier,
      sym__number,
  [224] = 3,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      sym__whitespace,
    STATE(64), 1,
      sym_function_name,
  [234] = 3,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(77), 1,
      sym__whitespace,
    STATE(65), 1,
      sym_function_name,
  [244] = 3,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(53), 1,
      sym_return_variable,
    STATE(66), 1,
      sym_function_name,
  [254] = 3,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym__whitespace,
    STATE(63), 1,
      sym_function_name,
  [264] = 3,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      sym__end,
    STATE(70), 1,
      sym_block,
  [274] = 2,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(87), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [282] = 3,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_parameter_list_repeat1,
  [292] = 2,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 2,
      sym_identifier,
      sym__function_keyword,
  [300] = 3,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(95), 1,
      sym__end,
    STATE(68), 1,
      sym_block,
  [310] = 3,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(97), 1,
      sym__end,
    STATE(75), 1,
      sym_block,
  [320] = 3,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(99), 1,
      sym__end,
    STATE(80), 1,
      sym_block,
  [330] = 3,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(51), 1,
      sym_function_name,
    STATE(52), 1,
      sym_return_variable,
  [340] = 2,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(103), 2,
      sym_identifier,
      sym__function_keyword,
  [348] = 2,
    ACTIONS(105), 1,
      anon_sym_LF,
    ACTIONS(107), 2,
      sym_identifier,
      sym__function_keyword,
  [356] = 3,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_parameter_list_repeat1,
  [366] = 2,
    ACTIONS(114), 1,
      anon_sym_LF,
    ACTIONS(116), 2,
      sym_identifier,
      sym__function_keyword,
  [374] = 2,
    ACTIONS(118), 1,
      anon_sym_LF,
    ACTIONS(120), 2,
      sym_identifier,
      sym__function_keyword,
  [382] = 2,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 2,
      sym_identifier,
      sym__function_keyword,
  [390] = 3,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(122), 1,
      sym__end,
    STATE(72), 1,
      sym_block,
  [400] = 2,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 2,
      sym_identifier,
      sym__function_keyword,
  [408] = 3,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      sym__operator,
    ACTIONS(128), 1,
      sym__whitespace,
  [418] = 2,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(93), 2,
      sym_identifier,
      sym__function_keyword,
  [426] = 2,
    STATE(11), 1,
      sym__value,
    ACTIONS(130), 2,
      sym_identifier,
      sym__number,
  [434] = 2,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 2,
      sym_identifier,
      sym__function_keyword,
  [442] = 2,
    ACTIONS(67), 1,
      anon_sym_LF,
    ACTIONS(69), 2,
      sym_identifier,
      sym__function_keyword,
  [450] = 3,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(132), 1,
      sym__end,
    STATE(77), 1,
      sym_block,
  [460] = 2,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 2,
      sym_identifier,
      sym__function_keyword,
  [468] = 3,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(134), 1,
      sym__whitespace,
    STATE(58), 1,
      sym_function_name,
  [478] = 2,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 2,
      sym_identifier,
      sym__function_keyword,
  [486] = 2,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(138), 1,
      sym__end,
  [493] = 2,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_parameter_list,
  [500] = 2,
    ACTIONS(142), 1,
      sym__operator,
    ACTIONS(144), 1,
      sym__whitespace,
  [507] = 2,
    ACTIONS(146), 1,
      sym__operator,
    ACTIONS(148), 1,
      sym__whitespace,
  [514] = 2,
    ACTIONS(150), 1,
      sym_identifier,
    STATE(60), 1,
      sym_function_name,
  [521] = 2,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_parameter_list,
  [528] = 2,
    ACTIONS(150), 1,
      sym_identifier,
    STATE(64), 1,
      sym_function_name,
  [535] = 2,
    ACTIONS(150), 1,
      sym_identifier,
    STATE(63), 1,
      sym_function_name,
  [542] = 2,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_parameter_list,
  [549] = 2,
    ACTIONS(152), 1,
      anon_sym_LF,
    ACTIONS(154), 1,
      sym__end,
  [556] = 2,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_parameter_list,
  [563] = 1,
    ACTIONS(109), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [568] = 2,
    ACTIONS(150), 1,
      sym_identifier,
    STATE(55), 1,
      sym_function_name,
  [575] = 2,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_parameter_list,
  [582] = 2,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_parameter_list,
  [589] = 2,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_parameter_list,
  [596] = 2,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_parameter_list,
  [603] = 1,
    ACTIONS(156), 1,
      sym__end,
  [607] = 1,
    ACTIONS(158), 1,
      sym__end,
  [611] = 1,
    ACTIONS(160), 1,
      sym__end,
  [615] = 1,
    ACTIONS(162), 1,
      sym__end,
  [619] = 1,
    ACTIONS(164), 1,
      sym__operator,
  [623] = 1,
    ACTIONS(166), 1,
      sym__end,
  [627] = 1,
    ACTIONS(168), 1,
      sym__end,
  [631] = 1,
    ACTIONS(170), 1,
      sym__operator,
  [635] = 1,
    ACTIONS(172), 1,
      sym__end,
  [639] = 1,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
  [643] = 1,
    ACTIONS(176), 1,
      sym__end,
  [647] = 1,
    ACTIONS(178), 1,
      sym__operator,
  [651] = 1,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
  [655] = 1,
    ACTIONS(182), 1,
      sym__end,
  [659] = 1,
    ACTIONS(184), 1,
      sym__end,
  [663] = 1,
    ACTIONS(186), 1,
      sym__operator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 80,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 108,
  [SMALL_STATE(10)] = 117,
  [SMALL_STATE(11)] = 128,
  [SMALL_STATE(12)] = 137,
  [SMALL_STATE(13)] = 148,
  [SMALL_STATE(14)] = 159,
  [SMALL_STATE(15)] = 170,
  [SMALL_STATE(16)] = 178,
  [SMALL_STATE(17)] = 188,
  [SMALL_STATE(18)] = 198,
  [SMALL_STATE(19)] = 208,
  [SMALL_STATE(20)] = 216,
  [SMALL_STATE(21)] = 224,
  [SMALL_STATE(22)] = 234,
  [SMALL_STATE(23)] = 244,
  [SMALL_STATE(24)] = 254,
  [SMALL_STATE(25)] = 264,
  [SMALL_STATE(26)] = 274,
  [SMALL_STATE(27)] = 282,
  [SMALL_STATE(28)] = 292,
  [SMALL_STATE(29)] = 300,
  [SMALL_STATE(30)] = 310,
  [SMALL_STATE(31)] = 320,
  [SMALL_STATE(32)] = 330,
  [SMALL_STATE(33)] = 340,
  [SMALL_STATE(34)] = 348,
  [SMALL_STATE(35)] = 356,
  [SMALL_STATE(36)] = 366,
  [SMALL_STATE(37)] = 374,
  [SMALL_STATE(38)] = 382,
  [SMALL_STATE(39)] = 390,
  [SMALL_STATE(40)] = 400,
  [SMALL_STATE(41)] = 408,
  [SMALL_STATE(42)] = 418,
  [SMALL_STATE(43)] = 426,
  [SMALL_STATE(44)] = 434,
  [SMALL_STATE(45)] = 442,
  [SMALL_STATE(46)] = 450,
  [SMALL_STATE(47)] = 460,
  [SMALL_STATE(48)] = 468,
  [SMALL_STATE(49)] = 478,
  [SMALL_STATE(50)] = 486,
  [SMALL_STATE(51)] = 493,
  [SMALL_STATE(52)] = 500,
  [SMALL_STATE(53)] = 507,
  [SMALL_STATE(54)] = 514,
  [SMALL_STATE(55)] = 521,
  [SMALL_STATE(56)] = 528,
  [SMALL_STATE(57)] = 535,
  [SMALL_STATE(58)] = 542,
  [SMALL_STATE(59)] = 549,
  [SMALL_STATE(60)] = 556,
  [SMALL_STATE(61)] = 563,
  [SMALL_STATE(62)] = 568,
  [SMALL_STATE(63)] = 575,
  [SMALL_STATE(64)] = 582,
  [SMALL_STATE(65)] = 589,
  [SMALL_STATE(66)] = 596,
  [SMALL_STATE(67)] = 603,
  [SMALL_STATE(68)] = 607,
  [SMALL_STATE(69)] = 611,
  [SMALL_STATE(70)] = 615,
  [SMALL_STATE(71)] = 619,
  [SMALL_STATE(72)] = 623,
  [SMALL_STATE(73)] = 627,
  [SMALL_STATE(74)] = 631,
  [SMALL_STATE(75)] = 635,
  [SMALL_STATE(76)] = 639,
  [SMALL_STATE(77)] = 643,
  [SMALL_STATE(78)] = 647,
  [SMALL_STATE(79)] = 651,
  [SMALL_STATE(80)] = 655,
  [SMALL_STATE(81)] = 659,
  [SMALL_STATE(82)] = 663,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_expression, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_expression, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(26),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_variable, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_variable, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
