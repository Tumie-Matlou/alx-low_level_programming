# Dynamic Memory Allocation Directory.

- This directory consists of an illustration of dynamic memory allocation.
- Dynamic memory allocation occurs in the Heap category of memory, where the memory size is variable.
- The programmer has to allocate a specific amount of memory to a function, then take priority to deallocate it after the function is done.
- Allocation functions:
°Malloc - *void \*ptr = (void \*) malloc(n \* sizeof(data type));*
°Calloc - *void \*ptr = (void \*) calloc(size, element size);*
°Realloc - *void \*new_ptr = (void \*) realloc(old_ptr, n \* sizeof(data type));*
- Deallocation function:
°Free - *free(void \*ptr)*

# Tasks:

0. <b> Float like a butterfly, sting like a bee</b> - a function that creates an array of chars, and initializes it with a specific char.
1. <b> The woman who has no imagination has no wings</b> - a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
2. <b> He who is not courageous enough to take risks will accomplish nothing in life</b> - a function that concatenates two strings.
