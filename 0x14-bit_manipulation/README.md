# Bit Manipulation Directory

- This directory illustrates the concept of bitwise operations
- Computers use bits to represent data, a bit can be 0 or 1. 

## Bitwise Operators
- There are six fundamental bitwise operators:
    
   |A | B |A\|B|A&B|A^B| ~A|
   |:---:|:---:|:---:|:---:|:---:|:---:|
   |0|0|0|0|0|1|
   |0|1|1|0|1|1|
   |1|0|1|0|1|0|
   |1|1|1|1|0|0|
   
### `&` the AND operator
- It is a binary operator (takes 2 operands).
- It compares the operands bit by bit against each other.
- Result is 1 when both bits are 1.

```c
7    0111
4   &0100
  --------
4    0100
  --------
  
 7 & 4 = 4
  ```
### `|`the OR operator
- It is a binary operator as well, taking two operands at a time.
- It compares the operands bit by bit against each other.
- Result is 1 when at least one of the two bits is 1.

```c
7    0111
4   |0100
  --------
7    0111
  --------
 
 7 | 4 = 7
  ```
  
### `~` the NOT operator
- It is a unary operator, taking a single operand at a time.
- It sets 1s to 0s and 0s to 1s, a complement operator.

```c
7 = 0111
~7 = 1000 => 8
4 = 0100
~4 = 1011 => 11 or 0x0B
  ```
  
### `<<` RIGHT SHIFT operator
- It is a binary operator.
- It shifts the bits of the first operand by number of bits specified by the second operand.
- It fills 0 bits from the right

```c
7 = 0111
7 << 2 = 1100 => 12 or 0x0C/*shifted two bits off the left end, and added two 0 bits on the right end*/
4 = 0100
4 << 1 = 1000 => 8 /*shifted one bit off the left end, and added one 0 bit on the right end*/
  ```
### `>>`LEFT SHIFT operator
- It is a binary operator. 
- It shifts the bits of the first operand by number of bits specified by the second operand.
- It fills 0 bits from the left

```c
7 = 0111
7 >> 2 = 0001 = 1 /*shifted two bits off the right end, and added two 0 bits on the left end*/
4 = 0100
4 >> 1 = 0010 = 2 /*shifted one bit off the right end, and added one 0 bit on the left end*/
  ```
### `^`the XOR (exclusive OR) operator
- A bitnary operator that compares the operands bit by bit.
- The result is 1 if the two bits are different
- The result is 0 if the two nits are the same

```c
7   0111
4  ^0100
  -------
3   0011
  -------
 7 ^ 4 = 3
  ```
## Tasks

0. **00** - a function that converts a binary number to an unsigned int.
1. **01** - a function that prints the binary representation of a number.
2. **10**- a function that returns the value of a bit at a given index.
3. **11** - a function that sets the value of a bit to 1 at a given index.
4. **100** -  a function that sets the value of a bit to 0 at a given index.
5. **101** -  a function that returns the number of bits you would need to flip to get
from one number to another.


## Sources

- https://www.youtube.com/watch?v=jlQmeyce65Q















