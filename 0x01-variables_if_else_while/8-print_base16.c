
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 * Return: 0
 * Description:  n is positive, negative or zero
 */

int main(void)
{
int n = 97;

for (n = 48; n < 58; n++)
{
putchar(n);
}
for (n = 97; n < 103; n++)
{
putchar(n);
}

putchar(10);


return (0);
}
