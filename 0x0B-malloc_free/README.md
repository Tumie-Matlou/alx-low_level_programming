# Dynamic Memory Allocation Directory.

- This directory consists of an illustration of dynamic memory allocation.
- Dynamic memory allocation occurs in the Heap category of memory, where the memory size is variable.
- The programmer has to allocate a specific amount of memory to a function, then take priority to deallocate it after the function is done.
- Allocation functions: <br>
°Malloc - *void \*ptr = (void \*) malloc(n \* sizeof(data type));* <br>
°Calloc - *void \*ptr = (void \*) calloc(size, element size);* <br>
°Realloc - *void \*new_ptr = (void \*) realloc(old_ptr, n \* sizeof(data type));* <br>
- Deallocation function: <br>
°Free - *free(void \*ptr);*

# Tasks:

0. <b> Float like a butterfly, sting like a bee</b> - a function that creates an array of chars, and initializes it with a specific char.
1. <b> The woman who has no imagination has no wings</b> - a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
2. <b> He who is not courageous enough to take risks will accomplish nothing in life</b> - a function that concatenates two strings.
3. <b> If you even dream of beating me you'd better wake up and apologize</b> - a function that returns a pointer to a 2 dimensional array of integers.
4. <b> It's not bragging if you can back it up</b> - a function that frees a 2 dimensional grid previously created by your alloc_grid function.
