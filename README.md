# JON

JON (Jacy Object Notation) is an alternative for JSON used by *Jacy* programming language.

Example:
```yaml
// JON Supports C-style comments
/*
 * Block comments too
 */

string: 'String is enclosed into quotes'
string2: "Either single or double"

multiline: """
Multiline strings are enclosed into
- '''
- or """
\"""

'Key can be a string': 'Value'

object: {
    description: 'Objects are enclosed into {}'
    also: 'Root of the whole file is an object by default'
}

array: [
    'Arrays are enclosed into []'
]

items: {
    separator: 'Items in objects and arrays are separated either with , or new-line'
    also: 'Comma is optional if new-line is present'
}

numbers: {
    integer: 34958
    integerHex: 0x123213
    integerBin: 0b101010
    integerOcto: 0o234221

    float: 0.12312321
    floatWithExponent: 0.123e-10
}

// Boolean values
yep: true
nope: false

// null is no-value constant
nothing: null
```

> Note: JON grammar for different IDEs are inside Jacy packages for IDEs.

## Specification

JON does not specify mostly anything except grammar, client (implementation) need to handle everything else, including numbers size limit, etc.

### Constants

Implementation is considered valid if `true`, `false` and `null` corresponds to right meanings which are:
- `true`/`false` - boolean values
- `null` - no-value (read further)

#### `null` value

`null` must not differ in implementations in the way of processing it, if `null` appears as value -- it must exists in structure. `null` is not "undefined", it is a "none" value.


### Numbers

JON does not require any limitation for numbers, grammatically valid number can be of any length.
Each implementation able to handle size by itself and should do it. 
