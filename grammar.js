const opt_seq = (...rules) => optional(seq(...rules))

module.exports = grammar({
    name: 'jon',

    extras: $ => [
        $.comment,
    ],

    conflicts: $ => [],

    inline: $ => [],

    rules: {
        source_file: $ => repeat($._object),

        _object: $ => repeat($.key_value),

        key_value: $ => seq(
            $._key,
            ':',
            $._value,
        ),

        _key: $ => choice(
            /^(?!:).*$/, // Any text without `:`
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
                token.immediate(prec(1, /[^\\"\n]+/)),
            ),
            choice('"', '\''),
        ),

        array: $ => seq(
            '[',
            repeat($._value),
            ']'
        ),

        object: $ => seq(
            '{',
            $._object,
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