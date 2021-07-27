#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 158
#define LARGE_STATE_COUNT 26
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_document_token1 = 1,
  anon_sym_LF = 2,
  anon_sym_COLON = 3,
  aux_sym__key_token1 = 4,
  anon_sym_null = 5,
  anon_sym_true = 6,
  anon_sym_false = 7,
  aux_sym_int_token1 = 8,
  aux_sym_int_token2 = 9,
  aux_sym_int_token3 = 10,
  aux_sym_int_token4 = 11,
  sym_float = 12,
  anon_sym_DQUOTE = 13,
  anon_sym_SQUOTE = 14,
  aux_sym_string_token1 = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  sym_comment = 20,
  sym_document = 21,
  sym_key_value = 22,
  sym__key = 23,
  sym__value = 24,
  sym_number = 25,
  sym_int = 26,
  sym_string = 27,
  sym_array = 28,
  sym_object = 29,
  aux_sym_document_repeat1 = 30,
  aux_sym_key_value_repeat1 = 31,
  aux_sym_string_repeat1 = 32,
  aux_sym_array_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [aux_sym__key_token1] = "_key_token1",
  [anon_sym_null] = "null",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_int_token1] = "int_token1",
  [aux_sym_int_token2] = "int_token2",
  [aux_sym_int_token3] = "int_token3",
  [aux_sym_int_token4] = "int_token4",
  [sym_float] = "float",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_key_value] = "key_value",
  [sym__key] = "_key",
  [sym__value] = "_value",
  [sym_number] = "number",
  [sym_int] = "int",
  [sym_string] = "string",
  [sym_array] = "array",
  [sym_object] = "object",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_key_value_repeat1] = "key_value_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__key_token1] = aux_sym__key_token1,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [aux_sym_int_token2] = aux_sym_int_token2,
  [aux_sym_int_token3] = aux_sym_int_token3,
  [aux_sym_int_token4] = aux_sym_int_token4,
  [sym_float] = sym_float,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_key_value] = sym_key_value,
  [sym__key] = sym__key,
  [sym__value] = sym__value,
  [sym_number] = sym_number,
  [sym_int] = sym_int,
  [sym_string] = sym_string,
  [sym_array] = sym_array,
  [sym_object] = sym_object,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_key_value_repeat1] = aux_sym_key_value_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__key_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym__key] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
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
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(35);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == ']') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == ']') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(79);
      END_STATE();
    case 27:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(35);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == ']') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 28:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == ']') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_document_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ',') ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(37);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(48);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(49);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__key_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'x') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_int_token3);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_int_token4);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 29},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 27},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 27},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 27},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 27},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 27},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 27},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 27},
  [88] = {.lex_state = 27},
  [89] = {.lex_state = 27},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 27},
  [93] = {.lex_state = 27},
  [94] = {.lex_state = 27},
  [95] = {.lex_state = 27},
  [96] = {.lex_state = 27},
  [97] = {.lex_state = 27},
  [98] = {.lex_state = 27},
  [99] = {.lex_state = 27},
  [100] = {.lex_state = 27},
  [101] = {.lex_state = 27},
  [102] = {.lex_state = 27},
  [103] = {.lex_state = 27},
  [104] = {.lex_state = 27},
  [105] = {.lex_state = 27},
  [106] = {.lex_state = 27},
  [107] = {.lex_state = 27},
  [108] = {.lex_state = 27},
  [109] = {.lex_state = 27},
  [110] = {.lex_state = 27},
  [111] = {.lex_state = 27},
  [112] = {.lex_state = 27},
  [113] = {.lex_state = 27},
  [114] = {.lex_state = 27},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 27},
  [117] = {.lex_state = 27},
  [118] = {.lex_state = 27},
  [119] = {.lex_state = 27},
  [120] = {.lex_state = 27},
  [121] = {.lex_state = 27},
  [122] = {.lex_state = 27},
  [123] = {.lex_state = 27},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 27},
  [126] = {.lex_state = 27},
  [127] = {.lex_state = 27},
  [128] = {.lex_state = 27},
  [129] = {.lex_state = 27},
  [130] = {.lex_state = 27},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 28},
  [133] = {.lex_state = 28},
  [134] = {.lex_state = 28},
  [135] = {.lex_state = 28},
  [136] = {.lex_state = 28},
  [137] = {.lex_state = 28},
  [138] = {.lex_state = 28},
  [139] = {.lex_state = 28},
  [140] = {.lex_state = 28},
  [141] = {.lex_state = 28},
  [142] = {.lex_state = 28},
  [143] = {.lex_state = 28},
  [144] = {.lex_state = 28},
  [145] = {.lex_state = 28},
  [146] = {.lex_state = 28},
  [147] = {.lex_state = 28},
  [148] = {.lex_state = 28},
  [149] = {.lex_state = 28},
  [150] = {.lex_state = 28},
  [151] = {.lex_state = 28},
  [152] = {.lex_state = 28},
  [153] = {.lex_state = 28},
  [154] = {.lex_state = 28},
  [155] = {.lex_state = 28},
  [156] = {.lex_state = 28},
  [157] = {.lex_state = 28},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__key_token1] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_int_token1] = ACTIONS(1),
    [aux_sym_int_token2] = ACTIONS(1),
    [aux_sym_int_token3] = ACTIONS(1),
    [aux_sym_int_token4] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(153),
    [sym_key_value] = STATE(61),
    [sym__key] = STATE(63),
    [sym__value] = STATE(148),
    [sym_number] = STATE(148),
    [sym_int] = STATE(154),
    [sym_string] = STATE(73),
    [sym_array] = STATE(148),
    [sym_object] = STATE(148),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_document_token1] = ACTIONS(7),
    [aux_sym__key_token1] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [aux_sym_int_token1] = ACTIONS(13),
    [aux_sym_int_token2] = ACTIONS(13),
    [aux_sym_int_token3] = ACTIONS(13),
    [aux_sym_int_token4] = ACTIONS(13),
    [sym_float] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__value] = STATE(99),
    [sym_number] = STATE(99),
    [sym_int] = STATE(66),
    [sym_string] = STATE(99),
    [sym_array] = STATE(99),
    [sym_object] = STATE(99),
    [aux_sym_key_value_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(29),
    [aux_sym_int_token3] = ACTIONS(29),
    [aux_sym_int_token4] = ACTIONS(29),
    [sym_float] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__value] = STATE(86),
    [sym_number] = STATE(86),
    [sym_int] = STATE(66),
    [sym_string] = STATE(86),
    [sym_array] = STATE(86),
    [sym_object] = STATE(86),
    [aux_sym_key_value_repeat1] = STATE(6),
    [aux_sym_document_token1] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(43),
    [anon_sym_null] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(29),
    [aux_sym_int_token3] = ACTIONS(29),
    [aux_sym_int_token4] = ACTIONS(29),
    [sym_float] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__value] = STATE(106),
    [sym_number] = STATE(106),
    [sym_int] = STATE(66),
    [sym_string] = STATE(106),
    [sym_array] = STATE(106),
    [sym_object] = STATE(106),
    [aux_sym_key_value_repeat1] = STATE(2),
    [aux_sym_document_token1] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_null] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(29),
    [aux_sym_int_token3] = ACTIONS(29),
    [aux_sym_int_token4] = ACTIONS(29),
    [sym_float] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__value] = STATE(87),
    [sym_number] = STATE(87),
    [sym_int] = STATE(66),
    [sym_string] = STATE(87),
    [sym_array] = STATE(87),
    [sym_object] = STATE(87),
    [aux_sym_key_value_repeat1] = STATE(7),
    [aux_sym_document_token1] = ACTIONS(57),
    [anon_sym_LF] = ACTIONS(59),
    [anon_sym_null] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(29),
    [aux_sym_int_token3] = ACTIONS(29),
    [aux_sym_int_token4] = ACTIONS(29),
    [sym_float] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__value] = STATE(95),
    [sym_number] = STATE(95),
    [sym_int] = STATE(66),
    [sym_string] = STATE(95),
    [sym_array] = STATE(95),
    [sym_object] = STATE(95),
    [aux_sym_key_value_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(29),
    [aux_sym_int_token3] = ACTIONS(29),
    [aux_sym_int_token4] = ACTIONS(29),
    [sym_float] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__value] = STATE(81),
    [sym_number] = STATE(81),
    [sym_int] = STATE(66),
    [sym_string] = STATE(81),
    [sym_array] = STATE(81),
    [sym_object] = STATE(81),
    [aux_sym_key_value_repeat1] = STATE(26),
    [aux_sym_document_token1] = ACTIONS(71),
    [anon_sym_LF] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(29),
    [aux_sym_int_token3] = ACTIONS(29),
    [aux_sym_int_token4] = ACTIONS(29),
    [sym_float] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__value] = STATE(110),
    [sym_number] = STATE(110),
    [sym_int] = STATE(121),
    [sym_string] = STATE(110),
    [sym_array] = STATE(110),
    [sym_object] = STATE(110),
    [aux_sym_key_value_repeat1] = STATE(27),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_null] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(79),
    [anon_sym_false] = ACTIONS(79),
    [aux_sym_int_token1] = ACTIONS(81),
    [aux_sym_int_token2] = ACTIONS(81),
    [aux_sym_int_token3] = ACTIONS(81),
    [aux_sym_int_token4] = ACTIONS(81),
    [sym_float] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__value] = STATE(108),
    [sym_number] = STATE(108),
    [sym_int] = STATE(66),
    [sym_string] = STATE(108),
    [sym_array] = STATE(108),
    [sym_object] = STATE(108),
    [aux_sym_key_value_repeat1] = STATE(27),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_null] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(29),
    [aux_sym_int_token3] = ACTIONS(29),
    [aux_sym_int_token4] = ACTIONS(29),
    [sym_float] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__value] = STATE(107),
    [sym_number] = STATE(107),
    [sym_int] = STATE(121),
    [sym_string] = STATE(107),
    [sym_array] = STATE(107),
    [sym_object] = STATE(107),
    [aux_sym_key_value_repeat1] = STATE(15),
    [anon_sym_LF] = ACTIONS(93),
    [anon_sym_null] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [anon_sym_false] = ACTIONS(95),
    [aux_sym_int_token1] = ACTIONS(81),
    [aux_sym_int_token2] = ACTIONS(81),
    [aux_sym_int_token3] = ACTIONS(81),
    [aux_sym_int_token4] = ACTIONS(81),
    [sym_float] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__value] = STATE(116),
    [sym_number] = STATE(116),
    [sym_int] = STATE(66),
    [sym_string] = STATE(116),
    [sym_array] = STATE(116),
    [sym_object] = STATE(116),
    [aux_sym_key_value_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(97),
    [anon_sym_null] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(99),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(29),
    [aux_sym_int_token3] = ACTIONS(29),
    [aux_sym_int_token4] = ACTIONS(29),
    [sym_float] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__value] = STATE(116),
    [sym_number] = STATE(116),
    [sym_int] = STATE(66),
    [sym_string] = STATE(116),
    [sym_array] = STATE(116),
    [sym_object] = STATE(116),
    [aux_sym_key_value_repeat1] = STATE(27),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_null] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(99),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(29),
    [aux_sym_int_token3] = ACTIONS(29),
    [aux_sym_int_token4] = ACTIONS(29),
    [sym_float] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__value] = STATE(109),
    [sym_number] = STATE(109),
    [sym_int] = STATE(121),
    [sym_string] = STATE(109),
    [sym_array] = STATE(109),
    [sym_object] = STATE(109),
    [aux_sym_key_value_repeat1] = STATE(8),
    [anon_sym_LF] = ACTIONS(101),
    [anon_sym_null] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(103),
    [anon_sym_false] = ACTIONS(103),
    [aux_sym_int_token1] = ACTIONS(81),
    [aux_sym_int_token2] = ACTIONS(81),
    [aux_sym_int_token3] = ACTIONS(81),
    [aux_sym_int_token4] = ACTIONS(81),
    [sym_float] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__value] = STATE(114),
    [sym_number] = STATE(114),
    [sym_int] = STATE(66),
    [sym_string] = STATE(114),
    [sym_array] = STATE(114),
    [sym_object] = STATE(114),
    [aux_sym_key_value_repeat1] = STATE(12),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_null] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(107),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(29),
    [aux_sym_int_token3] = ACTIONS(29),
    [aux_sym_int_token4] = ACTIONS(29),
    [sym_float] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__value] = STATE(109),
    [sym_number] = STATE(109),
    [sym_int] = STATE(121),
    [sym_string] = STATE(109),
    [sym_array] = STATE(109),
    [sym_object] = STATE(109),
    [aux_sym_key_value_repeat1] = STATE(27),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_null] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(103),
    [anon_sym_false] = ACTIONS(103),
    [aux_sym_int_token1] = ACTIONS(81),
    [aux_sym_int_token2] = ACTIONS(81),
    [aux_sym_int_token3] = ACTIONS(81),
    [aux_sym_int_token4] = ACTIONS(81),
    [sym_float] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__value] = STATE(113),
    [sym_number] = STATE(113),
    [sym_int] = STATE(66),
    [sym_string] = STATE(113),
    [sym_array] = STATE(113),
    [sym_object] = STATE(113),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(111),
    [aux_sym_int_token3] = ACTIONS(111),
    [aux_sym_int_token4] = ACTIONS(111),
    [sym_float] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(123),
  },
  [17] = {
    [sym__value] = STATE(113),
    [sym_number] = STATE(113),
    [sym_int] = STATE(66),
    [sym_string] = STATE(113),
    [sym_array] = STATE(113),
    [sym_object] = STATE(113),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(111),
    [aux_sym_int_token3] = ACTIONS(111),
    [aux_sym_int_token4] = ACTIONS(111),
    [sym_float] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(123),
  },
  [18] = {
    [sym__value] = STATE(113),
    [sym_number] = STATE(113),
    [sym_int] = STATE(66),
    [sym_string] = STATE(113),
    [sym_array] = STATE(113),
    [sym_object] = STATE(113),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(111),
    [aux_sym_int_token3] = ACTIONS(111),
    [aux_sym_int_token4] = ACTIONS(111),
    [sym_float] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(123),
  },
  [19] = {
    [sym__value] = STATE(113),
    [sym_number] = STATE(113),
    [sym_int] = STATE(66),
    [sym_string] = STATE(113),
    [sym_array] = STATE(113),
    [sym_object] = STATE(113),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(111),
    [aux_sym_int_token3] = ACTIONS(111),
    [aux_sym_int_token4] = ACTIONS(111),
    [sym_float] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(123),
  },
  [20] = {
    [sym__value] = STATE(113),
    [sym_number] = STATE(113),
    [sym_int] = STATE(66),
    [sym_string] = STATE(113),
    [sym_array] = STATE(113),
    [sym_object] = STATE(113),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(111),
    [aux_sym_int_token3] = ACTIONS(111),
    [aux_sym_int_token4] = ACTIONS(111),
    [sym_float] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(123),
  },
  [21] = {
    [sym__value] = STATE(113),
    [sym_number] = STATE(113),
    [sym_int] = STATE(66),
    [sym_string] = STATE(113),
    [sym_array] = STATE(113),
    [sym_object] = STATE(113),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(111),
    [aux_sym_int_token3] = ACTIONS(111),
    [aux_sym_int_token4] = ACTIONS(111),
    [sym_float] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(123),
  },
  [22] = {
    [sym__value] = STATE(113),
    [sym_number] = STATE(113),
    [sym_int] = STATE(66),
    [sym_string] = STATE(113),
    [sym_array] = STATE(113),
    [sym_object] = STATE(113),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(111),
    [aux_sym_int_token3] = ACTIONS(111),
    [aux_sym_int_token4] = ACTIONS(111),
    [sym_float] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(123),
  },
  [23] = {
    [sym__value] = STATE(113),
    [sym_number] = STATE(113),
    [sym_int] = STATE(66),
    [sym_string] = STATE(113),
    [sym_array] = STATE(113),
    [sym_object] = STATE(113),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(111),
    [aux_sym_int_token3] = ACTIONS(111),
    [aux_sym_int_token4] = ACTIONS(111),
    [sym_float] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(123),
  },
  [24] = {
    [sym__value] = STATE(113),
    [sym_number] = STATE(113),
    [sym_int] = STATE(66),
    [sym_string] = STATE(113),
    [sym_array] = STATE(113),
    [sym_object] = STATE(113),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(111),
    [aux_sym_int_token3] = ACTIONS(111),
    [aux_sym_int_token4] = ACTIONS(111),
    [sym_float] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(123),
  },
  [25] = {
    [sym__value] = STATE(113),
    [sym_number] = STATE(113),
    [sym_int] = STATE(66),
    [sym_string] = STATE(113),
    [sym_array] = STATE(113),
    [sym_object] = STATE(113),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_int_token2] = ACTIONS(111),
    [aux_sym_int_token3] = ACTIONS(111),
    [aux_sym_int_token4] = ACTIONS(111),
    [sym_float] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(123),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LF,
    STATE(26), 1,
      aux_sym_key_value_repeat1,
    ACTIONS(141), 14,
      aux_sym_document_token1,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_float,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [26] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_key_value_repeat1,
    ACTIONS(141), 13,
      anon_sym_COLON,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      aux_sym_int_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_int_token4,
      sym_float,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [51] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_document_token1,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      aux_sym__key_token1,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_key_value_repeat1,
    STATE(75), 1,
      sym_key_value,
    ACTIONS(155), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(60), 2,
      sym__key,
      sym_string,
  [81] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      aux_sym__key_token1,
    ACTIONS(159), 1,
      aux_sym_document_token1,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_key_value_repeat1,
    STATE(103), 1,
      sym_key_value,
    ACTIONS(155), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(60), 2,
      sym__key,
      sym_string,
  [111] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      aux_sym__key_token1,
    ACTIONS(163), 1,
      aux_sym_document_token1,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_key_value_repeat1,
    STATE(97), 1,
      sym_key_value,
    ACTIONS(155), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(60), 2,
      sym__key,
      sym_string,
  [141] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym__key_token1,
    ACTIONS(167), 1,
      aux_sym_document_token1,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_key_value_repeat1,
    STATE(85), 1,
      sym_key_value,
    ACTIONS(155), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(60), 2,
      sym__key,
      sym_string,
  [171] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym__key_token1,
    ACTIONS(173), 1,
      aux_sym_document_token1,
    ACTIONS(175), 1,
      anon_sym_LF,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_key_value_repeat1,
    STATE(105), 1,
      sym_key_value,
    ACTIONS(155), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(60), 2,
      sym__key,
      sym_string,
  [201] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym__key_token1,
    ACTIONS(179), 1,
      aux_sym_document_token1,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_key_value_repeat1,
    STATE(88), 1,
      sym_key_value,
    ACTIONS(155), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(60), 2,
      sym__key,
      sym_string,
  [231] = 6,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym__key_token1,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_key_value,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(60), 2,
      sym__key,
      sym_string,
  [252] = 6,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym__key_token1,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_key_value,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(60), 2,
      sym__key,
      sym_string,
  [273] = 6,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym__key_token1,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_key_value,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(60), 2,
      sym__key,
      sym_string,
  [294] = 6,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym__key_token1,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_key_value,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(60), 2,
      sym__key,
      sym_string,
  [315] = 6,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 1,
      aux_sym__key_token1,
    STATE(111), 1,
      sym_key_value,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(63), 2,
      sym__key,
      sym_string,
  [336] = 6,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym__key_token1,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_key_value,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(60), 2,
      sym__key,
      sym_string,
  [357] = 6,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym__key_token1,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_key_value,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(60), 2,
      sym__key,
      sym_string,
  [378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LF,
    STATE(41), 1,
      aux_sym_key_value_repeat1,
    ACTIONS(141), 5,
      aux_sym_document_token1,
      aux_sym__key_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [395] = 6,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym__key_token1,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    STATE(111), 1,
      sym_key_value,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(63), 2,
      sym__key,
      sym_string,
  [416] = 6,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym__key_token1,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_key_value,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(60), 2,
      sym__key,
      sym_string,
  [437] = 6,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym__key_token1,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_key_value,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(60), 2,
      sym__key,
      sym_string,
  [458] = 6,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym__key_token1,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_key_value,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(60), 2,
      sym__key,
      sym_string,
  [479] = 5,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym__key_token1,
    STATE(112), 1,
      sym_key_value,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(60), 2,
      sym__key,
      sym_string,
  [497] = 5,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym__key_token1,
    STATE(111), 1,
      sym_key_value,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(63), 2,
      sym__key,
      sym_string,
  [515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      aux_sym_string_token1,
    STATE(52), 1,
      aux_sym_string_repeat1,
    ACTIONS(216), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      aux_sym_string_token1,
    STATE(52), 1,
      aux_sym_string_repeat1,
    ACTIONS(220), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      aux_sym_string_token1,
    STATE(49), 1,
      aux_sym_string_repeat1,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym_string_token1,
    STATE(54), 1,
      aux_sym_string_repeat1,
    ACTIONS(226), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      aux_sym_string_token1,
    STATE(52), 1,
      aux_sym_string_repeat1,
    ACTIONS(230), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      aux_sym_string_token1,
    STATE(52), 1,
      aux_sym_string_repeat1,
    ACTIONS(235), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      aux_sym_string_token1,
    STATE(52), 1,
      aux_sym_string_repeat1,
    ACTIONS(237), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym_string_token1,
    STATE(53), 1,
      aux_sym_string_repeat1,
    ACTIONS(239), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_string_token1,
    STATE(48), 1,
      aux_sym_string_repeat1,
    ACTIONS(243), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym_document_token1,
    ACTIONS(249), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      aux_sym_document_token1,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_document_repeat1,
  [665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(255), 1,
      anon_sym_COLON,
    STATE(27), 1,
      aux_sym_key_value_repeat1,
  [678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LF,
    ACTIONS(259), 1,
      anon_sym_COLON,
    STATE(59), 1,
      aux_sym_key_value_repeat1,
  [691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 1,
      aux_sym_document_token1,
    STATE(89), 1,
      aux_sym_document_repeat1,
  [704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_document_token1,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_document_repeat1,
  [717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LF,
    ACTIONS(271), 1,
      anon_sym_COLON,
    STATE(90), 1,
      aux_sym_key_value_repeat1,
  [730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_document_token1,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      aux_sym_array_repeat1,
  [743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym_document_token1,
    ACTIONS(279), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      aux_sym_document_token1,
    ACTIONS(283), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym_document_token1,
    ACTIONS(287), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      aux_sym_document_token1,
    ACTIONS(291), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym_document_token1,
    ACTIONS(295), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      aux_sym_document_token1,
    ACTIONS(299), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      aux_sym_document_token1,
    ACTIONS(303), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      aux_sym_document_token1,
    ACTIONS(307), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 1,
      anon_sym_LF,
    ACTIONS(313), 1,
      anon_sym_COLON,
  [844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_document_token1,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_document_repeat1,
  [857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym_document_token1,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_document_repeat1,
  [870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_document_token1,
    ACTIONS(326), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_document_token1,
    ACTIONS(330), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym_document_token1,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_document_repeat1,
  [905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_COLON,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym_document_token1,
    ACTIONS(334), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym_document_token1,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_array_repeat1,
  [940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym_document_token1,
    ACTIONS(342), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym_document_token1,
    ACTIONS(346), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym_document_token1,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      aux_sym_array_repeat1,
  [975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(348), 1,
      aux_sym_document_token1,
    STATE(78), 1,
      aux_sym_document_repeat1,
  [988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(350), 1,
      aux_sym_document_token1,
    STATE(92), 1,
      aux_sym_array_repeat1,
  [1001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    ACTIONS(352), 1,
      aux_sym_document_token1,
    STATE(84), 1,
      aux_sym_array_repeat1,
  [1014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    ACTIONS(354), 1,
      aux_sym_document_token1,
    STATE(96), 1,
      aux_sym_document_repeat1,
  [1027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 1,
      aux_sym_document_token1,
    STATE(104), 1,
      aux_sym_document_repeat1,
  [1040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(358), 1,
      anon_sym_COLON,
    STATE(27), 1,
      aux_sym_key_value_repeat1,
  [1053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COLON,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      aux_sym_document_token1,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      aux_sym_array_repeat1,
  [1077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_document_token1,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_document_repeat1,
  [1090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym_document_token1,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      aux_sym_array_repeat1,
  [1103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      aux_sym_document_token1,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      aux_sym_array_repeat1,
  [1116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      aux_sym_document_token1,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_document_repeat1,
  [1129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_document_token1,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_document_repeat1,
  [1142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_document_token1,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_document_repeat1,
  [1155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_document_token1,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      aux_sym_array_repeat1,
  [1168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_document_token1,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      aux_sym_array_repeat1,
  [1181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      aux_sym_document_token1,
    ACTIONS(386), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      aux_sym_array_repeat1,
  [1194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      aux_sym_document_token1,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      aux_sym_array_repeat1,
  [1207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      aux_sym_document_token1,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_document_repeat1,
  [1220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    ACTIONS(395), 1,
      aux_sym_document_token1,
    STATE(104), 1,
      aux_sym_document_repeat1,
  [1233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    ACTIONS(398), 1,
      aux_sym_document_token1,
    STATE(98), 1,
      aux_sym_document_repeat1,
  [1246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(400), 1,
      aux_sym_document_token1,
    STATE(100), 1,
      aux_sym_array_repeat1,
  [1259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      aux_sym_document_token1,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
  [1277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(393), 1,
      aux_sym_document_token1,
  [1311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
    ACTIONS(410), 1,
      aux_sym_document_token1,
  [1321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      aux_sym_document_token1,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
  [1331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      aux_sym_document_token1,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
  [1349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LF,
    ACTIONS(287), 1,
      anon_sym_COLON,
  [1415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_LF,
    ACTIONS(299), 1,
      anon_sym_COLON,
  [1473] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
  [1480] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
  [1487] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
  [1494] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
  [1501] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
  [1508] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
  [1515] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
  [1522] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
  [1529] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_RBRACK,
  [1536] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
  [1543] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
  [1550] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
  [1557] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_RBRACK,
  [1564] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
  [1571] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
  [1578] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
  [1585] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
  [1592] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
  [1599] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
  [1606] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
  [1613] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
  [1620] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(428), 1,
      ts_builtin_sym_end,
  [1627] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
  [1634] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
  [1641] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
  [1648] = 2,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(26)] = 0,
  [SMALL_STATE(27)] = 26,
  [SMALL_STATE(28)] = 51,
  [SMALL_STATE(29)] = 81,
  [SMALL_STATE(30)] = 111,
  [SMALL_STATE(31)] = 141,
  [SMALL_STATE(32)] = 171,
  [SMALL_STATE(33)] = 201,
  [SMALL_STATE(34)] = 231,
  [SMALL_STATE(35)] = 252,
  [SMALL_STATE(36)] = 273,
  [SMALL_STATE(37)] = 294,
  [SMALL_STATE(38)] = 315,
  [SMALL_STATE(39)] = 336,
  [SMALL_STATE(40)] = 357,
  [SMALL_STATE(41)] = 378,
  [SMALL_STATE(42)] = 395,
  [SMALL_STATE(43)] = 416,
  [SMALL_STATE(44)] = 437,
  [SMALL_STATE(45)] = 458,
  [SMALL_STATE(46)] = 479,
  [SMALL_STATE(47)] = 497,
  [SMALL_STATE(48)] = 515,
  [SMALL_STATE(49)] = 529,
  [SMALL_STATE(50)] = 543,
  [SMALL_STATE(51)] = 557,
  [SMALL_STATE(52)] = 571,
  [SMALL_STATE(53)] = 585,
  [SMALL_STATE(54)] = 599,
  [SMALL_STATE(55)] = 613,
  [SMALL_STATE(56)] = 627,
  [SMALL_STATE(57)] = 641,
  [SMALL_STATE(58)] = 652,
  [SMALL_STATE(59)] = 665,
  [SMALL_STATE(60)] = 678,
  [SMALL_STATE(61)] = 691,
  [SMALL_STATE(62)] = 704,
  [SMALL_STATE(63)] = 717,
  [SMALL_STATE(64)] = 730,
  [SMALL_STATE(65)] = 743,
  [SMALL_STATE(66)] = 754,
  [SMALL_STATE(67)] = 765,
  [SMALL_STATE(68)] = 776,
  [SMALL_STATE(69)] = 787,
  [SMALL_STATE(70)] = 798,
  [SMALL_STATE(71)] = 809,
  [SMALL_STATE(72)] = 820,
  [SMALL_STATE(73)] = 831,
  [SMALL_STATE(74)] = 844,
  [SMALL_STATE(75)] = 857,
  [SMALL_STATE(76)] = 870,
  [SMALL_STATE(77)] = 881,
  [SMALL_STATE(78)] = 892,
  [SMALL_STATE(79)] = 905,
  [SMALL_STATE(80)] = 916,
  [SMALL_STATE(81)] = 927,
  [SMALL_STATE(82)] = 940,
  [SMALL_STATE(83)] = 951,
  [SMALL_STATE(84)] = 962,
  [SMALL_STATE(85)] = 975,
  [SMALL_STATE(86)] = 988,
  [SMALL_STATE(87)] = 1001,
  [SMALL_STATE(88)] = 1014,
  [SMALL_STATE(89)] = 1027,
  [SMALL_STATE(90)] = 1040,
  [SMALL_STATE(91)] = 1053,
  [SMALL_STATE(92)] = 1064,
  [SMALL_STATE(93)] = 1077,
  [SMALL_STATE(94)] = 1090,
  [SMALL_STATE(95)] = 1103,
  [SMALL_STATE(96)] = 1116,
  [SMALL_STATE(97)] = 1129,
  [SMALL_STATE(98)] = 1142,
  [SMALL_STATE(99)] = 1155,
  [SMALL_STATE(100)] = 1168,
  [SMALL_STATE(101)] = 1181,
  [SMALL_STATE(102)] = 1194,
  [SMALL_STATE(103)] = 1207,
  [SMALL_STATE(104)] = 1220,
  [SMALL_STATE(105)] = 1233,
  [SMALL_STATE(106)] = 1246,
  [SMALL_STATE(107)] = 1259,
  [SMALL_STATE(108)] = 1267,
  [SMALL_STATE(109)] = 1277,
  [SMALL_STATE(110)] = 1285,
  [SMALL_STATE(111)] = 1293,
  [SMALL_STATE(112)] = 1301,
  [SMALL_STATE(113)] = 1311,
  [SMALL_STATE(114)] = 1321,
  [SMALL_STATE(115)] = 1331,
  [SMALL_STATE(116)] = 1339,
  [SMALL_STATE(117)] = 1349,
  [SMALL_STATE(118)] = 1357,
  [SMALL_STATE(119)] = 1365,
  [SMALL_STATE(120)] = 1373,
  [SMALL_STATE(121)] = 1381,
  [SMALL_STATE(122)] = 1389,
  [SMALL_STATE(123)] = 1397,
  [SMALL_STATE(124)] = 1405,
  [SMALL_STATE(125)] = 1415,
  [SMALL_STATE(126)] = 1423,
  [SMALL_STATE(127)] = 1431,
  [SMALL_STATE(128)] = 1439,
  [SMALL_STATE(129)] = 1447,
  [SMALL_STATE(130)] = 1455,
  [SMALL_STATE(131)] = 1463,
  [SMALL_STATE(132)] = 1473,
  [SMALL_STATE(133)] = 1480,
  [SMALL_STATE(134)] = 1487,
  [SMALL_STATE(135)] = 1494,
  [SMALL_STATE(136)] = 1501,
  [SMALL_STATE(137)] = 1508,
  [SMALL_STATE(138)] = 1515,
  [SMALL_STATE(139)] = 1522,
  [SMALL_STATE(140)] = 1529,
  [SMALL_STATE(141)] = 1536,
  [SMALL_STATE(142)] = 1543,
  [SMALL_STATE(143)] = 1550,
  [SMALL_STATE(144)] = 1557,
  [SMALL_STATE(145)] = 1564,
  [SMALL_STATE(146)] = 1571,
  [SMALL_STATE(147)] = 1578,
  [SMALL_STATE(148)] = 1585,
  [SMALL_STATE(149)] = 1592,
  [SMALL_STATE(150)] = 1599,
  [SMALL_STATE(151)] = 1606,
  [SMALL_STATE(152)] = 1613,
  [SMALL_STATE(153)] = 1620,
  [SMALL_STATE(154)] = 1627,
  [SMALL_STATE(155)] = 1634,
  [SMALL_STATE(156)] = 1641,
  [SMALL_STATE(157)] = 1648,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_value_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_value_repeat1, 2), SHIFT_REPEAT(26),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_repeat1, 2), SHIFT_REPEAT(27),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_value_repeat1, 2), SHIFT_REPEAT(41),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(52),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key, 1),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 6),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 6),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(25),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 5),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 5),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [428] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jon(void) {
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
