#ifndef _FUNCTIONPOINTERS_H_
#define _FUNCTIONPOINTERS_H_

/**
 * print_name - prints the name of a person
 * @name: the name of a person
 * @f: pointer to a function
*/

void print_name(char *name, void (*f)(char *));

#endif
