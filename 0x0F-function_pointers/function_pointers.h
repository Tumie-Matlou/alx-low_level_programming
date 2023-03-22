#ifndef _FUNCTIONPOINTERS_H_
#define _FUNCTIONPOINTERS_H_

/**
 * print_name - prints the name of a person
 * @name: the name of a person
 * @f: pointer to a function
*/

void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to iterate
 * @size: the number of elements
 * @action: a pointer to a function
 * 
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int));

#endif
