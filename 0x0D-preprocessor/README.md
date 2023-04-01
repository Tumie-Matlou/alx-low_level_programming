# Preprocessor Directory

- this directory illustrates the preprocessor stage of compiling a c file

# Concepts

**Static and dynamic linking**

| Static Linking               | Dynamic Linking |
|:----------------------------:|:--------------------------:|
|copying all library modules used in the program into the final executable image|loading the external shared libraries into the program and then bind those shared libraries dynamically to the program|
|last step of compilation| during runtime|
|larger file size| smaller file size|
|no compatibility issues| compatibility issues|
 
**Preprocessor directives**
- directives beging with '#', they tell the program to do specific commands, e.g #define, #include, #ifndef ... etc
- Object-like Macros: a simple identifier which will be replaced by a code fragment.<br>
syntax example: *#define BUFFER_SIZE 1024*

- Function-like Macros: can take arguments, just like true functions.<br>
syntax example: *#define SUM (a + b)*







