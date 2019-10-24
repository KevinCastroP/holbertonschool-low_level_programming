#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* op_add - function sum
* @a: recieved an integer
* @b: recieved an integer
* Return: a value
*/

int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - function substract
* @a: recieved an integer
* @b: recieved an integer
* Return: a value
*/

int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - function multiplicate
* @a: recieved an integer
* @b: recieved an integer
* Return: a value
*/

int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - function divide
* @a: an integer
* @b: an integer
* Return: a value
*/

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
* op_mod - function module
* @a: an integer
* @b: an integer
* Return: a value
*/

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
