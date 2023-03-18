#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Print statements based on the last digit of the random number.
 * Return: 0
 */
int main(void)
{
int Number;

srand(time(0));
Number = rand() - RAND_MAX / 2;

if ((Number % 10) > 5)
{
printf("Last digit of %d is %d and is greater then 5\n", Number, Number % 10);
}
else if ((Number % 10) == 0)
{
printf("ast digit of %d is %d and is 0\n", Number, Number % 10);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0\n",
Number, Number % 10);
}
return (0);
}
