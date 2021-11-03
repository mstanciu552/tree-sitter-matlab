#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 142
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 2
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_control_structure = 1,
  anon_sym_function = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_bool_constant = 5,
  anon_sym_COMMA = 6,
  anon_sym_return_value = 7,
  anon_sym_end = 8,
  anon_sym_if = 9,
  anon_sym_for = 10,
  anon_sym_while = 11,
  aux_sym_identifier_token1 = 12,
  aux_sym_identifier_token2 = 13,
  anon_sym_SEMI = 14,
  sym__eq = 15,
  sym__operator = 16,
  sym__number = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  sym__and = 20,
  sym__or = 21,
  sym__not = 22,
  sym__diff = 23,
  sym__comparator_equal = 24,
  anon_sym_true = 25,
  anon_sym_false = 26,
  sym_source_file = 27,
  sym_structure = 28,
  sym_function_definition = 29,
  sym_bool = 30,
  sym_operation = 31,
  sym_expression = 32,
  sym_parameter_list = 33,
  sym_argument_list = 34,
  sym_function_name = 35,
  sym_return_value = 36,
  sym_block = 37,
  sym_identifier = 38,
  sym_factor = 39,
  sym_function_call = 40,
  sym__semi_colon = 41,
  sym_vector_definition = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_parameter_list_repeat1 = 44,
  aux_sym_argument_list_repeat1 = 45,
  aux_sym_block_repeat1 = 46,
  aux_sym_vector_definition_repeat1 = 47,
  alias_sym__end = 48,
  alias_sym__function_keyword = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_control_structure] = "_structure_keyword",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bool_constant] = "_bool_keywords",
  [anon_sym_COMMA] = ",",
  [anon_sym_return_value] = "identifier",
  [anon_sym_end] = "end",
  [anon_sym_if] = "if",
  [anon_sym_for] = "for",
  [anon_sym_while] = "while",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_token2] = "identifier_token2",
  [anon_sym_SEMI] = ";",
  [sym__eq] = "_eq",
  [sym__operator] = "_operator",
  [sym__number] = "_number",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__and] = "_and",
  [sym__or] = "_or",
  [sym__not] = "_not",
  [sym__diff] = "_diff",
  [sym__comparator_equal] = "_comparator_equal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym_structure] = "structure",
  [sym_function_definition] = "function_definition",
  [sym_bool] = "bool",
  [sym_operation] = "operation",
  [sym_expression] = "expression",
  [sym_parameter_list] = "parameter_list",
  [sym_argument_list] = "argument_list",
  [sym_function_name] = "function_name",
  [sym_return_value] = "return_value",
  [sym_block] = "block",
  [sym_identifier] = "identifier",
  [sym_factor] = "factor",
  [sym_function_call] = "function_call",
  [sym__semi_colon] = "_semi_colon",
  [sym_vector_definition] = "vector_definition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_vector_definition_repeat1] = "vector_definition_repeat1",
  [alias_sym__end] = "_end",
  [alias_sym__function_keyword] = "_function_keyword",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_control_structure] = anon_sym_control_structure,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bool_constant] = anon_sym_bool_constant,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_return_value] = sym_identifier,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_while] = anon_sym_while,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__eq] = sym__eq,
  [sym__operator] = sym__operator,
  [sym__number] = sym__number,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__and] = sym__and,
  [sym__or] = sym__or,
  [sym__not] = sym__not,
  [sym__diff] = sym__diff,
  [sym__comparator_equal] = sym__comparator_equal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym_structure] = sym_structure,
  [sym_function_definition] = sym_function_definition,
  [sym_bool] = sym_bool,
  [sym_operation] = sym_operation,
  [sym_expression] = sym_expression,
  [sym_parameter_list] = sym_parameter_list,
  [sym_argument_list] = sym_argument_list,
  [sym_function_name] = sym_function_name,
  [sym_return_value] = sym_return_value,
  [sym_block] = sym_block,
  [sym_identifier] = sym_identifier,
  [sym_factor] = sym_factor,
  [sym_function_call] = sym_function_call,
  [sym__semi_colon] = sym__semi_colon,
  [sym_vector_definition] = sym_vector_definition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_vector_definition_repeat1] = aux_sym_vector_definition_repeat1,
  [alias_sym__end] = alias_sym__end,
  [alias_sym__function_keyword] = alias_sym__function_keyword,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_control_structure] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_function] = {
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
  [anon_sym_bool_constant] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_end] = {
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
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token2] = {
    .visible = false,
    .named = false,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
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
  [sym_identifier] = {
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
  [alias_sym__end] = {
    .visible = true,
    .named = true,
  },
  [alias_sym__function_keyword] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym__end,
  },
  [2] = {
    [0] = alias_sym__function_keyword,
  },
  [3] = {
    [1] = alias_sym__end,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '!') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '|') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '^') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '|') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '^') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '|') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '^') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(94);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(94);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          lookahead == '^') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(92);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 9:
      if (lookahead == '|') ADVANCE(93);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == '|') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '^') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_control_structure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_function);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_bool_constant);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_return_value);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_if);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_for);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_while);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__eq);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__operator);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__and);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__or);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__not);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__not);
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__diff);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__comparator_equal);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_control_structure] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bool_constant] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_return_value] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [aux_sym_identifier_token2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__eq] = ACTIONS(1),
    [sym__operator] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__and] = ACTIONS(1),
    [sym__or] = ACTIONS(1),
    [sym__not] = ACTIONS(1),
    [sym__diff] = ACTIONS(1),
    [sym__comparator_equal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(138),
    [sym_structure] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym_expression] = STATE(9),
    [sym_function_name] = STATE(131),
    [sym_identifier] = STATE(128),
    [sym_function_call] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_control_structure] = ACTIONS(5),
    [anon_sym_function] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [aux_sym_identifier_token2] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(13), 3,
      aux_sym_identifier_token2,
      sym__eq,
      sym__not,
    ACTIONS(11), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
      sym__operator,
      sym__number,
      anon_sym_RBRACK,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [20] = 3,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 2,
      aux_sym_identifier_token2,
      sym__not,
    ACTIONS(17), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
      sym__operator,
      sym__number,
      anon_sym_RBRACK,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [41] = 11,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_bool_constant,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(27), 1,
      sym__not,
    STATE(5), 1,
      sym_function_call,
    STATE(6), 1,
      sym_operation,
    STATE(76), 1,
      sym_identifier,
    STATE(94), 1,
      sym_factor,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(72), 2,
      sym_bool,
      sym_expression,
  [77] = 2,
    ACTIONS(19), 2,
      aux_sym_identifier_token2,
      sym__not,
    ACTIONS(17), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
      sym__operator,
      sym__number,
      anon_sym_RBRACK,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [95] = 6,
    ACTIONS(29), 1,
      anon_sym_end,
    STATE(98), 1,
      sym_block,
    STATE(140), 1,
      sym_identifier,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(90), 2,
      sym_expression,
      aux_sym_block_repeat1,
    ACTIONS(17), 5,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [120] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_control_structure,
    ACTIONS(36), 1,
      anon_sym_function,
    STATE(128), 1,
      sym_identifier,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(39), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(7), 5,
      sym_structure,
      sym_function_definition,
      sym_expression,
      sym_function_call,
      aux_sym_source_file_repeat1,
  [147] = 4,
    ACTIONS(46), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym__semi_colon,
    ACTIONS(44), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(42), 6,
      ts_builtin_sym_end,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [168] = 7,
    ACTIONS(5), 1,
      anon_sym_control_structure,
    ACTIONS(7), 1,
      anon_sym_function,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(128), 1,
      sym_identifier,
    STATE(131), 1,
      sym_function_name,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(7), 5,
      sym_structure,
      sym_function_definition,
      sym_expression,
      sym_function_call,
      aux_sym_source_file_repeat1,
  [195] = 4,
    ACTIONS(50), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      sym__semi_colon,
    ACTIONS(44), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(42), 6,
      anon_sym_RPAREN,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [215] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      anon_sym_RBRACK,
    ACTIONS(56), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym_vector_definition_repeat1,
    STATE(68), 1,
      sym_factor,
    STATE(132), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [247] = 11,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(62), 1,
      sym__number,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_identifier,
    STATE(32), 1,
      sym_function_call,
    STATE(80), 1,
      sym_factor,
    STATE(82), 1,
      sym_operation,
    STATE(104), 1,
      sym_vector_definition,
    STATE(127), 1,
      sym_function_name,
  [281] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      sym__not,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_argument_list_repeat1,
    STATE(75), 1,
      sym_factor,
    STATE(132), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [313] = 2,
    ACTIONS(70), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(68), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [329] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      sym__not,
    ACTIONS(72), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym_vector_definition_repeat1,
    STATE(68), 1,
      sym_factor,
    STATE(132), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [361] = 10,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 1,
      aux_sym_identifier_token1,
    ACTIONS(79), 1,
      aux_sym_identifier_token2,
    ACTIONS(82), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(16), 1,
      aux_sym_argument_list_repeat1,
    STATE(75), 1,
      sym_factor,
    STATE(132), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [393] = 3,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(17), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [411] = 2,
    ACTIONS(90), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [427] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      sym__not,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_vector_definition_repeat1,
    STATE(68), 1,
      sym_factor,
    STATE(132), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [459] = 2,
    ACTIONS(13), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(11), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [475] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      sym__not,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_argument_list_repeat1,
    STATE(75), 1,
      sym_factor,
    STATE(132), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [507] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      sym__not,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_identifier,
    STATE(16), 1,
      aux_sym_argument_list_repeat1,
    STATE(75), 1,
      sym_factor,
    STATE(132), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [539] = 11,
    ACTIONS(98), 1,
      aux_sym_identifier_token1,
    ACTIONS(100), 1,
      aux_sym_identifier_token2,
    ACTIONS(102), 1,
      sym__number,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      sym__not,
    STATE(69), 1,
      sym_identifier,
    STATE(70), 1,
      sym_operation,
    STATE(71), 1,
      sym_factor,
    STATE(73), 1,
      sym_function_call,
    STATE(78), 1,
      sym_vector_definition,
    STATE(131), 1,
      sym_function_name,
  [573] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      sym__not,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_vector_definition_repeat1,
    STATE(68), 1,
      sym_factor,
    STATE(132), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [605] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      sym__not,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_identifier,
    STATE(16), 1,
      aux_sym_argument_list_repeat1,
    STATE(75), 1,
      sym_factor,
    STATE(132), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [637] = 2,
    ACTIONS(114), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(112), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [653] = 10,
    ACTIONS(116), 1,
      aux_sym_identifier_token1,
    ACTIONS(119), 1,
      aux_sym_identifier_token2,
    ACTIONS(122), 1,
      sym__number,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    ACTIONS(127), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym_vector_definition_repeat1,
    STATE(68), 1,
      sym_factor,
    STATE(132), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [685] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      sym__not,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_identifier,
    STATE(16), 1,
      aux_sym_argument_list_repeat1,
    STATE(75), 1,
      sym_factor,
    STATE(132), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [717] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      sym__not,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_identifier,
    STATE(22), 1,
      aux_sym_argument_list_repeat1,
    STATE(75), 1,
      sym_factor,
    STATE(132), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [749] = 7,
    ACTIONS(29), 1,
      anon_sym_end,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      sym_block,
    STATE(140), 1,
      sym_identifier,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(136), 2,
      anon_sym_control_structure,
      anon_sym_function,
    STATE(90), 2,
      sym_expression,
      aux_sym_block_repeat1,
  [774] = 4,
    ACTIONS(44), 1,
      aux_sym_identifier_token2,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      sym__semi_colon,
    ACTIONS(42), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      sym__operator,
      sym__number,
      anon_sym_RBRACK,
      sym__not,
  [793] = 2,
    ACTIONS(19), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(17), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [808] = 2,
    ACTIONS(70), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(68), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [823] = 2,
    ACTIONS(114), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(112), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [838] = 3,
    ACTIONS(144), 1,
      sym__operator,
    ACTIONS(142), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(140), 6,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [855] = 7,
    ACTIONS(29), 1,
      anon_sym_end,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(105), 1,
      sym_block,
    STATE(140), 1,
      sym_identifier,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(148), 2,
      anon_sym_control_structure,
      anon_sym_function,
    STATE(90), 2,
      sym_expression,
      aux_sym_block_repeat1,
  [880] = 3,
    ACTIONS(144), 1,
      sym__operator,
    ACTIONS(152), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(150), 6,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [897] = 2,
    ACTIONS(90), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(88), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [912] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(62), 1,
      sym__number,
    STATE(17), 1,
      sym_identifier,
    STATE(83), 1,
      sym_factor,
    STATE(127), 1,
      sym_function_name,
    STATE(32), 2,
      sym_operation,
      sym_function_call,
  [938] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(62), 1,
      sym__number,
    STATE(17), 1,
      sym_identifier,
    STATE(101), 1,
      sym_factor,
    STATE(127), 1,
      sym_function_name,
    STATE(32), 2,
      sym_operation,
      sym_function_call,
  [964] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(62), 1,
      sym__number,
    STATE(17), 1,
      sym_identifier,
    STATE(96), 1,
      sym_factor,
    STATE(127), 1,
      sym_function_name,
    STATE(32), 2,
      sym_operation,
      sym_function_call,
  [990] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(62), 1,
      sym__number,
    STATE(17), 1,
      sym_identifier,
    STATE(37), 1,
      sym_factor,
    STATE(127), 1,
      sym_function_name,
    STATE(32), 2,
      sym_operation,
      sym_function_call,
  [1016] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(62), 1,
      sym__number,
    STATE(17), 1,
      sym_identifier,
    STATE(85), 1,
      sym_factor,
    STATE(127), 1,
      sym_function_name,
    STATE(32), 2,
      sym_operation,
      sym_function_call,
  [1042] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(154), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(117), 1,
      sym_factor,
    STATE(131), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [1068] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(154), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(131), 1,
      sym_function_name,
    STATE(139), 1,
      sym_factor,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [1094] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(154), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(131), 1,
      sym_function_name,
    STATE(137), 1,
      sym_factor,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [1120] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(62), 1,
      sym__number,
    STATE(17), 1,
      sym_identifier,
    STATE(92), 1,
      sym_factor,
    STATE(127), 1,
      sym_function_name,
    STATE(32), 2,
      sym_operation,
      sym_function_call,
  [1146] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(154), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(106), 1,
      sym_factor,
    STATE(131), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [1172] = 2,
    ACTIONS(70), 1,
      aux_sym_identifier_token2,
    ACTIONS(68), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
      sym__operator,
      sym__number,
      anon_sym_RBRACK,
      sym__not,
  [1186] = 2,
    ACTIONS(114), 1,
      aux_sym_identifier_token2,
    ACTIONS(112), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
      sym__operator,
      sym__number,
      anon_sym_RBRACK,
      sym__not,
  [1200] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(62), 1,
      sym__number,
    STATE(17), 1,
      sym_identifier,
    STATE(89), 1,
      sym_factor,
    STATE(127), 1,
      sym_function_name,
    STATE(32), 2,
      sym_operation,
      sym_function_call,
  [1226] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(154), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(114), 1,
      sym_factor,
    STATE(131), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [1252] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(62), 1,
      sym__number,
    STATE(17), 1,
      sym_identifier,
    STATE(35), 1,
      sym_factor,
    STATE(127), 1,
      sym_function_name,
    STATE(32), 2,
      sym_operation,
      sym_function_call,
  [1278] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(154), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(131), 1,
      sym_function_name,
    STATE(136), 1,
      sym_factor,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [1304] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(62), 1,
      sym__number,
    STATE(17), 1,
      sym_identifier,
    STATE(86), 1,
      sym_factor,
    STATE(127), 1,
      sym_function_name,
    STATE(32), 2,
      sym_operation,
      sym_function_call,
  [1330] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(154), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(109), 1,
      sym_factor,
    STATE(131), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [1356] = 3,
    ACTIONS(142), 1,
      aux_sym_identifier_token2,
    ACTIONS(156), 1,
      sym__operator,
    ACTIONS(140), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
      sym__number,
      anon_sym_RBRACK,
      sym__not,
  [1372] = 2,
    ACTIONS(90), 1,
      aux_sym_identifier_token2,
    ACTIONS(88), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
      sym__operator,
      sym__number,
      anon_sym_RBRACK,
      sym__not,
  [1386] = 3,
    ACTIONS(152), 1,
      aux_sym_identifier_token2,
    ACTIONS(156), 1,
      sym__operator,
    ACTIONS(150), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
      sym__number,
      anon_sym_RBRACK,
      sym__not,
  [1402] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(57), 1,
      sym_factor,
    STATE(132), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [1428] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(59), 1,
      sym_factor,
    STATE(132), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [1454] = 8,
    ACTIONS(98), 1,
      aux_sym_identifier_token1,
    ACTIONS(100), 1,
      aux_sym_identifier_token2,
    ACTIONS(102), 1,
      sym__number,
    ACTIONS(106), 1,
      sym__not,
    STATE(69), 1,
      sym_identifier,
    STATE(74), 1,
      sym_factor,
    STATE(131), 1,
      sym_function_name,
    STATE(73), 2,
      sym_operation,
      sym_function_call,
  [1480] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(154), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(110), 1,
      sym_factor,
    STATE(131), 1,
      sym_function_name,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [1506] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(62), 1,
      sym__number,
    STATE(17), 1,
      sym_identifier,
    STATE(103), 1,
      sym_factor,
    STATE(127), 1,
      sym_function_name,
    STATE(32), 2,
      sym_operation,
      sym_function_call,
  [1532] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(154), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(131), 1,
      sym_function_name,
    STATE(141), 1,
      sym_factor,
    STATE(5), 2,
      sym_operation,
      sym_function_call,
  [1558] = 8,
    ACTIONS(98), 1,
      aux_sym_identifier_token1,
    ACTIONS(100), 1,
      aux_sym_identifier_token2,
    ACTIONS(102), 1,
      sym__number,
    ACTIONS(106), 1,
      sym__not,
    STATE(69), 1,
      sym_identifier,
    STATE(77), 1,
      sym_factor,
    STATE(131), 1,
      sym_function_name,
    STATE(73), 2,
      sym_operation,
      sym_function_call,
  [1584] = 2,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      sym__operator,
    ACTIONS(13), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1597] = 4,
    ACTIONS(156), 1,
      sym__operator,
    ACTIONS(162), 1,
      aux_sym_identifier_token2,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(160), 4,
      aux_sym_identifier_token1,
      sym__number,
      anon_sym_RBRACK,
      sym__not,
  [1614] = 3,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__operator,
    ACTIONS(19), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1629] = 5,
    ACTIONS(17), 1,
      sym__operator,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      sym__semi_colon,
    ACTIONS(166), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1648] = 5,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      sym__operator,
    STATE(111), 1,
      sym__semi_colon,
    ACTIONS(166), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1667] = 5,
    ACTIONS(29), 1,
      anon_sym_end,
    STATE(98), 1,
      sym_block,
    STATE(140), 1,
      sym_identifier,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(90), 2,
      sym_expression,
      aux_sym_block_repeat1,
  [1685] = 2,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__operator,
    ACTIONS(19), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1697] = 3,
    ACTIONS(170), 1,
      sym__operator,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(142), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1711] = 4,
    ACTIONS(156), 1,
      sym__operator,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      aux_sym_identifier_token2,
    ACTIONS(172), 4,
      anon_sym_RPAREN,
      aux_sym_identifier_token1,
      sym__number,
      sym__not,
  [1727] = 3,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      sym__eq,
    ACTIONS(17), 5,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [1741] = 3,
    ACTIONS(170), 1,
      sym__operator,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(152), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1755] = 4,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      sym__semi_colon,
    ACTIONS(166), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1771] = 2,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 5,
      anon_sym_control_structure,
      anon_sym_function,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1782] = 4,
    ACTIONS(144), 1,
      sym__operator,
    ACTIONS(184), 1,
      anon_sym_SEMI,
    STATE(119), 1,
      sym__semi_colon,
    ACTIONS(166), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1797] = 4,
    ACTIONS(186), 1,
      anon_sym_end,
    STATE(140), 1,
      sym_identifier,
    ACTIONS(188), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(81), 2,
      sym_expression,
      aux_sym_block_repeat1,
  [1812] = 4,
    ACTIONS(17), 1,
      sym__operator,
    ACTIONS(184), 1,
      anon_sym_SEMI,
    STATE(119), 1,
      sym__semi_colon,
    ACTIONS(166), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1827] = 4,
    ACTIONS(144), 1,
      sym__operator,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(195), 1,
      sym__comparator_equal,
    ACTIONS(193), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1842] = 2,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(199), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1853] = 4,
    ACTIONS(144), 1,
      sym__operator,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(205), 1,
      sym__comparator_equal,
    ACTIONS(203), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1868] = 4,
    ACTIONS(144), 1,
      sym__operator,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 1,
      sym__comparator_equal,
    ACTIONS(209), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1883] = 2,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(215), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1894] = 2,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 5,
      anon_sym_control_structure,
      anon_sym_function,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1905] = 4,
    ACTIONS(144), 1,
      sym__operator,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(225), 1,
      sym__comparator_equal,
    ACTIONS(223), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1920] = 4,
    ACTIONS(227), 1,
      anon_sym_end,
    STATE(140), 1,
      sym_identifier,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(81), 2,
      sym_expression,
      aux_sym_block_repeat1,
  [1935] = 5,
    ACTIONS(229), 1,
      anon_sym_return_value,
    STATE(130), 1,
      sym_function_name,
    STATE(133), 1,
      sym_identifier,
    STATE(135), 1,
      sym_return_value,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1952] = 3,
    ACTIONS(144), 1,
      sym__operator,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    ACTIONS(233), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1964] = 5,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(237), 1,
      aux_sym_identifier_token1,
    ACTIONS(240), 1,
      aux_sym_identifier_token2,
    STATE(93), 1,
      aux_sym_parameter_list_repeat1,
    STATE(112), 1,
      sym_identifier,
  [1980] = 3,
    ACTIONS(144), 1,
      sym__operator,
    ACTIONS(245), 1,
      sym__comparator_equal,
    ACTIONS(243), 3,
      sym__and,
      sym__or,
      sym__diff,
  [1992] = 5,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_parameter_list_repeat1,
    STATE(112), 1,
      sym_identifier,
  [2008] = 3,
    ACTIONS(144), 1,
      sym__operator,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2020] = 2,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2030] = 2,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2040] = 2,
    ACTIONS(261), 1,
      aux_sym_identifier_token2,
    ACTIONS(125), 4,
      aux_sym_identifier_token1,
      sym__number,
      anon_sym_RBRACK,
      sym__not,
  [2050] = 5,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_parameter_list_repeat1,
    STATE(112), 1,
      sym_identifier,
  [2066] = 3,
    ACTIONS(144), 1,
      sym__operator,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2078] = 2,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2088] = 3,
    ACTIONS(144), 1,
      sym__operator,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2100] = 3,
    ACTIONS(184), 1,
      anon_sym_SEMI,
    STATE(119), 1,
      sym__semi_colon,
    ACTIONS(166), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2112] = 2,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2122] = 2,
    ACTIONS(273), 1,
      sym__operator,
    ACTIONS(150), 4,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [2132] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2142] = 2,
    ACTIONS(279), 1,
      aux_sym_identifier_token2,
    ACTIONS(74), 4,
      anon_sym_RPAREN,
      aux_sym_identifier_token1,
      sym__number,
      sym__not,
  [2152] = 2,
    ACTIONS(273), 1,
      sym__operator,
    ACTIONS(140), 4,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [2162] = 3,
    ACTIONS(273), 1,
      sym__operator,
    ACTIONS(283), 1,
      sym__comparator_equal,
    ACTIONS(281), 3,
      sym__and,
      sym__or,
      sym__diff,
  [2174] = 2,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 4,
      anon_sym_control_structure,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2184] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      aux_sym_identifier_token2,
    ACTIONS(289), 2,
      anon_sym_RPAREN,
      aux_sym_identifier_token1,
  [2195] = 2,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(215), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2204] = 2,
    ACTIONS(273), 1,
      sym__operator,
    ACTIONS(295), 3,
      sym__and,
      sym__or,
      sym__diff,
  [2213] = 2,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    ACTIONS(199), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2222] = 4,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    STATE(129), 1,
      sym_function_name,
    STATE(133), 1,
      sym_identifier,
  [2235] = 2,
    ACTIONS(273), 1,
      sym__operator,
    ACTIONS(297), 3,
      sym__and,
      sym__or,
      sym__diff,
  [2244] = 1,
    ACTIONS(193), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2250] = 1,
    ACTIONS(287), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2256] = 1,
    ACTIONS(233), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2262] = 1,
    ACTIONS(299), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2268] = 2,
    ACTIONS(301), 1,
      aux_sym_identifier_token2,
    ACTIONS(235), 2,
      anon_sym_RPAREN,
      aux_sym_identifier_token1,
  [2276] = 1,
    ACTIONS(223), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2282] = 1,
    ACTIONS(209), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2288] = 1,
    ACTIONS(251), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2294] = 1,
    ACTIONS(303), 3,
      anon_sym_end,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2300] = 2,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_argument_list,
  [2307] = 2,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      sym__eq,
  [2314] = 2,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_parameter_list,
  [2321] = 2,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_parameter_list,
  [2328] = 2,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_argument_list,
  [2335] = 2,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_argument_list,
  [2342] = 1,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
  [2346] = 1,
    ACTIONS(315), 1,
      sym__eq,
  [2350] = 1,
    ACTIONS(317), 1,
      sym__eq,
  [2354] = 1,
    ACTIONS(319), 1,
      sym__operator,
  [2358] = 1,
    ACTIONS(321), 1,
      sym__operator,
  [2362] = 1,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
  [2366] = 1,
    ACTIONS(325), 1,
      sym__operator,
  [2370] = 1,
    ACTIONS(327), 1,
      sym__eq,
  [2374] = 1,
    ACTIONS(329), 1,
      sym__operator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 168,
  [SMALL_STATE(10)] = 195,
  [SMALL_STATE(11)] = 215,
  [SMALL_STATE(12)] = 247,
  [SMALL_STATE(13)] = 281,
  [SMALL_STATE(14)] = 313,
  [SMALL_STATE(15)] = 329,
  [SMALL_STATE(16)] = 361,
  [SMALL_STATE(17)] = 393,
  [SMALL_STATE(18)] = 411,
  [SMALL_STATE(19)] = 427,
  [SMALL_STATE(20)] = 459,
  [SMALL_STATE(21)] = 475,
  [SMALL_STATE(22)] = 507,
  [SMALL_STATE(23)] = 539,
  [SMALL_STATE(24)] = 573,
  [SMALL_STATE(25)] = 605,
  [SMALL_STATE(26)] = 637,
  [SMALL_STATE(27)] = 653,
  [SMALL_STATE(28)] = 685,
  [SMALL_STATE(29)] = 717,
  [SMALL_STATE(30)] = 749,
  [SMALL_STATE(31)] = 774,
  [SMALL_STATE(32)] = 793,
  [SMALL_STATE(33)] = 808,
  [SMALL_STATE(34)] = 823,
  [SMALL_STATE(35)] = 838,
  [SMALL_STATE(36)] = 855,
  [SMALL_STATE(37)] = 880,
  [SMALL_STATE(38)] = 897,
  [SMALL_STATE(39)] = 912,
  [SMALL_STATE(40)] = 938,
  [SMALL_STATE(41)] = 964,
  [SMALL_STATE(42)] = 990,
  [SMALL_STATE(43)] = 1016,
  [SMALL_STATE(44)] = 1042,
  [SMALL_STATE(45)] = 1068,
  [SMALL_STATE(46)] = 1094,
  [SMALL_STATE(47)] = 1120,
  [SMALL_STATE(48)] = 1146,
  [SMALL_STATE(49)] = 1172,
  [SMALL_STATE(50)] = 1186,
  [SMALL_STATE(51)] = 1200,
  [SMALL_STATE(52)] = 1226,
  [SMALL_STATE(53)] = 1252,
  [SMALL_STATE(54)] = 1278,
  [SMALL_STATE(55)] = 1304,
  [SMALL_STATE(56)] = 1330,
  [SMALL_STATE(57)] = 1356,
  [SMALL_STATE(58)] = 1372,
  [SMALL_STATE(59)] = 1386,
  [SMALL_STATE(60)] = 1402,
  [SMALL_STATE(61)] = 1428,
  [SMALL_STATE(62)] = 1454,
  [SMALL_STATE(63)] = 1480,
  [SMALL_STATE(64)] = 1506,
  [SMALL_STATE(65)] = 1532,
  [SMALL_STATE(66)] = 1558,
  [SMALL_STATE(67)] = 1584,
  [SMALL_STATE(68)] = 1597,
  [SMALL_STATE(69)] = 1614,
  [SMALL_STATE(70)] = 1629,
  [SMALL_STATE(71)] = 1648,
  [SMALL_STATE(72)] = 1667,
  [SMALL_STATE(73)] = 1685,
  [SMALL_STATE(74)] = 1697,
  [SMALL_STATE(75)] = 1711,
  [SMALL_STATE(76)] = 1727,
  [SMALL_STATE(77)] = 1741,
  [SMALL_STATE(78)] = 1755,
  [SMALL_STATE(79)] = 1771,
  [SMALL_STATE(80)] = 1782,
  [SMALL_STATE(81)] = 1797,
  [SMALL_STATE(82)] = 1812,
  [SMALL_STATE(83)] = 1827,
  [SMALL_STATE(84)] = 1842,
  [SMALL_STATE(85)] = 1853,
  [SMALL_STATE(86)] = 1868,
  [SMALL_STATE(87)] = 1883,
  [SMALL_STATE(88)] = 1894,
  [SMALL_STATE(89)] = 1905,
  [SMALL_STATE(90)] = 1920,
  [SMALL_STATE(91)] = 1935,
  [SMALL_STATE(92)] = 1952,
  [SMALL_STATE(93)] = 1964,
  [SMALL_STATE(94)] = 1980,
  [SMALL_STATE(95)] = 1992,
  [SMALL_STATE(96)] = 2008,
  [SMALL_STATE(97)] = 2020,
  [SMALL_STATE(98)] = 2030,
  [SMALL_STATE(99)] = 2040,
  [SMALL_STATE(100)] = 2050,
  [SMALL_STATE(101)] = 2066,
  [SMALL_STATE(102)] = 2078,
  [SMALL_STATE(103)] = 2088,
  [SMALL_STATE(104)] = 2100,
  [SMALL_STATE(105)] = 2112,
  [SMALL_STATE(106)] = 2122,
  [SMALL_STATE(107)] = 2132,
  [SMALL_STATE(108)] = 2142,
  [SMALL_STATE(109)] = 2152,
  [SMALL_STATE(110)] = 2162,
  [SMALL_STATE(111)] = 2174,
  [SMALL_STATE(112)] = 2184,
  [SMALL_STATE(113)] = 2195,
  [SMALL_STATE(114)] = 2204,
  [SMALL_STATE(115)] = 2213,
  [SMALL_STATE(116)] = 2222,
  [SMALL_STATE(117)] = 2235,
  [SMALL_STATE(118)] = 2244,
  [SMALL_STATE(119)] = 2250,
  [SMALL_STATE(120)] = 2256,
  [SMALL_STATE(121)] = 2262,
  [SMALL_STATE(122)] = 2268,
  [SMALL_STATE(123)] = 2276,
  [SMALL_STATE(124)] = 2282,
  [SMALL_STATE(125)] = 2288,
  [SMALL_STATE(126)] = 2294,
  [SMALL_STATE(127)] = 2300,
  [SMALL_STATE(128)] = 2307,
  [SMALL_STATE(129)] = 2314,
  [SMALL_STATE(130)] = 2321,
  [SMALL_STATE(131)] = 2328,
  [SMALL_STATE(132)] = 2335,
  [SMALL_STATE(133)] = 2342,
  [SMALL_STATE(134)] = 2346,
  [SMALL_STATE(135)] = 2350,
  [SMALL_STATE(136)] = 2354,
  [SMALL_STATE(137)] = 2358,
  [SMALL_STATE(138)] = 2362,
  [SMALL_STATE(139)] = 2366,
  [SMALL_STATE(140)] = 2370,
  [SMALL_STATE(141)] = 2374,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factor, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(5),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(46),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_definition_repeat1, 2), SHIFT_REPEAT(2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_definition_repeat1, 2), SHIFT_REPEAT(2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_definition_repeat1, 2), SHIFT_REPEAT(5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_definition_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_definition_repeat1, 2), SHIFT_REPEAT(46),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_definition_repeat1, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vector_definition_repeat1, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_definition, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector_definition, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 6),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_definition, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector_definition, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 7),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(2),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 8),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, .production_id = 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vector_definition_repeat1, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, .production_id = 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 9),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_value, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [323] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
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
