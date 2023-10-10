#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array,
 *                        of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos = 0;

	do {
		pos = low + (((double)(high - low) / (array[high] -
					array[low])) * (value - array[low]));
		if (pos < size)
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		else if (pos >= high)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		if (array[pos] > value)
			high = pos;
		else if (array[pos] < value)
			low = pos;
		if (array[pos] == value)
			return (pos);
	} while (array[pos] != value && pos < size);
	return (-1);
}

