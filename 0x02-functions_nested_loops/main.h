#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 *print_alphabet - prints the alphabet in lowercase
 */

void print_alphabet(void);

/** 
 * print_alphabet_x10 - prints the alphabet 10 times
 */

void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase character
 *@c: the character to check
 *
 * Return: int
 */

int _islower(int c);

/**
 * _isalpha - checks if character is alphabetic (both lower and uper cases)
 * @c: the character to check
 *
 * Return: int
 */

int _isalpha(int c);

/**
 * print_sign - prints the sign of a value
 * @n: the number to check
 *
 * Return: 0 (success)
 */

int print_sign(int n);

/**
 * _abs - computes the absolute number of the integer
 * return: 0 (success)
 */

int _abs(int n);

/**
 * print_last_digit - prints that last digit of a number
 * @n: the number to print last digit of
 * Return: 0 (success)
 */

int print_last_digit(int n);























#endif
