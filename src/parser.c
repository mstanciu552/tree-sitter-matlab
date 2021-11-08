#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 152
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_if = 6,
  anon_sym_for = 7,
  anon_sym_while = 8,
  sym_identifier = 9,
  anon_sym_SEMI = 10,
  sym__eq = 11,
  sym__operator = 12,
  sym__number = 13,
  sym_end = 14,
  sym_function_keyword = 15,
  sym__and = 16,
  sym__or = 17,
  sym__not = 18,
  sym__diff = 19,
  sym__comparator_equal = 20,
  anon_sym_true = 21,
  anon_sym_false = 22,
  anon_sym_PERCENT = 23,
  aux_sym_comment_token1 = 24,
  anon_sym_LF = 25,
  anon_sym_CR = 26,
  sym_source_file = 27,
  sym_structure = 28,
  sym_function_definition = 29,
  sym_bool = 30,
  sym_operation = 31,
  sym_expression = 32,
  sym_parameter_list = 33,
  sym_argument_list = 34,
  sym_return_value = 35,
  sym_block = 36,
  sym_structure_keyword = 37,
  sym_factor = 38,
  sym_function_call = 39,
  sym__semi_colon = 40,
  sym_vector_definition = 41,
  sym__bool_keywords = 42,
  sym_comment = 43,
  sym__end_of_line = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_parameter_list_repeat1 = 46,
  aux_sym_argument_list_repeat1 = 47,
  aux_sym_block_repeat1 = 48,
  aux_sym_vector_definition_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_if] = "if",
  [anon_sym_for] = "for",
  [anon_sym_while] = "while",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [sym__eq] = "_eq",
  [sym__operator] = "_operator",
  [sym__number] = "_number",
  [sym_end] = "end",
  [sym_function_keyword] = "function_keyword",
  [sym__and] = "_and",
  [sym__or] = "_or",
  [sym__not] = "_not",
  [sym__diff] = "_diff",
  [sym__comparator_equal] = "_comparator_equal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_PERCENT] = "%",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [sym_source_file] = "source_file",
  [sym_structure] = "structure",
  [sym_function_definition] = "function_definition",
  [sym_bool] = "bool",
  [sym_operation] = "operation",
  [sym_expression] = "expression",
  [sym_parameter_list] = "parameter_list",
  [sym_argument_list] = "argument_list",
  [sym_return_value] = "return_value",
  [sym_block] = "block",
  [sym_structure_keyword] = "structure_keyword",
  [sym_factor] = "factor",
  [sym_function_call] = "function_call",
  [sym__semi_colon] = "_semi_colon",
  [sym_vector_definition] = "vector_definition",
  [sym__bool_keywords] = "_bool_keywords",
  [sym_comment] = "comment",
  [sym__end_of_line] = "_end_of_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_vector_definition_repeat1] = "vector_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_while] = anon_sym_while,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__eq] = sym__eq,
  [sym__operator] = sym__operator,
  [sym__number] = sym__number,
  [sym_end] = sym_end,
  [sym_function_keyword] = sym_function_keyword,
  [sym__and] = sym__and,
  [sym__or] = sym__or,
  [sym__not] = sym__not,
  [sym__diff] = sym__diff,
  [sym__comparator_equal] = sym__comparator_equal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [sym_source_file] = sym_source_file,
  [sym_structure] = sym_structure,
  [sym_function_definition] = sym_function_definition,
  [sym_bool] = sym_bool,
  [sym_operation] = sym_operation,
  [sym_expression] = sym_expression,
  [sym_parameter_list] = sym_parameter_list,
  [sym_argument_list] = sym_argument_list,
  [sym_return_value] = sym_return_value,
  [sym_block] = sym_block,
  [sym_structure_keyword] = sym_structure_keyword,
  [sym_factor] = sym_factor,
  [sym_function_call] = sym_function_call,
  [sym__semi_colon] = sym__semi_colon,
  [sym_vector_definition] = sym_vector_definition,
  [sym__bool_keywords] = sym__bool_keywords,
  [sym_comment] = sym_comment,
  [sym__end_of_line] = sym__end_of_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_vector_definition_repeat1] = aux_sym_vector_definition_repeat1,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
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
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym_function_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__and] = {
    .visible = false,
    .named = true,
  },
  [sym__or] = {
    .visible = false,
    .named = true,
  },
  [sym__not] = {
    .visible = false,
    .named = true,
  },
  [sym__diff] = {
    .visible = false,
    .named = true,
  },
  [sym__comparator_equal] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_structure] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
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
  [sym_argument_list] = {
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
  [sym_structure_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_factor] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__semi_colon] = {
    .visible = false,
    .named = true,
  },
  [sym_vector_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__bool_keywords] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__end_of_line] = {
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
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vector_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_comment = 1,
  field_end = 2,
  field_function_keyword = 3,
  field_function_name = 4,
  field_return_variable = 5,
  field_structure_keyword = 6,
  field_variable_name = 7,
  field_vector_access = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_comment] = "comment",
  [field_end] = "end",
  [field_function_keyword] = "function_keyword",
  [field_function_name] = "function_name",
  [field_return_variable] = "return_variable",
  [field_structure_keyword] = "structure_keyword",
  [field_variable_name] = "variable_name",
  [field_vector_access] = "vector_access",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 4},
  [12] = {.index = 21, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_comment, 0},
  [1] =
    {field_comment, 0, .inherited = true},
  [2] =
    {field_comment, 0, .inherited = true},
    {field_comment, 1, .inherited = true},
  [4] =
    {field_variable_name, 0},
  [5] =
    {field_function_name, 0},
  [6] =
    {field_end, 2},
    {field_structure_keyword, 0},
  [8] =
    {field_vector_access, 0},
  [9] =
    {field_end, 3},
    {field_function_keyword, 0},
    {field_function_name, 1},
  [12] =
    {field_end, 3},
    {field_structure_keyword, 0},
  [14] =
    {field_end, 4},
    {field_function_keyword, 0},
    {field_function_name, 1},
  [17] =
    {field_end, 5},
    {field_function_keyword, 0},
    {field_function_name, 3},
    {field_return_variable, 1},
  [21] =
    {field_end, 6},
    {field_function_keyword, 0},
    {field_function_name, 3},
    {field_return_variable, 1},
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
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '^') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '^') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '^') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          lookahead == '^') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '|') ADVANCE(59);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '^') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
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
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__eq);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__eq);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__operator);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_end);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_function_keyword);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__and);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__or);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__not);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__not);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__diff);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__comparator_equal);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(71);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 11},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 11},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__eq] = ACTIONS(1),
    [sym__operator] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym_end] = ACTIONS(1),
    [sym_function_keyword] = ACTIONS(1),
    [sym__and] = ACTIONS(1),
    [sym__or] = ACTIONS(1),
    [sym__not] = ACTIONS(1),
    [sym__diff] = ACTIONS(1),
    [sym__comparator_equal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(147),
    [sym_structure] = STATE(7),
    [sym_function_definition] = STATE(7),
    [sym_expression] = STATE(7),
    [sym_structure_keyword] = STATE(12),
    [sym_function_call] = STATE(55),
    [sym_comment] = STATE(61),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_function_keyword] = ACTIONS(9),
    [anon_sym_PERCENT] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_end,
    STATE(11), 1,
      sym_structure_keyword,
    STATE(76), 1,
      sym_function_call,
    STATE(142), 1,
      sym_block,
    ACTIONS(5), 3,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
    STATE(26), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
    ACTIONS(15), 5,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [33] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_end,
    STATE(11), 1,
      sym_structure_keyword,
    STATE(76), 1,
      sym_function_call,
    STATE(140), 1,
      sym_block,
    ACTIONS(5), 3,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
    STATE(26), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
    ACTIONS(15), 5,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [66] = 4,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__not,
    STATE(116), 1,
      sym_argument_list,
    ACTIONS(15), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      anon_sym_SEMI,
      sym__operator,
      sym__number,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [89] = 9,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_function_keyword,
    ACTIONS(36), 1,
      anon_sym_PERCENT,
    STATE(12), 1,
      sym_structure_keyword,
    STATE(55), 1,
      sym_function_call,
    STATE(61), 1,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
    STATE(5), 4,
      sym_structure,
      sym_function_definition,
      sym_expression,
      aux_sym_source_file_repeat1,
  [122] = 4,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_argument_list,
    ACTIONS(23), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
    ACTIONS(15), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [145] = 9,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym_function_keyword,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_structure_keyword,
    STATE(55), 1,
      sym_function_call,
    STATE(61), 1,
      sym_comment,
    ACTIONS(5), 3,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
    STATE(5), 4,
      sym_structure,
      sym_function_definition,
      sym_expression,
      aux_sym_source_file_repeat1,
  [178] = 2,
    ACTIONS(43), 6,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym__eq,
      sym_end,
    ACTIONS(41), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [196] = 2,
    ACTIONS(43), 2,
      sym__eq,
      sym__not,
    ACTIONS(41), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      anon_sym_SEMI,
      sym__operator,
      sym__number,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [214] = 2,
    ACTIONS(23), 1,
      sym__not,
    ACTIONS(15), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      anon_sym_SEMI,
      sym__operator,
      sym__number,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [231] = 9,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym__number,
    ACTIONS(51), 1,
      sym__not,
    STATE(2), 1,
      sym_operation,
    STATE(95), 1,
      sym_function_call,
    STATE(112), 1,
      sym_factor,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 3,
      sym_bool,
      sym_expression,
      sym__bool_keywords,
  [262] = 9,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym__number,
    ACTIONS(51), 1,
      sym__not,
    STATE(3), 1,
      sym_operation,
    STATE(95), 1,
      sym_function_call,
    STATE(112), 1,
      sym_factor,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 3,
      sym_bool,
      sym_expression,
      sym__bool_keywords,
  [293] = 2,
    ACTIONS(23), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
    ACTIONS(15), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [310] = 3,
    ACTIONS(59), 1,
      sym__operator,
    ACTIONS(61), 1,
      sym__not,
    ACTIONS(57), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      anon_sym_SEMI,
      sym__number,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [329] = 3,
    ACTIONS(59), 1,
      sym__operator,
    ACTIONS(65), 1,
      sym__not,
    ACTIONS(63), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      anon_sym_SEMI,
      sym__number,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [348] = 3,
    ACTIONS(67), 1,
      sym__operator,
    ACTIONS(65), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
    ACTIONS(63), 6,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [367] = 3,
    ACTIONS(67), 1,
      sym__operator,
    ACTIONS(61), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
    ACTIONS(57), 6,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [386] = 4,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_argument_list,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PERCENT,
    ACTIONS(23), 6,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym__operator,
      sym_function_keyword,
  [406] = 7,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_end,
    STATE(11), 1,
      sym_structure_keyword,
    STATE(76), 1,
      sym_function_call,
    STATE(143), 1,
      sym_block,
    ACTIONS(5), 3,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
    STATE(26), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
  [432] = 7,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_end,
    STATE(11), 1,
      sym_structure_keyword,
    STATE(76), 1,
      sym_function_call,
    STATE(142), 1,
      sym_block,
    ACTIONS(5), 3,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
    STATE(26), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
  [458] = 7,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_end,
    STATE(11), 1,
      sym_structure_keyword,
    STATE(76), 1,
      sym_function_call,
    STATE(140), 1,
      sym_block,
    ACTIONS(5), 3,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
    STATE(26), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
  [484] = 7,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(71), 1,
      sym_end,
    STATE(11), 1,
      sym_structure_keyword,
    STATE(76), 1,
      sym_function_call,
    STATE(148), 1,
      sym_block,
    ACTIONS(5), 3,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
    STATE(26), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
  [510] = 6,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(79), 1,
      sym_end,
    STATE(11), 1,
      sym_structure_keyword,
    STATE(76), 1,
      sym_function_call,
    ACTIONS(73), 3,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
    STATE(23), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
  [533] = 2,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__eq,
      anon_sym_PERCENT,
    ACTIONS(43), 6,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym__operator,
      sym_function_keyword,
  [548] = 5,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      sym__operator,
    STATE(60), 1,
      sym__semi_colon,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(83), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [569] = 6,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(89), 1,
      sym_end,
    STATE(11), 1,
      sym_structure_keyword,
    STATE(76), 1,
      sym_function_call,
    ACTIONS(5), 3,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
    STATE(23), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
  [592] = 5,
    ACTIONS(23), 1,
      sym__operator,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym__semi_colon,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(83), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [613] = 5,
    ACTIONS(23), 1,
      sym__operator,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      sym__semi_colon,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(93), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [634] = 5,
    ACTIONS(87), 1,
      sym__operator,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      sym__semi_colon,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(93), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [655] = 2,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PERCENT,
    ACTIONS(23), 6,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym__operator,
      sym_function_keyword,
  [669] = 4,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      sym__semi_colon,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(93), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [687] = 3,
    ACTIONS(87), 1,
      sym__operator,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PERCENT,
    ACTIONS(65), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [703] = 4,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym__semi_colon,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(83), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [721] = 3,
    ACTIONS(87), 1,
      sym__operator,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PERCENT,
    ACTIONS(61), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [737] = 4,
    ACTIONS(67), 1,
      sym__operator,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym__semi_colon,
    ACTIONS(93), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [754] = 2,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PERCENT,
    ACTIONS(101), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [767] = 8,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      sym__not,
    STATE(25), 1,
      sym_factor,
    STATE(27), 1,
      sym_operation,
    STATE(30), 1,
      sym_function_call,
    STATE(33), 1,
      sym_vector_definition,
  [792] = 4,
    ACTIONS(67), 1,
      sym__operator,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(115), 1,
      sym__comparator_equal,
    ACTIONS(113), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [809] = 4,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym__eq,
    STATE(116), 1,
      sym_argument_list,
    ACTIONS(15), 5,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [826] = 7,
    ACTIONS(49), 1,
      sym__number,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__not,
    STATE(58), 1,
      aux_sym_argument_list_repeat1,
    STATE(99), 1,
      sym_factor,
    STATE(10), 2,
      sym_operation,
      sym_function_call,
  [849] = 7,
    ACTIONS(49), 1,
      sym__number,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__not,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_vector_definition_repeat1,
    STATE(62), 1,
      sym_factor,
    STATE(10), 2,
      sym_operation,
      sym_function_call,
  [872] = 4,
    ACTIONS(67), 1,
      sym__operator,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 1,
      sym__comparator_equal,
    ACTIONS(129), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [889] = 4,
    ACTIONS(67), 1,
      sym__operator,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
      sym__comparator_equal,
    ACTIONS(135), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [906] = 7,
    ACTIONS(49), 1,
      sym__number,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__not,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_vector_definition_repeat1,
    STATE(62), 1,
      sym_factor,
    STATE(10), 2,
      sym_operation,
      sym_function_call,
  [929] = 7,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(146), 1,
      sym__number,
    ACTIONS(149), 1,
      sym__not,
    STATE(45), 1,
      aux_sym_vector_definition_repeat1,
    STATE(62), 1,
      sym_factor,
    STATE(10), 2,
      sym_operation,
      sym_function_call,
  [952] = 2,
    ACTIONS(152), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PERCENT,
    ACTIONS(154), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [965] = 7,
    ACTIONS(49), 1,
      sym__number,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__not,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_vector_definition_repeat1,
    STATE(62), 1,
      sym_factor,
    STATE(10), 2,
      sym_operation,
      sym_function_call,
  [988] = 8,
    ACTIONS(51), 1,
      sym__not,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym__number,
    STATE(13), 1,
      sym_function_call,
    STATE(52), 1,
      sym_operation,
    STATE(53), 1,
      sym_factor,
    STATE(67), 1,
      sym_vector_definition,
  [1013] = 4,
    ACTIONS(15), 1,
      sym__operator,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym__semi_colon,
    ACTIONS(93), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1030] = 8,
    ACTIONS(51), 1,
      sym__not,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym__number,
    STATE(13), 1,
      sym_function_call,
    STATE(35), 1,
      sym_factor,
    STATE(49), 1,
      sym_operation,
    STATE(75), 1,
      sym_vector_definition,
  [1055] = 4,
    ACTIONS(67), 1,
      sym__operator,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(168), 1,
      sym__comparator_equal,
    ACTIONS(166), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1072] = 4,
    ACTIONS(15), 1,
      sym__operator,
    ACTIONS(170), 1,
      anon_sym_SEMI,
    STATE(115), 1,
      sym__semi_colon,
    ACTIONS(83), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1089] = 4,
    ACTIONS(67), 1,
      sym__operator,
    ACTIONS(170), 1,
      anon_sym_SEMI,
    STATE(115), 1,
      sym__semi_colon,
    ACTIONS(83), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1106] = 8,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      sym__not,
    STATE(28), 1,
      sym_operation,
    STATE(29), 1,
      sym_factor,
    STATE(30), 1,
      sym_function_call,
    STATE(31), 1,
      sym_vector_definition,
  [1131] = 3,
    ACTIONS(176), 1,
      sym__eq,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(174), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [1146] = 7,
    ACTIONS(49), 1,
      sym__number,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__not,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_vector_definition_repeat1,
    STATE(62), 1,
      sym_factor,
    STATE(10), 2,
      sym_operation,
      sym_function_call,
  [1169] = 7,
    ACTIONS(49), 1,
      sym__number,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__not,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_argument_list_repeat1,
    STATE(99), 1,
      sym_factor,
    STATE(10), 2,
      sym_operation,
      sym_function_call,
  [1192] = 7,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym__number,
    ACTIONS(190), 1,
      sym__not,
    STATE(58), 1,
      aux_sym_argument_list_repeat1,
    STATE(99), 1,
      sym_factor,
    STATE(10), 2,
      sym_operation,
      sym_function_call,
  [1215] = 3,
    ACTIONS(67), 1,
      sym__operator,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(195), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1229] = 2,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(199), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [1241] = 2,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(203), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [1253] = 3,
    ACTIONS(59), 1,
      sym__operator,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(207), 4,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
      sym__not,
  [1267] = 2,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(211), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [1279] = 3,
    ACTIONS(67), 1,
      sym__operator,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1293] = 2,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(215), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [1305] = 3,
    ACTIONS(67), 1,
      sym__operator,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1319] = 3,
    ACTIONS(170), 1,
      anon_sym_SEMI,
    STATE(115), 1,
      sym__semi_colon,
    ACTIONS(83), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1333] = 2,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(219), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [1345] = 2,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(223), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [1357] = 3,
    ACTIONS(67), 1,
      sym__operator,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(227), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1371] = 2,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(231), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [1383] = 2,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(235), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [1395] = 2,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(239), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [1407] = 2,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    ACTIONS(243), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_function_keyword,
  [1419] = 3,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym__semi_colon,
    ACTIONS(93), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1433] = 2,
    ACTIONS(247), 1,
      sym__eq,
    ACTIONS(245), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1444] = 5,
    ACTIONS(49), 1,
      sym__number,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__not,
    STATE(141), 1,
      sym_factor,
    STATE(10), 2,
      sym_operation,
      sym_function_call,
  [1461] = 2,
    ACTIONS(249), 3,
      anon_sym_LPAREN,
      sym__number,
      sym__not,
    ACTIONS(251), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [1472] = 5,
    ACTIONS(49), 1,
      sym__number,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__not,
    STATE(15), 1,
      sym_factor,
    STATE(10), 2,
      sym_operation,
      sym_function_call,
  [1489] = 5,
    ACTIONS(51), 1,
      sym__not,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym__number,
    STATE(16), 1,
      sym_factor,
    STATE(13), 2,
      sym_operation,
      sym_function_call,
  [1506] = 5,
    ACTIONS(49), 1,
      sym__number,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__not,
    STATE(118), 1,
      sym_factor,
    STATE(10), 2,
      sym_operation,
      sym_function_call,
  [1523] = 5,
    ACTIONS(49), 1,
      sym__number,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__not,
    STATE(114), 1,
      sym_factor,
    STATE(10), 2,
      sym_operation,
      sym_function_call,
  [1540] = 2,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    ACTIONS(154), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1551] = 5,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      sym__not,
    STATE(32), 1,
      sym_factor,
    STATE(30), 2,
      sym_operation,
      sym_function_call,
  [1568] = 5,
    ACTIONS(49), 1,
      sym__number,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__not,
    STATE(123), 1,
      sym_factor,
    STATE(10), 2,
      sym_operation,
      sym_function_call,
  [1585] = 5,
    ACTIONS(49), 1,
      sym__number,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__not,
    STATE(139), 1,
      sym_factor,
    STATE(10), 2,
      sym_operation,
      sym_function_call,
  [1602] = 5,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      sym__number,
    ACTIONS(109), 1,
      sym__not,
    STATE(34), 1,
      sym_factor,
    STATE(30), 2,
      sym_operation,
      sym_function_call,
  [1619] = 5,
    ACTIONS(51), 1,
      sym__not,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym__number,
    STATE(42), 1,
      sym_factor,
    STATE(13), 2,
      sym_operation,
      sym_function_call,
  [1636] = 5,
    ACTIONS(51), 1,
      sym__not,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym__number,
    STATE(17), 1,
      sym_factor,
    STATE(13), 2,
      sym_operation,
      sym_function_call,
  [1653] = 5,
    ACTIONS(51), 1,
      sym__not,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym__number,
    STATE(59), 1,
      sym_factor,
    STATE(13), 2,
      sym_operation,
      sym_function_call,
  [1670] = 5,
    ACTIONS(51), 1,
      sym__not,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym__number,
    STATE(66), 1,
      sym_factor,
    STATE(13), 2,
      sym_operation,
      sym_function_call,
  [1687] = 5,
    ACTIONS(51), 1,
      sym__not,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym__number,
    STATE(38), 1,
      sym_factor,
    STATE(13), 2,
      sym_operation,
      sym_function_call,
  [1704] = 5,
    ACTIONS(51), 1,
      sym__not,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym__number,
    STATE(51), 1,
      sym_factor,
    STATE(13), 2,
      sym_operation,
      sym_function_call,
  [1721] = 5,
    ACTIONS(51), 1,
      sym__not,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym__number,
    STATE(70), 1,
      sym_factor,
    STATE(13), 2,
      sym_operation,
      sym_function_call,
  [1738] = 2,
    ACTIONS(253), 1,
      sym__eq,
    ACTIONS(15), 5,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [1749] = 5,
    ACTIONS(51), 1,
      sym__not,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym__number,
    STATE(64), 1,
      sym_factor,
    STATE(13), 2,
      sym_operation,
      sym_function_call,
  [1766] = 5,
    ACTIONS(51), 1,
      sym__not,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym__number,
    STATE(43), 1,
      sym_factor,
    STATE(13), 2,
      sym_operation,
      sym_function_call,
  [1783] = 5,
    ACTIONS(49), 1,
      sym__number,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__not,
    STATE(150), 1,
      sym_factor,
    STATE(10), 2,
      sym_operation,
      sym_function_call,
  [1800] = 3,
    ACTIONS(59), 1,
      sym__operator,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(255), 4,
      anon_sym_RPAREN,
      sym_identifier,
      sym__number,
      sym__not,
  [1813] = 2,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    ACTIONS(101), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1824] = 5,
    ACTIONS(49), 1,
      sym__number,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__not,
    STATE(14), 1,
      sym_factor,
    STATE(10), 2,
      sym_operation,
      sym_function_call,
  [1841] = 1,
    ACTIONS(113), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1849] = 1,
    ACTIONS(135), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1857] = 1,
    ACTIONS(243), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1865] = 1,
    ACTIONS(227), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1873] = 1,
    ACTIONS(259), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1881] = 1,
    ACTIONS(129), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1889] = 1,
    ACTIONS(211), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1897] = 1,
    ACTIONS(195), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1905] = 1,
    ACTIONS(261), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1913] = 1,
    ACTIONS(263), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1921] = 3,
    ACTIONS(67), 1,
      sym__operator,
    ACTIONS(267), 1,
      sym__comparator_equal,
    ACTIONS(265), 3,
      sym__and,
      sym__or,
      sym__diff,
  [1933] = 1,
    ACTIONS(239), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1941] = 3,
    ACTIONS(59), 1,
      sym__operator,
    ACTIONS(271), 1,
      sym__comparator_equal,
    ACTIONS(269), 3,
      sym__and,
      sym__or,
      sym__diff,
  [1953] = 1,
    ACTIONS(199), 5,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      sym_end,
  [1961] = 2,
    STATE(9), 1,
      sym__end_of_line,
    ACTIONS(273), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
  [1970] = 1,
    ACTIONS(141), 4,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
      sym__not,
  [1977] = 2,
    ACTIONS(59), 1,
      sym__operator,
    ACTIONS(275), 3,
      sym__and,
      sym__or,
      sym__diff,
  [1986] = 2,
    STATE(8), 1,
      sym__end_of_line,
    ACTIONS(277), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
  [1995] = 1,
    ACTIONS(182), 4,
      anon_sym_RPAREN,
      sym_identifier,
      sym__number,
      sym__not,
  [2002] = 2,
    STATE(127), 1,
      sym__end_of_line,
    ACTIONS(279), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
  [2011] = 2,
    STATE(24), 1,
      sym__end_of_line,
    ACTIONS(281), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
  [2020] = 2,
    ACTIONS(59), 1,
      sym__operator,
    ACTIONS(283), 3,
      sym__and,
      sym__or,
      sym__diff,
  [2029] = 2,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(285), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [2038] = 2,
    STATE(134), 1,
      sym__end_of_line,
    ACTIONS(289), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
  [2047] = 3,
    ACTIONS(293), 1,
      sym_identifier,
    STATE(126), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(291), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2058] = 1,
    ACTIONS(296), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
  [2064] = 3,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(126), 1,
      aux_sym_parameter_list_repeat1,
  [2074] = 3,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      sym__eq,
    STATE(122), 1,
      sym_argument_list,
  [2084] = 1,
    ACTIONS(291), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [2090] = 3,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_parameter_list_repeat1,
  [2100] = 3,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      sym__eq,
    STATE(119), 1,
      sym_argument_list,
  [2110] = 3,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_parameter_list_repeat1,
  [2120] = 1,
    ACTIONS(310), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
  [2126] = 3,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      sym__eq,
    STATE(22), 1,
      sym_parameter_list,
  [2136] = 3,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      sym_identifier,
    STATE(146), 1,
      sym_return_value,
  [2146] = 2,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(128), 1,
      aux_sym_parameter_list_repeat1,
  [2153] = 2,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_parameter_list,
  [2160] = 1,
    ACTIONS(320), 1,
      sym__operator,
  [2164] = 1,
    ACTIONS(322), 1,
      sym_end,
  [2168] = 1,
    ACTIONS(324), 1,
      sym__operator,
  [2172] = 1,
    ACTIONS(326), 1,
      sym_end,
  [2176] = 1,
    ACTIONS(328), 1,
      sym_end,
  [2180] = 1,
    ACTIONS(330), 1,
      sym_identifier,
  [2184] = 1,
    ACTIONS(332), 1,
      aux_sym_comment_token1,
  [2188] = 1,
    ACTIONS(334), 1,
      sym__eq,
  [2192] = 1,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
  [2196] = 1,
    ACTIONS(338), 1,
      sym_end,
  [2200] = 1,
    ACTIONS(340), 1,
      sym__eq,
  [2204] = 1,
    ACTIONS(342), 1,
      sym__operator,
  [2208] = 1,
    ACTIONS(344), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 89,
  [SMALL_STATE(6)] = 122,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 178,
  [SMALL_STATE(9)] = 196,
  [SMALL_STATE(10)] = 214,
  [SMALL_STATE(11)] = 231,
  [SMALL_STATE(12)] = 262,
  [SMALL_STATE(13)] = 293,
  [SMALL_STATE(14)] = 310,
  [SMALL_STATE(15)] = 329,
  [SMALL_STATE(16)] = 348,
  [SMALL_STATE(17)] = 367,
  [SMALL_STATE(18)] = 386,
  [SMALL_STATE(19)] = 406,
  [SMALL_STATE(20)] = 432,
  [SMALL_STATE(21)] = 458,
  [SMALL_STATE(22)] = 484,
  [SMALL_STATE(23)] = 510,
  [SMALL_STATE(24)] = 533,
  [SMALL_STATE(25)] = 548,
  [SMALL_STATE(26)] = 569,
  [SMALL_STATE(27)] = 592,
  [SMALL_STATE(28)] = 613,
  [SMALL_STATE(29)] = 634,
  [SMALL_STATE(30)] = 655,
  [SMALL_STATE(31)] = 669,
  [SMALL_STATE(32)] = 687,
  [SMALL_STATE(33)] = 703,
  [SMALL_STATE(34)] = 721,
  [SMALL_STATE(35)] = 737,
  [SMALL_STATE(36)] = 754,
  [SMALL_STATE(37)] = 767,
  [SMALL_STATE(38)] = 792,
  [SMALL_STATE(39)] = 809,
  [SMALL_STATE(40)] = 826,
  [SMALL_STATE(41)] = 849,
  [SMALL_STATE(42)] = 872,
  [SMALL_STATE(43)] = 889,
  [SMALL_STATE(44)] = 906,
  [SMALL_STATE(45)] = 929,
  [SMALL_STATE(46)] = 952,
  [SMALL_STATE(47)] = 965,
  [SMALL_STATE(48)] = 988,
  [SMALL_STATE(49)] = 1013,
  [SMALL_STATE(50)] = 1030,
  [SMALL_STATE(51)] = 1055,
  [SMALL_STATE(52)] = 1072,
  [SMALL_STATE(53)] = 1089,
  [SMALL_STATE(54)] = 1106,
  [SMALL_STATE(55)] = 1131,
  [SMALL_STATE(56)] = 1146,
  [SMALL_STATE(57)] = 1169,
  [SMALL_STATE(58)] = 1192,
  [SMALL_STATE(59)] = 1215,
  [SMALL_STATE(60)] = 1229,
  [SMALL_STATE(61)] = 1241,
  [SMALL_STATE(62)] = 1253,
  [SMALL_STATE(63)] = 1267,
  [SMALL_STATE(64)] = 1279,
  [SMALL_STATE(65)] = 1293,
  [SMALL_STATE(66)] = 1305,
  [SMALL_STATE(67)] = 1319,
  [SMALL_STATE(68)] = 1333,
  [SMALL_STATE(69)] = 1345,
  [SMALL_STATE(70)] = 1357,
  [SMALL_STATE(71)] = 1371,
  [SMALL_STATE(72)] = 1383,
  [SMALL_STATE(73)] = 1395,
  [SMALL_STATE(74)] = 1407,
  [SMALL_STATE(75)] = 1419,
  [SMALL_STATE(76)] = 1433,
  [SMALL_STATE(77)] = 1444,
  [SMALL_STATE(78)] = 1461,
  [SMALL_STATE(79)] = 1472,
  [SMALL_STATE(80)] = 1489,
  [SMALL_STATE(81)] = 1506,
  [SMALL_STATE(82)] = 1523,
  [SMALL_STATE(83)] = 1540,
  [SMALL_STATE(84)] = 1551,
  [SMALL_STATE(85)] = 1568,
  [SMALL_STATE(86)] = 1585,
  [SMALL_STATE(87)] = 1602,
  [SMALL_STATE(88)] = 1619,
  [SMALL_STATE(89)] = 1636,
  [SMALL_STATE(90)] = 1653,
  [SMALL_STATE(91)] = 1670,
  [SMALL_STATE(92)] = 1687,
  [SMALL_STATE(93)] = 1704,
  [SMALL_STATE(94)] = 1721,
  [SMALL_STATE(95)] = 1738,
  [SMALL_STATE(96)] = 1749,
  [SMALL_STATE(97)] = 1766,
  [SMALL_STATE(98)] = 1783,
  [SMALL_STATE(99)] = 1800,
  [SMALL_STATE(100)] = 1813,
  [SMALL_STATE(101)] = 1824,
  [SMALL_STATE(102)] = 1841,
  [SMALL_STATE(103)] = 1849,
  [SMALL_STATE(104)] = 1857,
  [SMALL_STATE(105)] = 1865,
  [SMALL_STATE(106)] = 1873,
  [SMALL_STATE(107)] = 1881,
  [SMALL_STATE(108)] = 1889,
  [SMALL_STATE(109)] = 1897,
  [SMALL_STATE(110)] = 1905,
  [SMALL_STATE(111)] = 1913,
  [SMALL_STATE(112)] = 1921,
  [SMALL_STATE(113)] = 1933,
  [SMALL_STATE(114)] = 1941,
  [SMALL_STATE(115)] = 1953,
  [SMALL_STATE(116)] = 1961,
  [SMALL_STATE(117)] = 1970,
  [SMALL_STATE(118)] = 1977,
  [SMALL_STATE(119)] = 1986,
  [SMALL_STATE(120)] = 1995,
  [SMALL_STATE(121)] = 2002,
  [SMALL_STATE(122)] = 2011,
  [SMALL_STATE(123)] = 2020,
  [SMALL_STATE(124)] = 2029,
  [SMALL_STATE(125)] = 2038,
  [SMALL_STATE(126)] = 2047,
  [SMALL_STATE(127)] = 2058,
  [SMALL_STATE(128)] = 2064,
  [SMALL_STATE(129)] = 2074,
  [SMALL_STATE(130)] = 2084,
  [SMALL_STATE(131)] = 2090,
  [SMALL_STATE(132)] = 2100,
  [SMALL_STATE(133)] = 2110,
  [SMALL_STATE(134)] = 2120,
  [SMALL_STATE(135)] = 2126,
  [SMALL_STATE(136)] = 2136,
  [SMALL_STATE(137)] = 2146,
  [SMALL_STATE(138)] = 2153,
  [SMALL_STATE(139)] = 2160,
  [SMALL_STATE(140)] = 2164,
  [SMALL_STATE(141)] = 2168,
  [SMALL_STATE(142)] = 2172,
  [SMALL_STATE(143)] = 2176,
  [SMALL_STATE(144)] = 2180,
  [SMALL_STATE(145)] = 2184,
  [SMALL_STATE(146)] = 2188,
  [SMALL_STATE(147)] = 2192,
  [SMALL_STATE(148)] = 2196,
  [SMALL_STATE(149)] = 2200,
  [SMALL_STATE(150)] = 2204,
  [SMALL_STATE(151)] = 2208,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factor, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(78),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(129),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(136),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(145),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(132),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 7),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, .production_id = 7),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_definition, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector_definition, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 6),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_definition_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_definition_repeat1, 2), SHIFT_REPEAT(4),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_definition_repeat1, 2), SHIFT_REPEAT(10),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_definition_repeat1, 2), SHIFT_REPEAT(77),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_definition, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector_definition, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(4),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(10),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(77),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 8),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4, .production_id = 7),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4, .production_id = 7),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_definition_repeat1, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4, .production_id = 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 12),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7, .production_id = 12),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 8),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 11),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, .production_id = 11),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 7),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 10),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 10),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 3, .production_id = 6),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 3, .production_id = 6),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 4, .production_id = 9),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 4, .production_id = 9),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_keyword, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_keyword, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 9),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(124),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_value, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [336] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_value, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
