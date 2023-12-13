#include "shell.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *c;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	c = malloc(sizeof(char) * (length + 1));
	if (!c)
		return (NULL);
	for (length++; length--;)
		c[length] = *--str;
	return (c);
}

/**
 * _puts - Escribir un texto
 *
 * @str: This is my entry
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static int A;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || A >= WRITE_BUF_SIZE)
	{
		write(1, buf, A);
		A = 0;
	}
	if (c != BUF_FLUSH)
		buf[A++] = c;
	return (1);
}
