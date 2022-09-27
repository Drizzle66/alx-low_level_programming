#ifndef _MAIN_
#define _MAIN_

int _putchar(char c);

/**
 *_memset() function - fills the first n bytes of the memory area pointed to by s with the constant byte b
 *@s: memory area
 *@b: constant byte
 *
 *Return: A pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n);

/**
 *_memcpy() function - copies n bytes from memory area src to memory area dest
 *@dest: destination memory area
 *@src: source of byte to copy
 *
 *Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates substring
 * @haystack: string to locate substring
 * @needle: string to locate
 * Return: return string found
 */

char *_strstr(char *haystack, char *needle);

void print_chessboard(char (*a)[8]);

void print_diagsums(int *a, int size);

void set_string(char **s, char *to);

#endif
