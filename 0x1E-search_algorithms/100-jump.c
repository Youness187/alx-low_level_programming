#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array,
 *               of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int index = 0;

	if (array == NULL || size == 0)
		return (-1);

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index += step;
	} while (index < (int)size && array[index] < value);
	step = index - step;
	printf("Value found between indexes [%d] and [%d]\n", step, index);
	index = index >= (int)size ? (int)(size - 1) : index;
	while (step <= index)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		if (array[step] == value)
			return (step);
	  step++;
	}
	return (-1);
}
