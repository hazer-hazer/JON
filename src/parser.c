#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 21
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
      if (lookahead == ']') ADVANCE(74);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
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
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 29},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 27},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 27},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 27},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 27},
  [79] = {.lex_state = 27},
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
  [90] = {.lex_state = 27},
  [91] = {.lex_state = 27},
  [92] = {.lex_state = 27},
  [93] = {.lex_state = 0},
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
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 27},
  [108] = {.lex_state = 27},
  [109] = {.lex_state = 28},
  [110] = {.lex_state = 28},
  [111] = {.lex_state = 28},
  [112] = {.lex_state = 28},
  [113] = {.lex_state = 28},
  [114] = {.lex_state = 28},
  [115] = {.lex_state = 28},
  [116] = {.lex_state = 28},
  [117] = {.lex_state = 28},
  [118] = {.lex_state = 28},
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
    [sym_document] = STATE(117),
    [sym_key_value] = STATE(49),
    [sym__key] = STATE(51),
    [sym_string] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_document_token1] = ACTIONS(7),
    [aux_sym__key_token1] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__value] = STATE(61),
    [sym_number] = STATE(61),
    [sym_int] = STATE(68),
    [sym_string] = STATE(61),
    [sym_array] = STATE(61),
    [sym_object] = STATE(61),
    [aux_sym_key_value_repeat1] = STATE(21),
    [aux_sym_document_token1] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_null] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [aux_sym_int_token1] = ACTIONS(19),
    [aux_sym_int_token2] = ACTIONS(19),
    [aux_sym_int_token3] = ACTIONS(19),
    [aux_sym_int_token4] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__value] = STATE(63),
    [sym_number] = STATE(63),
    [sym_int] = STATE(68),
    [sym_string] = STATE(63),
    [sym_array] = STATE(63),
    [sym_object] = STATE(63),
    [aux_sym_key_value_repeat1] = STATE(21),
    [aux_sym_document_token1] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_null] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [aux_sym_int_token1] = ACTIONS(19),
    [aux_sym_int_token2] = ACTIONS(19),
    [aux_sym_int_token3] = ACTIONS(19),
    [aux_sym_int_token4] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__value] = STATE(65),
    [sym_number] = STATE(65),
    [sym_int] = STATE(68),
    [sym_string] = STATE(65),
    [sym_array] = STATE(65),
    [sym_object] = STATE(65),
    [aux_sym_key_value_repeat1] = STATE(2),
    [aux_sym_document_token1] = ACTIONS(37),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_null] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [aux_sym_int_token1] = ACTIONS(19),
    [aux_sym_int_token2] = ACTIONS(19),
    [aux_sym_int_token3] = ACTIONS(19),
    [aux_sym_int_token4] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__value] = STATE(45),
    [sym_number] = STATE(45),
    [sym_int] = STATE(68),
    [sym_string] = STATE(45),
    [sym_array] = STATE(45),
    [sym_object] = STATE(45),
    [aux_sym_key_value_repeat1] = STATE(3),
    [aux_sym_document_token1] = ACTIONS(45),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_null] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [aux_sym_int_token1] = ACTIONS(19),
    [aux_sym_int_token2] = ACTIONS(19),
    [aux_sym_int_token3] = ACTIONS(19),
    [aux_sym_int_token4] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__value] = STATE(94),
    [sym_number] = STATE(94),
    [sym_int] = STATE(95),
    [sym_string] = STATE(94),
    [sym_array] = STATE(94),
    [sym_object] = STATE(94),
    [aux_sym_key_value_repeat1] = STATE(7),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [aux_sym_int_token1] = ACTIONS(57),
    [aux_sym_int_token2] = ACTIONS(57),
    [aux_sym_int_token3] = ACTIONS(57),
    [aux_sym_int_token4] = ACTIONS(57),
    [sym_float] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__value] = STATE(108),
    [sym_number] = STATE(108),
    [sym_int] = STATE(95),
    [sym_string] = STATE(108),
    [sym_array] = STATE(108),
    [sym_object] = STATE(108),
    [aux_sym_key_value_repeat1] = STATE(22),
    [anon_sym_LF] = ACTIONS(67),
    [anon_sym_null] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [aux_sym_int_token1] = ACTIONS(57),
    [aux_sym_int_token2] = ACTIONS(57),
    [aux_sym_int_token3] = ACTIONS(57),
    [aux_sym_int_token4] = ACTIONS(57),
    [sym_float] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__value] = STATE(86),
    [sym_number] = STATE(86),
    [sym_int] = STATE(68),
    [sym_string] = STATE(86),
    [sym_array] = STATE(86),
    [sym_object] = STATE(86),
    [aux_sym_key_value_repeat1] = STATE(22),
    [anon_sym_LF] = ACTIONS(67),
    [anon_sym_null] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(71),
    [aux_sym_int_token1] = ACTIONS(19),
    [aux_sym_int_token2] = ACTIONS(19),
    [aux_sym_int_token3] = ACTIONS(19),
    [aux_sym_int_token4] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__value] = STATE(86),
    [sym_number] = STATE(86),
    [sym_int] = STATE(68),
    [sym_string] = STATE(86),
    [sym_array] = STATE(86),
    [sym_object] = STATE(86),
    [aux_sym_key_value_repeat1] = STATE(11),
    [anon_sym_LF] = ACTIONS(73),
    [anon_sym_null] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(71),
    [aux_sym_int_token1] = ACTIONS(19),
    [aux_sym_int_token2] = ACTIONS(19),
    [aux_sym_int_token3] = ACTIONS(19),
    [aux_sym_int_token4] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__value] = STATE(90),
    [sym_number] = STATE(90),
    [sym_int] = STATE(95),
    [sym_string] = STATE(90),
    [sym_array] = STATE(90),
    [sym_object] = STATE(90),
    [aux_sym_key_value_repeat1] = STATE(22),
    [anon_sym_LF] = ACTIONS(67),
    [anon_sym_null] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(75),
    [anon_sym_false] = ACTIONS(75),
    [aux_sym_int_token1] = ACTIONS(57),
    [aux_sym_int_token2] = ACTIONS(57),
    [aux_sym_int_token3] = ACTIONS(57),
    [aux_sym_int_token4] = ACTIONS(57),
    [sym_float] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__value] = STATE(87),
    [sym_number] = STATE(87),
    [sym_int] = STATE(68),
    [sym_string] = STATE(87),
    [sym_array] = STATE(87),
    [sym_object] = STATE(87),
    [aux_sym_key_value_repeat1] = STATE(22),
    [anon_sym_LF] = ACTIONS(67),
    [anon_sym_null] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_false] = ACTIONS(77),
    [aux_sym_int_token1] = ACTIONS(19),
    [aux_sym_int_token2] = ACTIONS(19),
    [aux_sym_int_token3] = ACTIONS(19),
    [aux_sym_int_token4] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__value] = STATE(92),
    [sym_number] = STATE(92),
    [sym_int] = STATE(68),
    [sym_string] = STATE(92),
    [sym_array] = STATE(92),
    [sym_object] = STATE(92),
    [aux_sym_key_value_repeat1] = STATE(8),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_null] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [aux_sym_int_token1] = ACTIONS(19),
    [aux_sym_int_token2] = ACTIONS(19),
    [aux_sym_int_token3] = ACTIONS(19),
    [aux_sym_int_token4] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__value] = STATE(108),
    [sym_number] = STATE(108),
    [sym_int] = STATE(95),
    [sym_string] = STATE(108),
    [sym_array] = STATE(108),
    [sym_object] = STATE(108),
    [aux_sym_key_value_repeat1] = STATE(10),
    [anon_sym_LF] = ACTIONS(83),
    [anon_sym_null] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [aux_sym_int_token1] = ACTIONS(57),
    [aux_sym_int_token2] = ACTIONS(57),
    [aux_sym_int_token3] = ACTIONS(57),
    [aux_sym_int_token4] = ACTIONS(57),
    [sym_float] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__value] = STATE(99),
    [sym_number] = STATE(99),
    [sym_int] = STATE(68),
    [sym_string] = STATE(99),
    [sym_array] = STATE(99),
    [sym_object] = STATE(99),
    [anon_sym_null] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(85),
    [aux_sym_int_token1] = ACTIONS(19),
    [aux_sym_int_token2] = ACTIONS(87),
    [aux_sym_int_token3] = ACTIONS(87),
    [aux_sym_int_token4] = ACTIONS(87),
    [sym_float] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(99),
  },
  [15] = {
    [sym__value] = STATE(99),
    [sym_number] = STATE(99),
    [sym_int] = STATE(68),
    [sym_string] = STATE(99),
    [sym_array] = STATE(99),
    [sym_object] = STATE(99),
    [anon_sym_null] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(85),
    [aux_sym_int_token1] = ACTIONS(19),
    [aux_sym_int_token2] = ACTIONS(87),
    [aux_sym_int_token3] = ACTIONS(87),
    [aux_sym_int_token4] = ACTIONS(87),
    [sym_float] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(99),
  },
  [16] = {
    [sym__value] = STATE(99),
    [sym_number] = STATE(99),
    [sym_int] = STATE(68),
    [sym_string] = STATE(99),
    [sym_array] = STATE(99),
    [sym_object] = STATE(99),
    [anon_sym_null] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(85),
    [aux_sym_int_token1] = ACTIONS(19),
    [aux_sym_int_token2] = ACTIONS(87),
    [aux_sym_int_token3] = ACTIONS(87),
    [aux_sym_int_token4] = ACTIONS(87),
    [sym_float] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(99),
  },
  [17] = {
    [sym__value] = STATE(99),
    [sym_number] = STATE(99),
    [sym_int] = STATE(68),
    [sym_string] = STATE(99),
    [sym_array] = STATE(99),
    [sym_object] = STATE(99),
    [anon_sym_null] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(85),
    [aux_sym_int_token1] = ACTIONS(19),
    [aux_sym_int_token2] = ACTIONS(87),
    [aux_sym_int_token3] = ACTIONS(87),
    [aux_sym_int_token4] = ACTIONS(87),
    [sym_float] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(99),
  },
  [18] = {
    [sym__value] = STATE(99),
    [sym_number] = STATE(99),
    [sym_int] = STATE(68),
    [sym_string] = STATE(99),
    [sym_array] = STATE(99),
    [sym_object] = STATE(99),
    [anon_sym_null] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(85),
    [aux_sym_int_token1] = ACTIONS(19),
    [aux_sym_int_token2] = ACTIONS(87),
    [aux_sym_int_token3] = ACTIONS(87),
    [aux_sym_int_token4] = ACTIONS(87),
    [sym_float] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(99),
  },
  [19] = {
    [sym__value] = STATE(99),
    [sym_number] = STATE(99),
    [sym_int] = STATE(68),
    [sym_string] = STATE(99),
    [sym_array] = STATE(99),
    [sym_object] = STATE(99),
    [anon_sym_null] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(85),
    [aux_sym_int_token1] = ACTIONS(19),
    [aux_sym_int_token2] = ACTIONS(87),
    [aux_sym_int_token3] = ACTIONS(87),
    [aux_sym_int_token4] = ACTIONS(87),
    [sym_float] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(99),
  },
  [20] = {
    [sym__value] = STATE(99),
    [sym_number] = STATE(99),
    [sym_int] = STATE(68),
    [sym_string] = STATE(99),
    [sym_array] = STATE(99),
    [sym_object] = STATE(99),
    [anon_sym_null] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(85),
    [aux_sym_int_token1] = ACTIONS(19),
    [aux_sym_int_token2] = ACTIONS(87),
    [aux_sym_int_token3] = ACTIONS(87),
    [aux_sym_int_token4] = ACTIONS(87),
    [sym_float] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(99),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym_key_value_repeat1,
    ACTIONS(111), 14,
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
    ACTIONS(116), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_key_value_repeat1,
    ACTIONS(111), 13,
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
    ACTIONS(119), 1,
      aux_sym_document_token1,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(123), 1,
      aux_sym__key_token1,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_key_value_repeat1,
    STATE(50), 1,
      sym_key_value,
    ACTIONS(11), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(47), 2,
      sym__key,
      sym_string,
  [81] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym__key_token1,
    ACTIONS(127), 1,
      aux_sym_document_token1,
    ACTIONS(129), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_key_value_repeat1,
    STATE(70), 1,
      sym_key_value,
    ACTIONS(11), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(47), 2,
      sym__key,
      sym_string,
  [111] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym__key_token1,
    ACTIONS(133), 1,
      aux_sym_document_token1,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_key_value_repeat1,
    STATE(64), 1,
      sym_key_value,
    ACTIONS(11), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(47), 2,
      sym__key,
      sym_string,
  [141] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(123), 1,
      aux_sym__key_token1,
    ACTIONS(139), 1,
      aux_sym_document_token1,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_key_value_repeat1,
    STATE(59), 1,
      sym_key_value,
    ACTIONS(11), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(47), 2,
      sym__key,
      sym_string,
  [171] = 6,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym__key_token1,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_key_value,
    ACTIONS(145), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(47), 2,
      sym__key,
      sym_string,
  [192] = 6,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym__key_token1,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_key_value,
    ACTIONS(145), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(47), 2,
      sym__key,
      sym_string,
  [213] = 6,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      aux_sym__key_token1,
    STATE(85), 1,
      sym_key_value,
    ACTIONS(145), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(51), 2,
      sym__key,
      sym_string,
  [234] = 6,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym__key_token1,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_key_value,
    ACTIONS(145), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(47), 2,
      sym__key,
      sym_string,
  [255] = 6,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym__key_token1,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_key_value,
    ACTIONS(145), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(47), 2,
      sym__key,
      sym_string,
  [276] = 6,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym__key_token1,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_key_value,
    ACTIONS(145), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(47), 2,
      sym__key,
      sym_string,
  [297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym_key_value_repeat1,
    ACTIONS(111), 5,
      aux_sym_document_token1,
      aux_sym__key_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [314] = 6,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym__key_token1,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_key_value,
    ACTIONS(145), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(47), 2,
      sym__key,
      sym_string,
  [335] = 6,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym__key_token1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
      sym_key_value,
    ACTIONS(145), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(51), 2,
      sym__key,
      sym_string,
  [356] = 5,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym__key_token1,
    STATE(85), 1,
      sym_key_value,
    ACTIONS(145), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(51), 2,
      sym__key,
      sym_string,
  [374] = 5,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym__key_token1,
    STATE(97), 1,
      sym_key_value,
    ACTIONS(145), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(47), 2,
      sym__key,
      sym_string,
  [392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      aux_sym_string_token1,
    STATE(40), 1,
      aux_sym_string_repeat1,
    ACTIONS(168), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      aux_sym_string_token1,
    STATE(39), 1,
      aux_sym_string_repeat1,
    ACTIONS(172), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_string_token1,
    STATE(39), 1,
      aux_sym_string_repeat1,
    ACTIONS(177), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_string_token1,
    STATE(39), 1,
      aux_sym_string_repeat1,
    ACTIONS(181), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym_string_token1,
    STATE(44), 1,
      aux_sym_string_repeat1,
    ACTIONS(183), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_string_token1,
    STATE(41), 1,
      aux_sym_string_repeat1,
    ACTIONS(187), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_string_token1,
    STATE(39), 1,
      aux_sym_string_repeat1,
    ACTIONS(191), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(193), 1,
      aux_sym_document_token1,
    STATE(71), 1,
      aux_sym_array_repeat1,
  [503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      aux_sym_document_token1,
    STATE(46), 1,
      aux_sym_document_repeat1,
  [516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LF,
    ACTIONS(202), 1,
      anon_sym_COLON,
    STATE(69), 1,
      aux_sym_key_value_repeat1,
  [529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym_document_token1,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_document_repeat1,
  [542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 1,
      aux_sym_document_token1,
    STATE(53), 1,
      aux_sym_document_repeat1,
  [555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym_document_token1,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_document_repeat1,
  [568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(214), 1,
      anon_sym_COLON,
    STATE(58), 1,
      aux_sym_key_value_repeat1,
  [581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_document_token1,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_document_repeat1,
  [594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(220), 1,
      aux_sym_document_token1,
    STATE(46), 1,
      aux_sym_document_repeat1,
  [607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      aux_sym_document_token1,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_array_repeat1,
  [620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_document_token1,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_array_repeat1,
  [633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym_document_token1,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_array_repeat1,
  [646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym_document_token1,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_document_repeat1,
  [659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_LF,
    ACTIONS(239), 1,
      anon_sym_COLON,
    STATE(22), 1,
      aux_sym_key_value_repeat1,
  [672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym_document_token1,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_document_repeat1,
  [685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym_document_token1,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_document_repeat1,
  [698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_document_token1,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_array_repeat1,
  [711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_document_token1,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_array_repeat1,
  [724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym_document_token1,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_array_repeat1,
  [737] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 1,
      aux_sym_document_token1,
    STATE(60), 1,
      aux_sym_document_repeat1,
  [750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      aux_sym_document_token1,
    STATE(62), 1,
      aux_sym_array_repeat1,
  [763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_document_token1,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_document_repeat1,
  [776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym_document_token1,
    ACTIONS(264), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_document_token1,
    ACTIONS(268), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_LF,
    ACTIONS(270), 1,
      anon_sym_COLON,
    STATE(22), 1,
      aux_sym_key_value_repeat1,
  [811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 1,
      aux_sym_document_token1,
    STATE(48), 1,
      aux_sym_document_repeat1,
  [824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym_document_token1,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_array_repeat1,
  [837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_document_token1,
    ACTIONS(276), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_document_token1,
    ACTIONS(280), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_document_token1,
    ACTIONS(284), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_document_token1,
    ACTIONS(288), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_document_token1,
    ACTIONS(292), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym_document_token1,
    ACTIONS(296), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym_document_token1,
    ACTIONS(300), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      aux_sym_document_token1,
    ACTIONS(304), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym_document_token1,
    ACTIONS(308), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      aux_sym_document_token1,
    ACTIONS(312), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      aux_sym_document_token1,
    ACTIONS(316), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_document_token1,
    ACTIONS(320), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      aux_sym_document_token1,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
  [995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym_document_token1,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
  [1005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym_document_token1,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
  [1047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(288), 1,
      anon_sym_COLON,
  [1057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      aux_sym_document_token1,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
  [1091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    ACTIONS(334), 1,
      aux_sym_document_token1,
  [1109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(276), 1,
      anon_sym_COLON,
  [1167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [1183] = 2,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
  [1190] = 2,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
  [1197] = 2,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
  [1204] = 2,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
  [1211] = 2,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
  [1218] = 2,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
  [1225] = 2,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
  [1232] = 2,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
  [1239] = 2,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
  [1246] = 2,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 26,
  [SMALL_STATE(23)] = 51,
  [SMALL_STATE(24)] = 81,
  [SMALL_STATE(25)] = 111,
  [SMALL_STATE(26)] = 141,
  [SMALL_STATE(27)] = 171,
  [SMALL_STATE(28)] = 192,
  [SMALL_STATE(29)] = 213,
  [SMALL_STATE(30)] = 234,
  [SMALL_STATE(31)] = 255,
  [SMALL_STATE(32)] = 276,
  [SMALL_STATE(33)] = 297,
  [SMALL_STATE(34)] = 314,
  [SMALL_STATE(35)] = 335,
  [SMALL_STATE(36)] = 356,
  [SMALL_STATE(37)] = 374,
  [SMALL_STATE(38)] = 392,
  [SMALL_STATE(39)] = 406,
  [SMALL_STATE(40)] = 420,
  [SMALL_STATE(41)] = 434,
  [SMALL_STATE(42)] = 448,
  [SMALL_STATE(43)] = 462,
  [SMALL_STATE(44)] = 476,
  [SMALL_STATE(45)] = 490,
  [SMALL_STATE(46)] = 503,
  [SMALL_STATE(47)] = 516,
  [SMALL_STATE(48)] = 529,
  [SMALL_STATE(49)] = 542,
  [SMALL_STATE(50)] = 555,
  [SMALL_STATE(51)] = 568,
  [SMALL_STATE(52)] = 581,
  [SMALL_STATE(53)] = 594,
  [SMALL_STATE(54)] = 607,
  [SMALL_STATE(55)] = 620,
  [SMALL_STATE(56)] = 633,
  [SMALL_STATE(57)] = 646,
  [SMALL_STATE(58)] = 659,
  [SMALL_STATE(59)] = 672,
  [SMALL_STATE(60)] = 685,
  [SMALL_STATE(61)] = 698,
  [SMALL_STATE(62)] = 711,
  [SMALL_STATE(63)] = 724,
  [SMALL_STATE(64)] = 737,
  [SMALL_STATE(65)] = 750,
  [SMALL_STATE(66)] = 763,
  [SMALL_STATE(67)] = 776,
  [SMALL_STATE(68)] = 787,
  [SMALL_STATE(69)] = 798,
  [SMALL_STATE(70)] = 811,
  [SMALL_STATE(71)] = 824,
  [SMALL_STATE(72)] = 837,
  [SMALL_STATE(73)] = 848,
  [SMALL_STATE(74)] = 859,
  [SMALL_STATE(75)] = 870,
  [SMALL_STATE(76)] = 881,
  [SMALL_STATE(77)] = 892,
  [SMALL_STATE(78)] = 903,
  [SMALL_STATE(79)] = 914,
  [SMALL_STATE(80)] = 925,
  [SMALL_STATE(81)] = 936,
  [SMALL_STATE(82)] = 947,
  [SMALL_STATE(83)] = 958,
  [SMALL_STATE(84)] = 969,
  [SMALL_STATE(85)] = 977,
  [SMALL_STATE(86)] = 985,
  [SMALL_STATE(87)] = 995,
  [SMALL_STATE(88)] = 1005,
  [SMALL_STATE(89)] = 1013,
  [SMALL_STATE(90)] = 1021,
  [SMALL_STATE(91)] = 1029,
  [SMALL_STATE(92)] = 1037,
  [SMALL_STATE(93)] = 1047,
  [SMALL_STATE(94)] = 1057,
  [SMALL_STATE(95)] = 1065,
  [SMALL_STATE(96)] = 1073,
  [SMALL_STATE(97)] = 1081,
  [SMALL_STATE(98)] = 1091,
  [SMALL_STATE(99)] = 1099,
  [SMALL_STATE(100)] = 1109,
  [SMALL_STATE(101)] = 1117,
  [SMALL_STATE(102)] = 1125,
  [SMALL_STATE(103)] = 1133,
  [SMALL_STATE(104)] = 1141,
  [SMALL_STATE(105)] = 1149,
  [SMALL_STATE(106)] = 1157,
  [SMALL_STATE(107)] = 1167,
  [SMALL_STATE(108)] = 1175,
  [SMALL_STATE(109)] = 1183,
  [SMALL_STATE(110)] = 1190,
  [SMALL_STATE(111)] = 1197,
  [SMALL_STATE(112)] = 1204,
  [SMALL_STATE(113)] = 1211,
  [SMALL_STATE(114)] = 1218,
  [SMALL_STATE(115)] = 1225,
  [SMALL_STATE(116)] = 1232,
  [SMALL_STATE(117)] = 1239,
  [SMALL_STATE(118)] = 1246,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_value_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_value_repeat1, 2), SHIFT_REPEAT(21),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_repeat1, 2), SHIFT_REPEAT(22),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_value_repeat1, 2), SHIFT_REPEAT(33),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(39),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(20),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(37),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 6),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 6),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 5),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 4),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 5),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [344] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
