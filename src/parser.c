#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  sym__semi_colon = 2,
  sym__eq = 3,
  sym__operator = 4,
  sym__number = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  sym_source_file = 8,
  sym_operation = 9,
  sym_expression = 10,
  sym_factor = 11,
  sym_vector_definition = 12,
  aux_sym_source_file_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym__semi_colon] = "_semi_colon",
  [sym__eq] = "_eq",
  [sym__operator] = "_operator",
  [sym__number] = "_number",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_source_file] = "source_file",
  [sym_operation] = "operation",
  [sym_expression] = "expression",
  [sym_factor] = "factor",
  [sym_vector_definition] = "vector_definition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym__semi_colon] = sym__semi_colon,
  [sym__eq] = sym__eq,
  [sym__operator] = sym__operator,
  [sym__number] = sym__number,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_source_file] = sym_source_file,
  [sym_operation] = sym_operation,
  [sym_expression] = sym_expression,
  [sym_factor] = sym_factor,
  [sym_vector_definition] = sym_vector_definition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
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
      if (eof) ADVANCE(1);
      if (lookahead == ';') ADVANCE(3);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == ']') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym__semi_colon);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym__eq);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__operator);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__semi_colon] = ACTIONS(1),
    [sym__eq] = ACTIONS(1),
    [sym__operator] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym_expression] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      sym_factor,
    ACTIONS(7), 2,
      sym_identifier,
      sym__number,
    STATE(8), 2,
      sym_operation,
      sym_vector_definition,
  [15] = 1,
    ACTIONS(11), 5,
      ts_builtin_sym_end,
      sym_identifier,
      sym__semi_colon,
      sym__operator,
      anon_sym_RBRACK,
  [23] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym_expression,
      aux_sym_source_file_repeat1,
  [34] = 3,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(5), 2,
      sym_expression,
      aux_sym_source_file_repeat1,
  [45] = 3,
    ACTIONS(22), 1,
      sym__semi_colon,
    ACTIONS(24), 1,
      sym__operator,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [56] = 2,
    STATE(15), 1,
      sym_factor,
    ACTIONS(7), 2,
      sym_identifier,
      sym__number,
  [64] = 2,
    ACTIONS(22), 1,
      sym__semi_colon,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [72] = 2,
    STATE(11), 1,
      sym_factor,
    ACTIONS(7), 2,
      sym_identifier,
      sym__number,
  [80] = 1,
    ACTIONS(26), 3,
      ts_builtin_sym_end,
      sym_identifier,
      sym__semi_colon,
  [86] = 1,
    ACTIONS(28), 3,
      ts_builtin_sym_end,
      sym_identifier,
      sym__semi_colon,
  [92] = 1,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [97] = 1,
    ACTIONS(32), 1,
      sym__eq,
  [101] = 1,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
  [105] = 1,
    ACTIONS(36), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 23,
  [SMALL_STATE(5)] = 34,
  [SMALL_STATE(6)] = 45,
  [SMALL_STATE(7)] = 56,
  [SMALL_STATE(8)] = 64,
  [SMALL_STATE(9)] = 72,
  [SMALL_STATE(10)] = 80,
  [SMALL_STATE(11)] = 86,
  [SMALL_STATE(12)] = 92,
  [SMALL_STATE(13)] = 97,
  [SMALL_STATE(14)] = 101,
  [SMALL_STATE(15)] = 105,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_definition, 3),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [34] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
