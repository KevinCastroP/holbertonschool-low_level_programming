#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main - principal main
* @argc: count arguments
* @argv: array arguments
* Return: value
*/

int main(int argc, char *argv[])
{

int answ;
int (*fun)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
fun = get_op_func(argv[2]);
if (!fun)
printf("Error\n"); 
exit(99);
answ = fun((atoi(argv[1])), (atoi(argv[3])));
printf("%d\n", answ);
return (0);
}
