#include "main.h"
/**
 * print_alphabet - prints the english alphabet from a-z.
 * Return: Always 0.
 */
void print_alphabet(void)
{
/* Declaration */
char c;
/* for loop */
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
/* prints new line */
putchar('\n');
}
