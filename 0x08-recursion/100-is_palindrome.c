#include "main.h"

int if_palindrome(char *s, int i, int len);
int string_length_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (if_palindrome(s, 0, string_length_recursion(s)));
}

/**
 * string_length_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int string_length_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_length_recursion(s + 1));
}

/**
 * if_palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int if_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (if_palindrome(s, i + 1, len - 1));
}

