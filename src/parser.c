#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 176
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 1
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym__structure_keyword = 1,
  anon_sym_function = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym__bool_keywords = 5,
  anon_sym_COMMA = 6,
  anon_sym_return_value = 7,
  anon_sym_if = 8,
  anon_sym_for = 9,
  anon_sym_while = 10,
  aux_sym_identifier_token1 = 11,
  aux_sym_identifier_token2 = 12,
  anon_sym_SEMI = 13,
  sym__eq = 14,
  sym__operator = 15,
  sym__number = 16,
  sym__end = 17,
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
  alias_sym__function_keyword = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym__structure_keyword] = "_structure_keyword",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym__bool_keywords] = "_bool_keywords",
  [anon_sym_COMMA] = ",",
  [anon_sym_return_value] = "identifier",
  [anon_sym_if] = "if",
  [anon_sym_for] = "for",
  [anon_sym_while] = "while",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_token2] = "identifier_token2",
  [anon_sym_SEMI] = ";",
  [sym__eq] = "_eq",
  [sym__operator] = "_operator",
  [sym__number] = "_number",
  [sym__end] = "_end",
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
  [alias_sym__function_keyword] = "_function_keyword",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym__structure_keyword] = anon_sym__structure_keyword,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym__bool_keywords] = anon_sym__bool_keywords,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_return_value] = sym_identifier,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_while] = anon_sym_while,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__eq] = sym__eq,
  [sym__operator] = sym__operator,
  [sym__number] = sym__number,
  [sym__end] = sym__end,
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
  [alias_sym__function_keyword] = alias_sym__function_keyword,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym__structure_keyword] = {
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
  [anon_sym__bool_keywords] = {
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
  [sym__end] = {
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
  [alias_sym__function_keyword] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym__function_keyword,
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
      if (eof) ADVANCE(15);
      if (lookahead == '!') ADVANCE(102);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(98);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'w') ADVANCE(47);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '^') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(102);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == ']') ADVANCE(98);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '^') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == '|') ADVANCE(13);
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
          lookahead == '^') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          lookahead == '^') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(99);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          lookahead == '^') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 13:
      if (lookahead == '|') ADVANCE(100);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '^') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym__structure_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_function);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym__bool_keywords);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_return_value);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_if);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_for);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_while);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 's') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__eq);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__operator);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__and);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__or);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__not);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__not);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__diff);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__comparator_equal);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 14},
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
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym__structure_keyword] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym__bool_keywords] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_return_value] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [aux_sym_identifier_token2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__eq] = ACTIONS(1),
    [sym__operator] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
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
    [sym_source_file] = STATE(175),
    [sym_structure] = STATE(11),
    [sym_function_definition] = STATE(11),
    [sym_expression] = STATE(11),
    [sym_function_name] = STATE(159),
    [sym_identifier] = STATE(156),
    [sym_function_call] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym__structure_keyword] = ACTIONS(5),
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
  [41] = 6,
    ACTIONS(5), 1,
      anon_sym__structure_keyword,
    STATE(121), 1,
      sym_block,
    STATE(170), 1,
      sym_identifier,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(45), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
    ACTIONS(17), 5,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [67] = 11,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym__bool_keywords,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(27), 1,
      sym__not,
    STATE(4), 1,
      sym_operation,
    STATE(8), 1,
      sym_function_call,
    STATE(88), 1,
      sym_identifier,
    STATE(117), 1,
      sym_factor,
    STATE(159), 1,
      sym_function_name,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(79), 2,
      sym_bool,
      sym_expression,
  [103] = 6,
    ACTIONS(29), 1,
      anon_sym__structure_keyword,
    STATE(143), 1,
      sym_block,
    STATE(174), 1,
      sym_identifier,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(85), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
    ACTIONS(17), 5,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [129] = 11,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym__bool_keywords,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(27), 1,
      sym__not,
    STATE(6), 1,
      sym_operation,
    STATE(8), 1,
      sym_function_call,
    STATE(88), 1,
      sym_identifier,
    STATE(117), 1,
      sym_factor,
    STATE(159), 1,
      sym_function_name,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(81), 2,
      sym_bool,
      sym_expression,
  [165] = 2,
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
  [183] = 4,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym__semi_colon,
    ACTIONS(33), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [204] = 7,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym__structure_keyword,
    ACTIONS(42), 1,
      anon_sym_function,
    STATE(156), 1,
      sym_identifier,
    STATE(159), 1,
      sym_function_name,
    ACTIONS(45), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(10), 5,
      sym_structure,
      sym_function_definition,
      sym_expression,
      sym_function_call,
      aux_sym_source_file_repeat1,
  [231] = 7,
    ACTIONS(5), 1,
      anon_sym__structure_keyword,
    ACTIONS(7), 1,
      anon_sym_function,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(156), 1,
      sym_identifier,
    STATE(159), 1,
      sym_function_name,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(10), 5,
      sym_structure,
      sym_function_definition,
      sym_expression,
      sym_function_call,
      aux_sym_source_file_repeat1,
  [258] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(33), 1,
      aux_sym_argument_list_repeat1,
    STATE(97), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [290] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      sym__not,
    ACTIONS(56), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_vector_definition_repeat1,
    STATE(82), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [322] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      sym__not,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_vector_definition_repeat1,
    STATE(82), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [354] = 10,
    ACTIONS(60), 1,
      aux_sym_identifier_token1,
    ACTIONS(63), 1,
      aux_sym_identifier_token2,
    ACTIONS(66), 1,
      sym__number,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(71), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_vector_definition_repeat1,
    STATE(82), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [386] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      sym__not,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_identifier,
    STATE(33), 1,
      aux_sym_argument_list_repeat1,
    STATE(97), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [418] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      sym__not,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_identifier,
    STATE(16), 1,
      aux_sym_argument_list_repeat1,
    STATE(97), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [450] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      sym__not,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_identifier,
    STATE(14), 1,
      aux_sym_vector_definition_repeat1,
    STATE(82), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [482] = 11,
    ACTIONS(80), 1,
      aux_sym_identifier_token1,
    ACTIONS(82), 1,
      aux_sym_identifier_token2,
    ACTIONS(84), 1,
      sym__number,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      sym__not,
    STATE(89), 1,
      sym_operation,
    STATE(90), 1,
      sym_factor,
    STATE(95), 1,
      sym_identifier,
    STATE(112), 1,
      sym_function_call,
    STATE(113), 1,
      sym_vector_definition,
    STATE(161), 1,
      sym_function_name,
  [516] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      sym__not,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_identifier,
    STATE(13), 1,
      aux_sym_vector_definition_repeat1,
    STATE(82), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [548] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      sym__not,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_argument_list_repeat1,
    STATE(97), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [580] = 2,
    ACTIONS(96), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(94), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [596] = 11,
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
    STATE(84), 1,
      sym_identifier,
    STATE(86), 1,
      sym_operation,
    STATE(87), 1,
      sym_factor,
    STATE(96), 1,
      sym_function_call,
    STATE(98), 1,
      sym_vector_definition,
    STATE(159), 1,
      sym_function_name,
  [630] = 4,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym__semi_colon,
    ACTIONS(33), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(31), 6,
      anon_sym_RPAREN,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [650] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      sym__not,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_identifier,
    STATE(33), 1,
      aux_sym_argument_list_repeat1,
    STATE(97), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [682] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      sym__not,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_identifier,
    STATE(31), 1,
      aux_sym_vector_definition_repeat1,
    STATE(82), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [714] = 3,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 3,
      anon_sym__structure_keyword,
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
  [732] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      sym__not,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_identifier,
    STATE(33), 1,
      aux_sym_argument_list_repeat1,
    STATE(97), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [764] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      sym__not,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_identifier,
    STATE(12), 1,
      aux_sym_argument_list_repeat1,
    STATE(97), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [796] = 2,
    ACTIONS(120), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(118), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [812] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      sym__not,
    ACTIONS(122), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_vector_definition_repeat1,
    STATE(82), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [844] = 2,
    ACTIONS(13), 3,
      anon_sym__structure_keyword,
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
  [860] = 10,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(126), 1,
      aux_sym_identifier_token1,
    ACTIONS(129), 1,
      aux_sym_identifier_token2,
    ACTIONS(132), 1,
      sym__number,
    ACTIONS(135), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(33), 1,
      aux_sym_argument_list_repeat1,
    STATE(97), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [892] = 2,
    ACTIONS(140), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [908] = 10,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      sym__not,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_argument_list_repeat1,
    STATE(97), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [940] = 11,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(144), 1,
      aux_sym_identifier_token1,
    ACTIONS(146), 1,
      aux_sym_identifier_token2,
    ACTIONS(148), 1,
      sym__number,
    ACTIONS(150), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_identifier,
    STATE(38), 1,
      sym_function_call,
    STATE(106), 1,
      sym_operation,
    STATE(107), 1,
      sym_factor,
    STATE(135), 1,
      sym_vector_definition,
    STATE(158), 1,
      sym_function_name,
  [974] = 3,
    ACTIONS(156), 1,
      sym__operator,
    ACTIONS(152), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(154), 6,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [991] = 2,
    ACTIONS(19), 3,
      anon_sym__structure_keyword,
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
  [1006] = 4,
    ACTIONS(33), 1,
      aux_sym_identifier_token2,
    ACTIONS(158), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym__semi_colon,
    ACTIONS(31), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      sym__operator,
      sym__number,
      anon_sym_RBRACK,
      sym__not,
  [1025] = 3,
    ACTIONS(156), 1,
      sym__operator,
    ACTIONS(160), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(162), 6,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [1042] = 2,
    ACTIONS(96), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(94), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [1057] = 2,
    ACTIONS(140), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(138), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [1072] = 2,
    ACTIONS(120), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(118), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [1087] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(144), 1,
      aux_sym_identifier_token1,
    ACTIONS(146), 1,
      aux_sym_identifier_token2,
    ACTIONS(148), 1,
      sym__number,
    STATE(27), 1,
      sym_identifier,
    STATE(37), 1,
      sym_factor,
    STATE(158), 1,
      sym_function_name,
    STATE(38), 2,
      sym_operation,
      sym_function_call,
  [1113] = 6,
    ACTIONS(5), 1,
      anon_sym__structure_keyword,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      anon_sym_function,
    STATE(170), 1,
      sym_identifier,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(48), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
  [1135] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(168), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(138), 1,
      sym_factor,
    STATE(159), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [1161] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(168), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(118), 1,
      sym_factor,
    STATE(159), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [1187] = 6,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      anon_sym__structure_keyword,
    ACTIONS(175), 1,
      anon_sym_function,
    STATE(170), 1,
      sym_identifier,
    ACTIONS(177), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(48), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
  [1209] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(168), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(159), 1,
      sym_function_name,
    STATE(173), 1,
      sym_factor,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [1235] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(60), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [1261] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(58), 1,
      sym_factor,
    STATE(160), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [1287] = 2,
    ACTIONS(96), 1,
      aux_sym_identifier_token2,
    ACTIONS(94), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
      sym__operator,
      sym__number,
      anon_sym_RBRACK,
      sym__not,
  [1301] = 8,
    ACTIONS(98), 1,
      aux_sym_identifier_token1,
    ACTIONS(100), 1,
      aux_sym_identifier_token2,
    ACTIONS(102), 1,
      sym__number,
    ACTIONS(106), 1,
      sym__not,
    STATE(84), 1,
      sym_identifier,
    STATE(92), 1,
      sym_factor,
    STATE(159), 1,
      sym_function_name,
    STATE(96), 2,
      sym_operation,
      sym_function_call,
  [1327] = 2,
    ACTIONS(120), 1,
      aux_sym_identifier_token2,
    ACTIONS(118), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
      sym__operator,
      sym__number,
      anon_sym_RBRACK,
      sym__not,
  [1341] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(168), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(136), 1,
      sym_factor,
    STATE(159), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [1367] = 8,
    ACTIONS(98), 1,
      aux_sym_identifier_token1,
    ACTIONS(100), 1,
      aux_sym_identifier_token2,
    ACTIONS(102), 1,
      sym__number,
    ACTIONS(106), 1,
      sym__not,
    STATE(84), 1,
      sym_identifier,
    STATE(91), 1,
      sym_factor,
    STATE(159), 1,
      sym_function_name,
    STATE(96), 2,
      sym_operation,
      sym_function_call,
  [1393] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(168), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(159), 1,
      sym_function_name,
    STATE(171), 1,
      sym_factor,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [1419] = 3,
    ACTIONS(160), 1,
      aux_sym_identifier_token2,
    ACTIONS(180), 1,
      sym__operator,
    ACTIONS(162), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
      sym__number,
      anon_sym_RBRACK,
      sym__not,
  [1435] = 6,
    ACTIONS(29), 1,
      anon_sym__structure_keyword,
    ACTIONS(182), 1,
      sym__end,
    STATE(167), 1,
      sym_block,
    STATE(174), 1,
      sym_identifier,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(85), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
  [1457] = 3,
    ACTIONS(152), 1,
      aux_sym_identifier_token2,
    ACTIONS(180), 1,
      sym__operator,
    ACTIONS(154), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
      sym__number,
      anon_sym_RBRACK,
      sym__not,
  [1473] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(168), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(145), 1,
      sym_factor,
    STATE(159), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [1499] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(144), 1,
      aux_sym_identifier_token1,
    ACTIONS(146), 1,
      aux_sym_identifier_token2,
    ACTIONS(148), 1,
      sym__number,
    STATE(27), 1,
      sym_identifier,
    STATE(122), 1,
      sym_factor,
    STATE(158), 1,
      sym_function_name,
    STATE(38), 2,
      sym_operation,
      sym_function_call,
  [1525] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(144), 1,
      aux_sym_identifier_token1,
    ACTIONS(146), 1,
      aux_sym_identifier_token2,
    ACTIONS(148), 1,
      sym__number,
    STATE(27), 1,
      sym_identifier,
    STATE(101), 1,
      sym_factor,
    STATE(158), 1,
      sym_function_name,
    STATE(38), 2,
      sym_operation,
      sym_function_call,
  [1551] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(144), 1,
      aux_sym_identifier_token1,
    ACTIONS(146), 1,
      aux_sym_identifier_token2,
    ACTIONS(148), 1,
      sym__number,
    STATE(27), 1,
      sym_identifier,
    STATE(116), 1,
      sym_factor,
    STATE(158), 1,
      sym_function_name,
    STATE(38), 2,
      sym_operation,
      sym_function_call,
  [1577] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(168), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(159), 1,
      sym_function_name,
    STATE(166), 1,
      sym_factor,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [1603] = 2,
    ACTIONS(140), 1,
      aux_sym_identifier_token2,
    ACTIONS(138), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
      sym__operator,
      sym__number,
      anon_sym_RBRACK,
      sym__not,
  [1617] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(144), 1,
      aux_sym_identifier_token1,
    ACTIONS(146), 1,
      aux_sym_identifier_token2,
    ACTIONS(148), 1,
      sym__number,
    STATE(27), 1,
      sym_identifier,
    STATE(40), 1,
      sym_factor,
    STATE(158), 1,
      sym_function_name,
    STATE(38), 2,
      sym_operation,
      sym_function_call,
  [1643] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(168), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(159), 1,
      sym_function_name,
    STATE(163), 1,
      sym_factor,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [1669] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(144), 1,
      aux_sym_identifier_token1,
    ACTIONS(146), 1,
      aux_sym_identifier_token2,
    ACTIONS(148), 1,
      sym__number,
    STATE(27), 1,
      sym_identifier,
    STATE(123), 1,
      sym_factor,
    STATE(158), 1,
      sym_function_name,
    STATE(38), 2,
      sym_operation,
      sym_function_call,
  [1695] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(144), 1,
      aux_sym_identifier_token1,
    ACTIONS(146), 1,
      aux_sym_identifier_token2,
    ACTIONS(148), 1,
      sym__number,
    STATE(27), 1,
      sym_identifier,
    STATE(114), 1,
      sym_factor,
    STATE(158), 1,
      sym_function_name,
    STATE(38), 2,
      sym_operation,
      sym_function_call,
  [1721] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(168), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(119), 1,
      sym_factor,
    STATE(159), 1,
      sym_function_name,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [1747] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(144), 1,
      aux_sym_identifier_token1,
    ACTIONS(146), 1,
      aux_sym_identifier_token2,
    ACTIONS(148), 1,
      sym__number,
    STATE(27), 1,
      sym_identifier,
    STATE(103), 1,
      sym_factor,
    STATE(158), 1,
      sym_function_name,
    STATE(38), 2,
      sym_operation,
      sym_function_call,
  [1773] = 8,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(25), 1,
      sym__number,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(168), 1,
      sym__not,
    STATE(3), 1,
      sym_identifier,
    STATE(159), 1,
      sym_function_name,
    STATE(169), 1,
      sym_factor,
    STATE(8), 2,
      sym_operation,
      sym_function_call,
  [1799] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(144), 1,
      aux_sym_identifier_token1,
    ACTIONS(146), 1,
      aux_sym_identifier_token2,
    ACTIONS(148), 1,
      sym__number,
    STATE(27), 1,
      sym_identifier,
    STATE(99), 1,
      sym_factor,
    STATE(158), 1,
      sym_function_name,
    STATE(38), 2,
      sym_operation,
      sym_function_call,
  [1825] = 6,
    ACTIONS(29), 1,
      anon_sym__structure_keyword,
    ACTIONS(184), 1,
      sym__end,
    STATE(172), 1,
      sym_block,
    STATE(174), 1,
      sym_identifier,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(85), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
  [1847] = 8,
    ACTIONS(27), 1,
      sym__not,
    ACTIONS(144), 1,
      aux_sym_identifier_token1,
    ACTIONS(146), 1,
      aux_sym_identifier_token2,
    ACTIONS(148), 1,
      sym__number,
    STATE(27), 1,
      sym_identifier,
    STATE(120), 1,
      sym_factor,
    STATE(158), 1,
      sym_function_name,
    STATE(38), 2,
      sym_operation,
      sym_function_call,
  [1873] = 8,
    ACTIONS(80), 1,
      aux_sym_identifier_token1,
    ACTIONS(82), 1,
      aux_sym_identifier_token2,
    ACTIONS(84), 1,
      sym__number,
    ACTIONS(88), 1,
      sym__not,
    STATE(95), 1,
      sym_identifier,
    STATE(108), 1,
      sym_factor,
    STATE(161), 1,
      sym_function_name,
    STATE(112), 2,
      sym_operation,
      sym_function_call,
  [1899] = 8,
    ACTIONS(80), 1,
      aux_sym_identifier_token1,
    ACTIONS(82), 1,
      aux_sym_identifier_token2,
    ACTIONS(84), 1,
      sym__number,
    ACTIONS(88), 1,
      sym__not,
    STATE(95), 1,
      sym_identifier,
    STATE(104), 1,
      sym_factor,
    STATE(161), 1,
      sym_function_name,
    STATE(112), 2,
      sym_operation,
      sym_function_call,
  [1925] = 5,
    ACTIONS(5), 1,
      anon_sym__structure_keyword,
    STATE(121), 1,
      sym_block,
    STATE(170), 1,
      sym_identifier,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(45), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
  [1944] = 5,
    ACTIONS(175), 1,
      sym__end,
    ACTIONS(186), 1,
      anon_sym__structure_keyword,
    STATE(174), 1,
      sym_identifier,
    ACTIONS(177), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(80), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
  [1963] = 5,
    ACTIONS(29), 1,
      anon_sym__structure_keyword,
    STATE(143), 1,
      sym_block,
    STATE(174), 1,
      sym_identifier,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(85), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
  [1982] = 4,
    ACTIONS(180), 1,
      sym__operator,
    ACTIONS(193), 1,
      aux_sym_identifier_token2,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(191), 4,
      aux_sym_identifier_token1,
      sym__number,
      anon_sym_RBRACK,
      sym__not,
  [1999] = 2,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      sym__operator,
    ACTIONS(13), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2012] = 3,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__operator,
    ACTIONS(19), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2027] = 5,
    ACTIONS(29), 1,
      anon_sym__structure_keyword,
    ACTIONS(166), 1,
      sym__end,
    STATE(174), 1,
      sym_identifier,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(80), 3,
      sym_structure,
      sym_expression,
      aux_sym_block_repeat1,
  [2046] = 5,
    ACTIONS(17), 1,
      sym__operator,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 1,
      anon_sym_SEMI,
    STATE(133), 1,
      sym__semi_colon,
    ACTIONS(197), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2065] = 5,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 1,
      anon_sym_SEMI,
    ACTIONS(201), 1,
      sym__operator,
    STATE(133), 1,
      sym__semi_colon,
    ACTIONS(197), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2084] = 3,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      sym__eq,
    ACTIONS(17), 5,
      sym__operator,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [2098] = 4,
    ACTIONS(17), 1,
      sym__operator,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    STATE(142), 1,
      sym__semi_colon,
    ACTIONS(197), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2114] = 4,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    ACTIONS(207), 1,
      sym__operator,
    STATE(142), 1,
      sym__semi_colon,
    ACTIONS(197), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2130] = 3,
    ACTIONS(201), 1,
      sym__operator,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(160), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2144] = 3,
    ACTIONS(201), 1,
      sym__operator,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(152), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2158] = 2,
    ACTIONS(11), 3,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      sym__operator,
    ACTIONS(13), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2170] = 4,
    ACTIONS(31), 1,
      sym__operator,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      sym__semi_colon,
    ACTIONS(33), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2186] = 3,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 2,
      anon_sym_SEMI,
      sym__operator,
    ACTIONS(19), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2200] = 2,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__operator,
    ACTIONS(19), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2212] = 4,
    ACTIONS(180), 1,
      sym__operator,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      aux_sym_identifier_token2,
    ACTIONS(211), 4,
      anon_sym_RPAREN,
      aux_sym_identifier_token1,
      sym__number,
      sym__not,
  [2228] = 4,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 1,
      anon_sym_SEMI,
    STATE(133), 1,
      sym__semi_colon,
    ACTIONS(197), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2244] = 4,
    ACTIONS(156), 1,
      sym__operator,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(221), 1,
      sym__comparator_equal,
    ACTIONS(217), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2259] = 2,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(225), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2270] = 4,
    ACTIONS(156), 1,
      sym__operator,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    ACTIONS(231), 1,
      sym__comparator_equal,
    ACTIONS(227), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2285] = 2,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(235), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2296] = 4,
    ACTIONS(156), 1,
      sym__operator,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(241), 1,
      sym__comparator_equal,
    ACTIONS(237), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2311] = 3,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    ACTIONS(207), 1,
      sym__operator,
    ACTIONS(152), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2324] = 2,
    ACTIONS(138), 2,
      anon_sym_SEMI,
      sym__operator,
    ACTIONS(140), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2335] = 4,
    ACTIONS(17), 1,
      sym__operator,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym__semi_colon,
    ACTIONS(197), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2350] = 4,
    ACTIONS(156), 1,
      sym__operator,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym__semi_colon,
    ACTIONS(197), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2365] = 3,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(207), 1,
      sym__operator,
    ACTIONS(160), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2378] = 2,
    ACTIONS(94), 2,
      anon_sym_SEMI,
      sym__operator,
    ACTIONS(96), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2389] = 5,
    ACTIONS(245), 1,
      anon_sym_return_value,
    STATE(162), 1,
      sym_function_name,
    STATE(164), 1,
      sym_identifier,
    STATE(165), 1,
      sym_return_value,
    ACTIONS(9), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2406] = 2,
    ACTIONS(118), 2,
      anon_sym_SEMI,
      sym__operator,
    ACTIONS(120), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2417] = 2,
    ACTIONS(17), 2,
      anon_sym_SEMI,
      sym__operator,
    ACTIONS(19), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2428] = 3,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    STATE(142), 1,
      sym__semi_colon,
    ACTIONS(197), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2441] = 4,
    ACTIONS(156), 1,
      sym__operator,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 1,
      sym__comparator_equal,
    ACTIONS(247), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2456] = 2,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2466] = 3,
    ACTIONS(156), 1,
      sym__operator,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2478] = 3,
    ACTIONS(156), 1,
      sym__operator,
    ACTIONS(263), 1,
      sym__comparator_equal,
    ACTIONS(261), 3,
      sym__and,
      sym__or,
      sym__diff,
  [2490] = 2,
    ACTIONS(265), 1,
      sym__operator,
    ACTIONS(154), 4,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [2500] = 3,
    ACTIONS(265), 1,
      sym__operator,
    ACTIONS(269), 1,
      sym__comparator_equal,
    ACTIONS(267), 3,
      sym__and,
      sym__or,
      sym__diff,
  [2512] = 3,
    ACTIONS(156), 1,
      sym__operator,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2524] = 2,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2534] = 3,
    ACTIONS(156), 1,
      sym__operator,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(275), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2546] = 3,
    ACTIONS(156), 1,
      sym__operator,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2558] = 5,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_parameter_list_repeat1,
    STATE(139), 1,
      sym_identifier,
  [2574] = 2,
    ACTIONS(281), 1,
      aux_sym_identifier_token2,
    ACTIONS(69), 4,
      aux_sym_identifier_token1,
      sym__number,
      anon_sym_RBRACK,
      sym__not,
  [2584] = 2,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2594] = 5,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(289), 1,
      aux_sym_identifier_token1,
    ACTIONS(292), 1,
      aux_sym_identifier_token2,
    STATE(127), 1,
      aux_sym_parameter_list_repeat1,
    STATE(139), 1,
      sym_identifier,
  [2610] = 2,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(235), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2620] = 5,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_parameter_list_repeat1,
    STATE(139), 1,
      sym_identifier,
  [2636] = 2,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    ACTIONS(299), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2646] = 2,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(225), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2656] = 2,
    ACTIONS(301), 1,
      aux_sym_identifier_token2,
    ACTIONS(124), 4,
      anon_sym_RPAREN,
      aux_sym_identifier_token1,
      sym__number,
      sym__not,
  [2666] = 2,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2676] = 2,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 4,
      anon_sym__structure_keyword,
      anon_sym_function,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2686] = 3,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym__semi_colon,
    ACTIONS(197), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2698] = 2,
    ACTIONS(265), 1,
      sym__operator,
    ACTIONS(162), 4,
      sym__and,
      sym__or,
      sym__diff,
      sym__comparator_equal,
  [2708] = 1,
    ACTIONS(311), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2715] = 2,
    ACTIONS(265), 1,
      sym__operator,
    ACTIONS(313), 3,
      sym__and,
      sym__or,
      sym__diff,
  [2724] = 3,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      aux_sym_identifier_token2,
    ACTIONS(315), 2,
      anon_sym_RPAREN,
      aux_sym_identifier_token1,
  [2735] = 2,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(225), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2744] = 4,
    ACTIONS(9), 1,
      aux_sym_identifier_token2,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    STATE(157), 1,
      sym_function_name,
    STATE(164), 1,
      sym_identifier,
  [2757] = 1,
    ACTIONS(305), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2764] = 1,
    ACTIONS(273), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2771] = 1,
    ACTIONS(321), 4,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      sym__end,
  [2778] = 2,
    ACTIONS(265), 1,
      sym__operator,
    ACTIONS(323), 3,
      sym__and,
      sym__or,
      sym__diff,
  [2787] = 2,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(235), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2796] = 1,
    ACTIONS(325), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2802] = 2,
    ACTIONS(327), 1,
      aux_sym_identifier_token2,
    ACTIONS(287), 2,
      anon_sym_RPAREN,
      aux_sym_identifier_token1,
  [2810] = 1,
    ACTIONS(305), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2816] = 1,
    ACTIONS(217), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2822] = 1,
    ACTIONS(329), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2828] = 1,
    ACTIONS(275), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2834] = 1,
    ACTIONS(257), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2840] = 1,
    ACTIONS(247), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2846] = 1,
    ACTIONS(237), 3,
      anon_sym__structure_keyword,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2852] = 2,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      sym__eq,
  [2859] = 2,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_parameter_list,
  [2866] = 2,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_argument_list,
  [2873] = 2,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_argument_list,
  [2880] = 2,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_argument_list,
  [2887] = 2,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_argument_list,
  [2894] = 2,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_parameter_list,
  [2901] = 1,
    ACTIONS(343), 1,
      sym__operator,
  [2905] = 1,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
  [2909] = 1,
    ACTIONS(345), 1,
      sym__eq,
  [2913] = 1,
    ACTIONS(347), 1,
      sym__operator,
  [2917] = 1,
    ACTIONS(349), 1,
      sym__end,
  [2921] = 1,
    ACTIONS(351), 1,
      sym__eq,
  [2925] = 1,
    ACTIONS(353), 1,
      sym__operator,
  [2929] = 1,
    ACTIONS(331), 1,
      sym__eq,
  [2933] = 1,
    ACTIONS(355), 1,
      sym__operator,
  [2937] = 1,
    ACTIONS(357), 1,
      sym__end,
  [2941] = 1,
    ACTIONS(359), 1,
      sym__operator,
  [2945] = 1,
    ACTIONS(361), 1,
      sym__eq,
  [2949] = 1,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 67,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 165,
  [SMALL_STATE(9)] = 183,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 231,
  [SMALL_STATE(12)] = 258,
  [SMALL_STATE(13)] = 290,
  [SMALL_STATE(14)] = 322,
  [SMALL_STATE(15)] = 354,
  [SMALL_STATE(16)] = 386,
  [SMALL_STATE(17)] = 418,
  [SMALL_STATE(18)] = 450,
  [SMALL_STATE(19)] = 482,
  [SMALL_STATE(20)] = 516,
  [SMALL_STATE(21)] = 548,
  [SMALL_STATE(22)] = 580,
  [SMALL_STATE(23)] = 596,
  [SMALL_STATE(24)] = 630,
  [SMALL_STATE(25)] = 650,
  [SMALL_STATE(26)] = 682,
  [SMALL_STATE(27)] = 714,
  [SMALL_STATE(28)] = 732,
  [SMALL_STATE(29)] = 764,
  [SMALL_STATE(30)] = 796,
  [SMALL_STATE(31)] = 812,
  [SMALL_STATE(32)] = 844,
  [SMALL_STATE(33)] = 860,
  [SMALL_STATE(34)] = 892,
  [SMALL_STATE(35)] = 908,
  [SMALL_STATE(36)] = 940,
  [SMALL_STATE(37)] = 974,
  [SMALL_STATE(38)] = 991,
  [SMALL_STATE(39)] = 1006,
  [SMALL_STATE(40)] = 1025,
  [SMALL_STATE(41)] = 1042,
  [SMALL_STATE(42)] = 1057,
  [SMALL_STATE(43)] = 1072,
  [SMALL_STATE(44)] = 1087,
  [SMALL_STATE(45)] = 1113,
  [SMALL_STATE(46)] = 1135,
  [SMALL_STATE(47)] = 1161,
  [SMALL_STATE(48)] = 1187,
  [SMALL_STATE(49)] = 1209,
  [SMALL_STATE(50)] = 1235,
  [SMALL_STATE(51)] = 1261,
  [SMALL_STATE(52)] = 1287,
  [SMALL_STATE(53)] = 1301,
  [SMALL_STATE(54)] = 1327,
  [SMALL_STATE(55)] = 1341,
  [SMALL_STATE(56)] = 1367,
  [SMALL_STATE(57)] = 1393,
  [SMALL_STATE(58)] = 1419,
  [SMALL_STATE(59)] = 1435,
  [SMALL_STATE(60)] = 1457,
  [SMALL_STATE(61)] = 1473,
  [SMALL_STATE(62)] = 1499,
  [SMALL_STATE(63)] = 1525,
  [SMALL_STATE(64)] = 1551,
  [SMALL_STATE(65)] = 1577,
  [SMALL_STATE(66)] = 1603,
  [SMALL_STATE(67)] = 1617,
  [SMALL_STATE(68)] = 1643,
  [SMALL_STATE(69)] = 1669,
  [SMALL_STATE(70)] = 1695,
  [SMALL_STATE(71)] = 1721,
  [SMALL_STATE(72)] = 1747,
  [SMALL_STATE(73)] = 1773,
  [SMALL_STATE(74)] = 1799,
  [SMALL_STATE(75)] = 1825,
  [SMALL_STATE(76)] = 1847,
  [SMALL_STATE(77)] = 1873,
  [SMALL_STATE(78)] = 1899,
  [SMALL_STATE(79)] = 1925,
  [SMALL_STATE(80)] = 1944,
  [SMALL_STATE(81)] = 1963,
  [SMALL_STATE(82)] = 1982,
  [SMALL_STATE(83)] = 1999,
  [SMALL_STATE(84)] = 2012,
  [SMALL_STATE(85)] = 2027,
  [SMALL_STATE(86)] = 2046,
  [SMALL_STATE(87)] = 2065,
  [SMALL_STATE(88)] = 2084,
  [SMALL_STATE(89)] = 2098,
  [SMALL_STATE(90)] = 2114,
  [SMALL_STATE(91)] = 2130,
  [SMALL_STATE(92)] = 2144,
  [SMALL_STATE(93)] = 2158,
  [SMALL_STATE(94)] = 2170,
  [SMALL_STATE(95)] = 2186,
  [SMALL_STATE(96)] = 2200,
  [SMALL_STATE(97)] = 2212,
  [SMALL_STATE(98)] = 2228,
  [SMALL_STATE(99)] = 2244,
  [SMALL_STATE(100)] = 2259,
  [SMALL_STATE(101)] = 2270,
  [SMALL_STATE(102)] = 2285,
  [SMALL_STATE(103)] = 2296,
  [SMALL_STATE(104)] = 2311,
  [SMALL_STATE(105)] = 2324,
  [SMALL_STATE(106)] = 2335,
  [SMALL_STATE(107)] = 2350,
  [SMALL_STATE(108)] = 2365,
  [SMALL_STATE(109)] = 2378,
  [SMALL_STATE(110)] = 2389,
  [SMALL_STATE(111)] = 2406,
  [SMALL_STATE(112)] = 2417,
  [SMALL_STATE(113)] = 2428,
  [SMALL_STATE(114)] = 2441,
  [SMALL_STATE(115)] = 2456,
  [SMALL_STATE(116)] = 2466,
  [SMALL_STATE(117)] = 2478,
  [SMALL_STATE(118)] = 2490,
  [SMALL_STATE(119)] = 2500,
  [SMALL_STATE(120)] = 2512,
  [SMALL_STATE(121)] = 2524,
  [SMALL_STATE(122)] = 2534,
  [SMALL_STATE(123)] = 2546,
  [SMALL_STATE(124)] = 2558,
  [SMALL_STATE(125)] = 2574,
  [SMALL_STATE(126)] = 2584,
  [SMALL_STATE(127)] = 2594,
  [SMALL_STATE(128)] = 2610,
  [SMALL_STATE(129)] = 2620,
  [SMALL_STATE(130)] = 2636,
  [SMALL_STATE(131)] = 2646,
  [SMALL_STATE(132)] = 2656,
  [SMALL_STATE(133)] = 2666,
  [SMALL_STATE(134)] = 2676,
  [SMALL_STATE(135)] = 2686,
  [SMALL_STATE(136)] = 2698,
  [SMALL_STATE(137)] = 2708,
  [SMALL_STATE(138)] = 2715,
  [SMALL_STATE(139)] = 2724,
  [SMALL_STATE(140)] = 2735,
  [SMALL_STATE(141)] = 2744,
  [SMALL_STATE(142)] = 2757,
  [SMALL_STATE(143)] = 2764,
  [SMALL_STATE(144)] = 2771,
  [SMALL_STATE(145)] = 2778,
  [SMALL_STATE(146)] = 2787,
  [SMALL_STATE(147)] = 2796,
  [SMALL_STATE(148)] = 2802,
  [SMALL_STATE(149)] = 2810,
  [SMALL_STATE(150)] = 2816,
  [SMALL_STATE(151)] = 2822,
  [SMALL_STATE(152)] = 2828,
  [SMALL_STATE(153)] = 2834,
  [SMALL_STATE(154)] = 2840,
  [SMALL_STATE(155)] = 2846,
  [SMALL_STATE(156)] = 2852,
  [SMALL_STATE(157)] = 2859,
  [SMALL_STATE(158)] = 2866,
  [SMALL_STATE(159)] = 2873,
  [SMALL_STATE(160)] = 2880,
  [SMALL_STATE(161)] = 2887,
  [SMALL_STATE(162)] = 2894,
  [SMALL_STATE(163)] = 2901,
  [SMALL_STATE(164)] = 2905,
  [SMALL_STATE(165)] = 2909,
  [SMALL_STATE(166)] = 2913,
  [SMALL_STATE(167)] = 2917,
  [SMALL_STATE(168)] = 2921,
  [SMALL_STATE(169)] = 2925,
  [SMALL_STATE(170)] = 2929,
  [SMALL_STATE(171)] = 2933,
  [SMALL_STATE(172)] = 2937,
  [SMALL_STATE(173)] = 2941,
  [SMALL_STATE(174)] = 2945,
  [SMALL_STATE(175)] = 2949,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factor, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_definition_repeat1, 2), SHIFT_REPEAT(2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_definition_repeat1, 2), SHIFT_REPEAT(2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_definition_repeat1, 2), SHIFT_REPEAT(8),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_definition_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_definition_repeat1, 2), SHIFT_REPEAT(65),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(8),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(65),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_definition_repeat1, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vector_definition_repeat1, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_definition, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector_definition, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_definition, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector_definition, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, .production_id = 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 7),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 8),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vector_definition_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(2),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7, .production_id = 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 9),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_value, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [363] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
