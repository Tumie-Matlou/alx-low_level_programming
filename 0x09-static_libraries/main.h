#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes a character to the stdout
 * @c: the character to print
 * Returns: 1 (success)
 */

int _putchar(char c);


/**
 * reset_to_98 - updates the values it points to to 98
 * Description:  takes a pointer to an int as parameter
 * @n: the value to update
 */

void reset_to_98(int *n);


/**
 * swap_int - swaps two integers
 * @a: the value to swap
 * @b: the value to swap
 */

void swap_int(int *a, int*b);


/**
 * _strlen - returns the length of the string
 * @s: the string length
 * Returns: int
 */

int _strlen(char *s);


/**
 * _puts - prints a string to stdout
 * @str: the string to output
 */

void _puts(char *str);

/**
 * print_rev - prints a string in reverse
 * @s - string to be reversed
 */

void print_rev(char *s);

void rev_string(char *s);

void puts2(char *str);

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);

int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);

int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
#endif
