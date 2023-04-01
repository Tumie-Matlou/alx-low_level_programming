# Preprocessor Directory

- This directory illustrates the preprocessor stage of compiling a c file
- The preprocessor modifies a source code file before handing it over to the compiler.
- It includes header files before the program.
- It defines macros.
- It expands the directives of a c file.

# Concepts

**Static and dynamic linking**

| Static Linking               | Dynamic Linking |
|:----------------------------:|:--------------------------:|
|copying all library modules used in the program into the final executable image|loading the external shared libraries into the program and then bind those shared libraries dynamically to the program|
|last step of compilation| during runtime|
|larger file size| smaller file size|
|no compatibility issues| compatibility issues|
 
**Preprocessor directives**

- directives begin with '#', they tell the program to do specific commands, e.g #define(defining a macro), #include(header files), #ifndef(making header files) ... etc
- Object-like Macros: a simple identifier which will be replaced by a code fragment.<br>
syntax example: *#define BUFFER_SIZE 1024*

- Function-like Macros: can take arguments, just like true functions.<br>
syntax example: *#define SUM (a + b)*

# Tasks:

0. **Object-like Macro** - a header file that defines a macro named SIZE as an abbreviation for the token 1024.
1. **Pi** -  a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.
2. **File name** - a program that prints the name of the file it was compiled from, followed by a new line.
3. **Function-like macro** - a function-like macro ABS(x) that computes the absolute value of a number x.
4. **SUM** - a function-like macro SUM(x, y) that computes the sum of the numbers x and y.








