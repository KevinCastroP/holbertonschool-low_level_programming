#include "holberton.h"
<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

/**
 * _strchr - function that fills memory with a constant byte.
 * @c : character to find
 * @s : string
 * Return:  pointer a char
 * On error, -1 is returned, and errno is set appropriately.
=======
#include <stddef.h>

/**
 *_strchr - concatnate
 *@s: dest pointer
 *@c: src pointer
 *Return: something
>>>>>>> 37e8095e7df9d233ae0398083be1c58e588f8457
 */

char *_strchr(char *s, char c)
{

<<<<<<< HEAD

char k;

for (k = 0; s[k] != '\0'; k++)

{

if (s[k] == c)

{

return (s[k]);

}
}

return (NULL);

=======
int k;

for (k = 0; s[k] != '\0'; k++)
{
if (s[k] == c)
{
break;
}
}
if (s[k] == c)
{
return (s + k);
}
else
return (NULL);
>>>>>>> 37e8095e7df9d233ae0398083be1c58e588f8457
}
