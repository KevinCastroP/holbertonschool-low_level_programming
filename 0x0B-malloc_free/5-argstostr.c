#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen -  Reset a number whith 98 value
 * @s : Pointer to int. adress variable to reset
 * Return:  int
 */

int _strlen(char *s)

{

int a = 0;

while (*(s + a) != '\0')
{
a++;
}

return (a);

}

/**
 * argstostr - check the code for Holberton School students.
 * @ac : variable of integer
 * @av : char 2pointer
 * Return: NULL.
 */
char *argstostr(int ac, char **av)
{

char *ans;
int *lengths;
int end_len = 0;
int k;
int c = 0;
int b = 0;

if (ac == 0)
return (NULL);
if (av == NULL)
return (NULL);

lengths = malloc(sizeof(int) * ac);
for (k = 0; k < ac; k++)
{
lengths[k] = _strlen(av[k]);
end_len += lengths[k] + 1;
}
ans = malloc(sizeof(char) * end_len);

for (k = 0; k < ac; k++)
{
for (b = 0; av[k][b] != '\0'; b++)
ans[c + b] = av[k][b];
ans[c + b] = '\n';
c += lengths[k] + 1;
}
return (ans);
}
