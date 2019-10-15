#include "holberton.h"

/**
 * wildcmp - Function to compare two strings using '*' as wildcards
 * @s1: First parameter to compare
 * @s2: Second parameter to compare
 * Return: 1 if the strings can be considered identical and 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{

if (*s1 == '\0' && *s2 == '\0')
{

return (1);
}

if (*s1 == *s2)
{

return (wildcmp(s1 + 1, s2 + 1));
}

if (*s2 == '*')
{

if (*(s2 + 1) == '*')
{

return (wildcmp(s1, s2 + 1));
}

else if (wildcmp(s1, s2 + 1))
{

return (1);
}

else
{

return (wildcmp(s1 + 1, s2));

}
}

return (0);
}
