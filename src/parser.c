#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
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
  sym__eq = 8,
  sym__number = 9,
  sym__function_keyword = 10,
  sym__end = 11,
  sym__whitespace = 12,
  sym_source_file = 13,
  sym_expression = 14,
  sym_operation = 15,
  sym__statement = 16,
  sym__value = 17,
  sym__math_expression = 18,
  sym_function_definition = 19,
  sym_return_variable = 20,
  sym_function_name = 21,
  sym_parameter_list = 22,
  sym_block = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_operation_repeat1 = 25,
  aux_sym_parameter_list_repeat1 = 26,
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
  [sym__eq] = "_eq",
  [sym__number] = "_number",
  [sym__function_keyword] = "_function_keyword",
  [sym__end] = "_end",
  [sym__whitespace] = "_whitespace",
  [sym_source_file] = "source_file",
  [sym_expression] = "expression",
  [sym_operation] = "operation",
  [sym__statement] = "_statement",
  [sym__value] = "_value",
  [sym__math_expression] = "_math_expression",
  [sym_function_definition] = "function_definition",
  [sym_return_variable] = "return_variable",
  [sym_function_name] = "function_name",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_operation_repeat1] = "operation_repeat1",
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
  [sym__eq] = sym__eq,
  [sym__number] = sym__number,
  [sym__function_keyword] = sym__function_keyword,
  [sym__end] = sym__end,
  [sym__whitespace] = sym__whitespace,
  [sym_source_file] = sym_source_file,
  [sym_expression] = sym_expression,
  [sym_operation] = sym_operation,
  [sym__statement] = sym__statement,
  [sym__value] = sym__value,
  [sym__math_expression] = sym__math_expression,
  [sym_function_definition] = sym_function_definition,
  [sym_return_variable] = sym_return_variable,
  [sym_function_name] = sym_function_name,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_operation_repeat1] = aux_sym_operation_repeat1,
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
  [sym__eq] = {
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
  [sym_operation] = {
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
  [aux_sym_operation_repeat1] = {
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
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '/')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '/')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
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
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(34);
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
      if (lookahead == 'n') ADVANCE(32);
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
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '/')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
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
      if (lookahead == 'n') ADVANCE(33);
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
      ACCEPT_TOKEN(sym__eq);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__function_keyword);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__function_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == ' ') ADVANCE(35);
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__operator] = ACTIONS(1),
    [sym__eq] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym__function_keyword] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(85),
    [sym_expression] = STATE(6),
    [sym_operation] = STATE(6),
    [sym__statement] = STATE(6),
    [sym__value] = STATE(11),
    [sym_function_definition] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym__number] = ACTIONS(7),
    [sym__function_keyword] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(16), 1,
      sym__number,
    ACTIONS(19), 1,
      sym__function_keyword,
    STATE(11), 1,
      sym__value,
    STATE(2), 5,
      sym_expression,
      sym_operation,
      sym__statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [23] = 6,
    ACTIONS(22), 1,
      anon_sym_LF,
    ACTIONS(24), 1,
      sym_identifier,
    ACTIONS(26), 1,
      sym__number,
    ACTIONS(28), 1,
      sym__function_keyword,
    STATE(10), 1,
      sym__value,
    STATE(5), 5,
      sym_expression,
      sym_operation,
      sym__statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [46] = 6,
    ACTIONS(24), 1,
      sym_identifier,
    ACTIONS(26), 1,
      sym__number,
    ACTIONS(28), 1,
      sym__function_keyword,
    ACTIONS(30), 1,
      anon_sym_LF,
    STATE(10), 1,
      sym__value,
    STATE(3), 5,
      sym_expression,
      sym_operation,
      sym__statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [69] = 6,
    ACTIONS(11), 1,
      anon_sym_LF,
    ACTIONS(32), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(38), 1,
      sym__function_keyword,
    STATE(10), 1,
      sym__value,
    STATE(5), 5,
      sym_expression,
      sym_operation,
      sym__statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [92] = 6,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym__number,
    ACTIONS(9), 1,
      sym__function_keyword,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym__value,
    STATE(2), 5,
      sym_expression,
      sym_operation,
      sym__statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [115] = 4,
    ACTIONS(43), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      sym__operator,
    STATE(8), 1,
      aux_sym_operation_repeat1,
    ACTIONS(45), 3,
      sym_identifier,
      sym__number,
      sym__function_keyword,
  [130] = 4,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(53), 1,
      sym__operator,
    STATE(8), 1,
      aux_sym_operation_repeat1,
    ACTIONS(51), 3,
      sym_identifier,
      sym__number,
      sym__function_keyword,
  [145] = 3,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(60), 1,
      sym__eq,
    ACTIONS(58), 4,
      sym_identifier,
      sym__operator,
      sym__number,
      sym__function_keyword,
  [158] = 4,
    ACTIONS(47), 1,
      sym__operator,
    ACTIONS(62), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_operation_repeat1,
    ACTIONS(64), 3,
      sym_identifier,
      sym__number,
      sym__function_keyword,
  [173] = 4,
    ACTIONS(66), 1,
      sym__operator,
    STATE(13), 1,
      aux_sym_operation_repeat1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym__number,
    ACTIONS(64), 2,
      sym_identifier,
      sym__function_keyword,
  [188] = 4,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    ACTIONS(70), 1,
      anon_sym_LF,
    ACTIONS(74), 1,
      sym__operator,
    ACTIONS(72), 3,
      sym_identifier,
      sym__number,
      sym__function_keyword,
  [203] = 4,
    ACTIONS(66), 1,
      sym__operator,
    STATE(16), 1,
      aux_sym_operation_repeat1,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym__number,
    ACTIONS(45), 2,
      sym_identifier,
      sym__function_keyword,
  [218] = 4,
    ACTIONS(76), 1,
      anon_sym_SEMI,
    ACTIONS(78), 1,
      sym__operator,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      sym__number,
    ACTIONS(72), 2,
      sym_identifier,
      sym__function_keyword,
  [233] = 3,
    ACTIONS(80), 1,
      sym__eq,
    ACTIONS(58), 2,
      sym_identifier,
      sym__function_keyword,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      sym__operator,
      sym__number,
  [246] = 4,
    ACTIONS(82), 1,
      sym__operator,
    STATE(16), 1,
      aux_sym_operation_repeat1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym__number,
    ACTIONS(51), 2,
      sym_identifier,
      sym__function_keyword,
  [261] = 3,
    ACTIONS(76), 1,
      anon_sym_SEMI,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      sym__number,
    ACTIONS(72), 2,
      sym_identifier,
      sym__function_keyword,
  [273] = 2,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(85), 4,
      anon_sym_SEMI,
      sym_identifier,
      sym__number,
      sym__function_keyword,
  [283] = 2,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(51), 4,
      sym_identifier,
      sym__operator,
      sym__number,
      sym__function_keyword,
  [293] = 2,
    ACTIONS(51), 2,
      sym_identifier,
      sym__function_keyword,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      sym__operator,
      sym__number,
  [303] = 2,
    ACTIONS(85), 2,
      sym_identifier,
      sym__function_keyword,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__number,
  [313] = 3,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    ACTIONS(70), 1,
      anon_sym_LF,
    ACTIONS(72), 3,
      sym_identifier,
      sym__number,
      sym__function_keyword,
  [325] = 3,
    STATE(12), 1,
      sym__value,
    STATE(22), 1,
      sym__math_expression,
    ACTIONS(89), 2,
      sym_identifier,
      sym__number,
  [336] = 2,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym__number,
    ACTIONS(93), 2,
      sym_identifier,
      sym__function_keyword,
  [345] = 2,
    ACTIONS(95), 1,
      anon_sym_LF,
    ACTIONS(97), 3,
      sym_identifier,
      sym__number,
      sym__function_keyword,
  [354] = 3,
    STATE(14), 1,
      sym__value,
    STATE(17), 1,
      sym__math_expression,
    ACTIONS(99), 2,
      sym_identifier,
      sym__number,
  [365] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym__number,
    ACTIONS(103), 2,
      sym_identifier,
      sym__function_keyword,
  [374] = 2,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(93), 3,
      sym_identifier,
      sym__number,
      sym__function_keyword,
  [383] = 2,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(103), 3,
      sym_identifier,
      sym__number,
      sym__function_keyword,
  [392] = 2,
    ACTIONS(105), 1,
      anon_sym_LF,
    ACTIONS(107), 3,
      sym_identifier,
      sym__number,
      sym__function_keyword,
  [401] = 2,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(111), 3,
      sym_identifier,
      sym__number,
      sym__function_keyword,
  [410] = 2,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym__number,
    ACTIONS(97), 2,
      sym_identifier,
      sym__function_keyword,
  [419] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym__number,
    ACTIONS(115), 2,
      sym_identifier,
      sym__function_keyword,
  [428] = 2,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(119), 3,
      sym_identifier,
      sym__number,
      sym__function_keyword,
  [437] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym__number,
    ACTIONS(111), 2,
      sym_identifier,
      sym__function_keyword,
  [446] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      sym__number,
    ACTIONS(119), 2,
      sym_identifier,
      sym__function_keyword,
  [455] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym__number,
    ACTIONS(107), 2,
      sym_identifier,
      sym__function_keyword,
  [464] = 2,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(115), 3,
      sym_identifier,
      sym__number,
      sym__function_keyword,
  [473] = 2,
    STATE(21), 1,
      sym__value,
    ACTIONS(121), 2,
      sym_identifier,
      sym__number,
  [481] = 3,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(125), 1,
      sym__end,
    STATE(88), 1,
      sym_block,
  [491] = 3,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(129), 1,
      sym__whitespace,
    STATE(63), 1,
      sym_function_name,
  [501] = 3,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(131), 1,
      sym__whitespace,
    STATE(75), 1,
      sym_function_name,
  [511] = 3,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(64), 1,
      sym_return_variable,
    STATE(77), 1,
      sym_function_name,
  [521] = 3,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(135), 1,
      sym__end,
    STATE(84), 1,
      sym_block,
  [531] = 3,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(70), 1,
      sym_function_name,
    STATE(71), 1,
      sym_return_variable,
  [541] = 3,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(137), 1,
      sym__end,
    STATE(81), 1,
      sym_block,
  [551] = 3,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(139), 1,
      sym__end,
    STATE(79), 1,
      sym_block,
  [561] = 3,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(141), 1,
      sym__end,
    STATE(80), 1,
      sym_block,
  [571] = 3,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(143), 1,
      sym__end,
    STATE(83), 1,
      sym_block,
  [581] = 3,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      sym__eq,
    ACTIONS(149), 1,
      sym__whitespace,
  [591] = 3,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(151), 1,
      sym__end,
    STATE(87), 1,
      sym_block,
  [601] = 3,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym__end,
    STATE(86), 1,
      sym_block,
  [611] = 2,
    STATE(20), 1,
      sym__value,
    ACTIONS(155), 2,
      sym_identifier,
      sym__number,
  [619] = 3,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(54), 1,
      aux_sym_parameter_list_repeat1,
  [629] = 3,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym__whitespace,
    STATE(66), 1,
      sym_function_name,
  [639] = 3,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(54), 1,
      aux_sym_parameter_list_repeat1,
  [649] = 2,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(170), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [657] = 2,
    STATE(19), 1,
      sym__value,
    ACTIONS(172), 2,
      sym_identifier,
      sym__number,
  [665] = 2,
    STATE(18), 1,
      sym__value,
    ACTIONS(174), 2,
      sym_identifier,
      sym__number,
  [673] = 3,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym__whitespace,
    STATE(62), 1,
      sym_function_name,
  [683] = 3,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_parameter_list_repeat1,
  [693] = 2,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_parameter_list,
  [700] = 2,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_parameter_list,
  [707] = 2,
    ACTIONS(182), 1,
      sym__eq,
    ACTIONS(184), 1,
      sym__whitespace,
  [714] = 2,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(73), 1,
      sym_function_name,
  [721] = 2,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_parameter_list,
  [728] = 1,
    ACTIONS(157), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [733] = 2,
    ACTIONS(188), 1,
      anon_sym_LF,
    ACTIONS(190), 1,
      sym__end,
  [740] = 2,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(63), 1,
      sym_function_name,
  [747] = 2,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_parameter_list,
  [754] = 2,
    ACTIONS(192), 1,
      sym__eq,
    ACTIONS(194), 1,
      sym__whitespace,
  [761] = 2,
    ACTIONS(196), 1,
      anon_sym_LF,
    ACTIONS(198), 1,
      sym__end,
  [768] = 2,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_parameter_list,
  [775] = 2,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(62), 1,
      sym_function_name,
  [782] = 2,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_parameter_list,
  [789] = 2,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(78), 1,
      sym_function_name,
  [796] = 2,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_parameter_list,
  [803] = 2,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_parameter_list,
  [810] = 1,
    ACTIONS(200), 1,
      sym__end,
  [814] = 1,
    ACTIONS(202), 1,
      sym__end,
  [818] = 1,
    ACTIONS(204), 1,
      sym__end,
  [822] = 1,
    ACTIONS(206), 1,
      sym__end,
  [826] = 1,
    ACTIONS(208), 1,
      sym__end,
  [830] = 1,
    ACTIONS(210), 1,
      sym__end,
  [834] = 1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [838] = 1,
    ACTIONS(214), 1,
      sym__end,
  [842] = 1,
    ACTIONS(216), 1,
      sym__end,
  [846] = 1,
    ACTIONS(218), 1,
      sym__end,
  [850] = 1,
    ACTIONS(220), 1,
      sym__eq,
  [854] = 1,
    ACTIONS(222), 1,
      sym__end,
  [858] = 1,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
  [862] = 1,
    ACTIONS(226), 1,
      sym__eq,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 130,
  [SMALL_STATE(9)] = 145,
  [SMALL_STATE(10)] = 158,
  [SMALL_STATE(11)] = 173,
  [SMALL_STATE(12)] = 188,
  [SMALL_STATE(13)] = 203,
  [SMALL_STATE(14)] = 218,
  [SMALL_STATE(15)] = 233,
  [SMALL_STATE(16)] = 246,
  [SMALL_STATE(17)] = 261,
  [SMALL_STATE(18)] = 273,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 293,
  [SMALL_STATE(21)] = 303,
  [SMALL_STATE(22)] = 313,
  [SMALL_STATE(23)] = 325,
  [SMALL_STATE(24)] = 336,
  [SMALL_STATE(25)] = 345,
  [SMALL_STATE(26)] = 354,
  [SMALL_STATE(27)] = 365,
  [SMALL_STATE(28)] = 374,
  [SMALL_STATE(29)] = 383,
  [SMALL_STATE(30)] = 392,
  [SMALL_STATE(31)] = 401,
  [SMALL_STATE(32)] = 410,
  [SMALL_STATE(33)] = 419,
  [SMALL_STATE(34)] = 428,
  [SMALL_STATE(35)] = 437,
  [SMALL_STATE(36)] = 446,
  [SMALL_STATE(37)] = 455,
  [SMALL_STATE(38)] = 464,
  [SMALL_STATE(39)] = 473,
  [SMALL_STATE(40)] = 481,
  [SMALL_STATE(41)] = 491,
  [SMALL_STATE(42)] = 501,
  [SMALL_STATE(43)] = 511,
  [SMALL_STATE(44)] = 521,
  [SMALL_STATE(45)] = 531,
  [SMALL_STATE(46)] = 541,
  [SMALL_STATE(47)] = 551,
  [SMALL_STATE(48)] = 561,
  [SMALL_STATE(49)] = 571,
  [SMALL_STATE(50)] = 581,
  [SMALL_STATE(51)] = 591,
  [SMALL_STATE(52)] = 601,
  [SMALL_STATE(53)] = 611,
  [SMALL_STATE(54)] = 619,
  [SMALL_STATE(55)] = 629,
  [SMALL_STATE(56)] = 639,
  [SMALL_STATE(57)] = 649,
  [SMALL_STATE(58)] = 657,
  [SMALL_STATE(59)] = 665,
  [SMALL_STATE(60)] = 673,
  [SMALL_STATE(61)] = 683,
  [SMALL_STATE(62)] = 693,
  [SMALL_STATE(63)] = 700,
  [SMALL_STATE(64)] = 707,
  [SMALL_STATE(65)] = 714,
  [SMALL_STATE(66)] = 721,
  [SMALL_STATE(67)] = 728,
  [SMALL_STATE(68)] = 733,
  [SMALL_STATE(69)] = 740,
  [SMALL_STATE(70)] = 747,
  [SMALL_STATE(71)] = 754,
  [SMALL_STATE(72)] = 761,
  [SMALL_STATE(73)] = 768,
  [SMALL_STATE(74)] = 775,
  [SMALL_STATE(75)] = 782,
  [SMALL_STATE(76)] = 789,
  [SMALL_STATE(77)] = 796,
  [SMALL_STATE(78)] = 803,
  [SMALL_STATE(79)] = 810,
  [SMALL_STATE(80)] = 814,
  [SMALL_STATE(81)] = 818,
  [SMALL_STATE(82)] = 822,
  [SMALL_STATE(83)] = 826,
  [SMALL_STATE(84)] = 830,
  [SMALL_STATE(85)] = 834,
  [SMALL_STATE(86)] = 838,
  [SMALL_STATE(87)] = 842,
  [SMALL_STATE(88)] = 846,
  [SMALL_STATE(89)] = 850,
  [SMALL_STATE(90)] = 854,
  [SMALL_STATE(91)] = 858,
  [SMALL_STATE(92)] = 862,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operation_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operation_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operation_repeat1, 2), SHIFT_REPEAT(58),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operation_repeat1, 2), SHIFT_REPEAT(53),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_expression, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_expression, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_variable, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_variable, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(57),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [212] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
