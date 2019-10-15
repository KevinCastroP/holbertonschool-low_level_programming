#include <stdio.h>

/**
 *main - DESC
 *@argc: count arguments
 *@argv: array of arguments
 *Return: 0 if is positive
 */

int main(int argc, char *argv[])
{

int k;

for (k = 0; k < argc; k++)
{
printf("%s\n", argv[k]);
}
return (0);
}
