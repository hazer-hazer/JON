const opt_seq = (...rules) => optional(seq(...rules))
const delim1 = (del, rule) => seq(rule, repeat(seq(del, rule)))
const delim = (del, rule) => optional(delim1(del, rule))
const SEQ_SEP = /\n+|,/
const optNls = repeat('\n')
const delSeq = rule => seq(
    delim(SEQ_SEP, rule),
    optional(SEQ_SEP),
)

module.exports = grammar({
    name: 'jon',

    extras: $ => [
        $.comment,
        /\s/,
    ],

    conflicts: $ => [],

    inline: $ => [],

    rules: {
        document: $ => choice(
            delSeq($.key_value),
            $._value,
        ),

        key_value: $ => seq(
            $._key,
            optNls,
            ':',
            optNls,
            $._value,
        ),

        _key: $ => choice(
            /[a-zA-Z0-9_$]+/, // Any text without `:`
            $.string,
        ),

        _value: $ => choice(
            'null',
            'true',
            'false',
            $.number,
            $.string,
            $.array,
            $.object,
        ),

        number: $ => choice(
            $.int,
            $.float,
        ),

        int: $ => choice(
            /[0-9][0-9+]*/, // Raw dec
            /0x[0-9a-fA-F_]+/, // Hex
            /0b[01_]+/, // Bin
            /0o[0-7_]+/, // Octo
            // TODO: Exponential notation
        ),

        float: $ => token(seq(
            /[0-9][0-9_]*\.[0-9][0-9_]*/,
            opt_seq(choice('e', 'E'), optional(choice('+', '-')), /[0-9_]*[0-9][0-9_]*/),
        )),

        string: $ => seq(
            choice('"', '\''),
            repeat(
                token.immediate(prec(1, /[^\\\n'"]+/)),
            ),
            choice('"', '\''),
        ),

        array: $ => seq(
            '[',
            optNls,
            delSeq($._value),
            ']',
        ),

        object: $ => seq(
            '{',
            optNls,
            delSeq($.key_value),
            '}',
        ),

        comment: $ => token(choice(
            seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/',
            ),
        )),
    },
})