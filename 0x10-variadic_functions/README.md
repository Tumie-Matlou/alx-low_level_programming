# Variadic Functions Directory

- This directory illustrates the concept of variadic functions
- Variadic functions take multiple arguments of unknown number and varying datatypes.
- When using variadic functions, we first have to include the header file "stdarg.h" for the program to recognise them.
_syntax:_

```c
return_type func_name(par_1, ...);
```

- Variadic functions use the ellipses( ...) to represent the many arguments we have no definite number of.
- They also have at least one known parameter hence the code below would be incorrect.

```c
int func(...);
```

**stdarg.h types**<br>

- `va_list` - type for iterating arguments

```c
va_list va_list_name;
```

**stdarg.h macros**<br>

- `va_start` - start iterating arguments with a va_list

```C
va_start(va_list_name, first_arg_of_va_list);
```

- `va_arg` - retrieve an argument

```c
va_arg(va_list_name, datatype_of_arg);
```

- `va_end` - free a va_list

```c
va_end(va_list_name);
```

- `va_copy`	- copy contents of one va_list to another	

```c
va_copy(copy_into, copied_from);
```
# Tasks

0. **Beauty is variable, ugliness is constant** -  a function that returns the sum of all its parameters.
1. **To be is to be the value of a variable** -  a function that prints numbers, followed by a new line.
2. **One woman's constant is another woman's variable** - a function that prints strings, followed by a new line.
3. **To be is a to be the value of a variable** -  a function that prints anything.









































