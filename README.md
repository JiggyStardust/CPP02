# CPP02 Notes

Bit shifting 
// (integer) value = 42  

_rawValue = value << _fractionalBits
Binary Representation of 42:			 00101010
Shift left by 8 place:			00101010 00000000 (this equals 42 * 256 = 10752)
_rawValue = 10752 (in decimal)

So basically if int needs to be converted into fixed point value, in 8 bit base you multiply it 
by 256 (bit shift << 8 times)

// toInt

return (_rawValue >> _fractionalBits);
int original = _rawValue >> _fractionalBits; // 10752 >> 8 = 42
* Left shift (<<) is equivalent to multiplying by 256.
* Right shift (>>) is equivalent to dividing by 256 (for integers).

So basically if fixed point value needs to be converted into an int, in 8 bit base you divide it by 256 (bit shift >> 8 times)


// (float) value = 26.5

_rawValue = roundf(value * (1 << _fractionalBits))
(1 << _fractionalBits) is the same as 1 << 8, which take the number 1 and shift it left by 8 places
Binary Representation of 1:              00000001
Shift left by 8 place:			00000001 00000000 (256 in decimal)
_rawValue = 6784 (in decimal, 26.5×256=6784.0)

// toFloat

toFloat() = _rawValue / (1 << _fractionalBits)
float original = _rawValue(f) / 256.0f, if the _rawValue is 6784, we will have:
6784 / 256 (1 << _fractionalBits) => 6784.0f / 256.0f = 26.5 (float)