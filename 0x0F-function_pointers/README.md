# Function Pointers Directory

- This directory illustrates the concept of function pointers.
- Pointers usually point to data, but we can make pointers to functions.

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

      fp = func;
      (*fp) = 15;
      func(2);
      retunn (0);
 }
```

`Output 15<br>
       2`
