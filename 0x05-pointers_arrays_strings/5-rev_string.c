#include "holberton.h"

/**
 * rev_string -  returns the length of a string.
 * @s : pointer to char
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */

void rev_string(char *s)
{

int opc, tam, com;

com = 0;

for (tam = 0; s[tam] != '\0'; tam++)
{
tam--;
}
while (com < tam)
{
opc = s[com];
s[com] = s[tam];
s[tam] = opc;
com++;
tam--;
}
}
