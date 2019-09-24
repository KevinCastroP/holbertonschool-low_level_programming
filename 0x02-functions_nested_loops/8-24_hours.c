#include "holberton.h"
/**
 * jack_bauer -  return al seconds a day
 * @void: doesn't have argument input to evaluate
 * Return: prints all seconds all the day
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
int i = 0;
int j = 0;
int onedig;
int twodig;
int thredig;
int fourdig;

for (i = 0; i <= 23 ; i++)
{
for (j = 0; j <= 59; j++)
{
onedig = i / 10;
twodig = i % 10;
thredig = j / 10;
fourdig = j % 10;
_putchar(onedig + '0');
_putchar(twodig + '0');
_putchar(':');
_putchar(thredig + '0');
_putchar(fourdig + '0');
_putchar('\n');
}
}
}
