# Function Pointers Directory

- This directory illustrates the concept of function pointers.
- Pointers usually point to data, but we can make pointers to functions.
*syntax:*
      ```
      func_return_type func_pointer(func_arg_type);
      ```

*Example:* 

```C
/*defining pointer to function*/
void func(int);

void func(int arg)
{
      printf("%d\n", arg);
}

/*accesing pointer*/
int main(void)
{
      void (*fp)(int);/*declating the pointer to function*/

      fp = func; /*or you can use fp = &func*/
      (*fp) = 15;
      func(2);
      return (0);
 }
```

`Output 15 2`
- The address of a function would be the entry point or the first instruction of the program.
- A function's name can work as an address to so you do not need to use ampersand(&).
- we can use function pointers to decrease the number of code lines in a single function, or tWhat's my nameo avoid redundancy in code.

# Tasks

0. **What's my name** -  a function that prints a name.
1. **If you spend too much time thinking about a thing, you'll never get it done** - a function that executes a function given as a parameter on each element of an array.
2. **To hell with circumstances; I create opportunities** - a function that searches for an integer.
3. **A goal is not always meant to be reached, it often serves simply as something to aim at** - a program that performs simple operations.














