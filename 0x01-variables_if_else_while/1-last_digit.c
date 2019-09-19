
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
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int lastD = n % 10;
if (n > 5)
printf("%d and is greater than 5\n", n, lastD);
else if (n == 0)
printf("%d and is 0\n", n, lastD);
else(n < 6 !0)
printf("and is less than 6 and not 0\n", n, lastD);

return (0);
}
