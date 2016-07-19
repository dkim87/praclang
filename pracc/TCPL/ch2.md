# Chapter 2 - Types, Operators and Expressions

### Q. What are the basic data objects manipulated in a program?

Variables and constants

### Q. What are the differences between Operators ,types and Expressions?

Operators specify what is to be done to variables, while expressions combine variables and constants to produce new values. The type of an object determines the set of values it can have and what operations can be performed on it.

### Q. How do we make a variable unchanged?

Declared const

### Q. types 

Signed, unsigned, long, const

## 2.1 Variable Names

### Q. What are the conventions for variable naming?

Names are made up of letters and digits; the first character must be a letter. The underscore _ counts as a letter; it is sometimes useful for improving the readability of long variable names. Don't bein variable names with underscore, however, since library routines often use such names. Upper and lower case letters are distinct, so x and X are two different nasme. Triditional C practice is to use lower case for variable names, and all upper case for symbolic constants.

**At least the first 31 characters of an internal name are significant. For function names and external variables, the number may be less than 31, because external names may be used by assemblers and loaders over which the language has no control. For external names, the standard guarantees uniqueness only for 6 characters and single case. Keywords like if, else, int, float, etc, are reserved: you can't use them as variable names. They must be in lower case.**

## 2.2 Data Types and Sizes

### Q. What is single-precision and double-precision?

### Q. What are qualifiers? e.g.?

A. short int sh;
long int counter;
(just, specially for int, int can be omitted.)

### Q. What is the length of short and long, in normal cases?

Short is often 16 bits long, int either 16 or 32 bits. Each compiler is free to choose appropriate sizes for its own hardware, subject only to the restriction that shorts and ints are at least 16 bits, longs are at least 32 bits, and short is no longer than in, which is no longer than long.

### Q. Explain the qualifier signed and unsigned, and to which types it can be applied. 

'signed' and 'unsigned' may be applied to char or any integer. Unsigned numbers are always positive or zero, and obey the laws of arithmetic modulo 2^n, where n is the number of bits in the type. 

## 2.3 Constants

### Q. Declare a long constant.

long a = 123456789L;
long b = 1234567l;

### Q. Declare an unsigned long.

unsigned long c = 12345ul;

### Q. Declare a double and a float.

float d = 12.345f;
float e = 1.234e-2f;
double f = 123.456;

*by default, unless suffixed, their type is double.*

long double = 1.2353l;

### Q. Declare 31 as oxtal and hexadecimal.

int thirtyone = 037; //octal
int thirty_one = 0x1f // hexadecimal
int ulthirty_one = 0xful //value of 15

### Q. What is the function of quotes?

They serve as a deliminator.

### Q. Discuss the difference between 'x' and "x".

The latter is an array of characters that contains one character (the letter x) and a '\0'. 

### Q. What is enumeration constant? 

It is a list of constant integer values.

** review required **

## 2.4 Declarations

## 2.5 Arithmetic Operators

## 2.6 Relational and Logical Operators

## 2.7 Type Conversions

Are the expressions that might lose information, like assigning a longer integer type to a shorter or a floating point type to an integer may draw a warning, but they are not illegal.

### Q. Write an atoi function.
