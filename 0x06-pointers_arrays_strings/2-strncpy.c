#include "holberton.h"
/**
 * _strncpy - Function that copies a string
 * @dest: Destination parameter to copy to
 * @src: Source parameter to copy from
 * @n: Limit of bytes to copy by
 * Return: Pointer with the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{

int i;

for (i = 0; src[i] != '\0'; i++)
{
i < n ? dest[i] = src[i] : i;
}
while (n > i)
{
dest[i] = '\0';
i++;
}

return (dest);

}
