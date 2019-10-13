#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 *main - DESC
 *@argc: count arguments
 *@argv: array of arguments
 *Return: 0 if is positive
 */

int main(int argc, char *argv[])
{

int res = 0;
int pos = 0;
int cpos = 0;

if (argc < 2)
{
printf("0\n");
}
else
{
for (pos = 1; pos < argc; pos++)
{
for (cpos = 0; argv[pos][cpos] != '\0'; cpos++)
{
if (!isdigit(argv[pos][cpos]))
{
printf("Error\n");
return (1);
}
}
res += atoi(argv[pos]);

}
printf("%d\n", res);
}

return (0);


}
