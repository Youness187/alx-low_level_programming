#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int r, i, j = 2772;
	srand(time(NULL));

	for (i = 0; j >= 121; i++)
	{
		r = (rand() % 125) + 1;
		printf("%c", r);
		j -= r;
	}
	printf("%c", j);

	return (0);
}
