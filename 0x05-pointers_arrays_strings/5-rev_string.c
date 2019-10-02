#include "holberton.h"

/**
 * rev_string -  returns the length of a string.
 * @s : pointer to char
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */

void rev_string(char *s)
{

int ini, end, tmp, i = 0;
while (s[i] != '\0')
i++;
end = i - 1;
for (ini = 0; ini < i / 2; ini++)
{
tmp = s[ini];
s[ini] = s[end];
s[end] = tmp;
end--;
}
}
