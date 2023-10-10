#include "search_algos.h"
/**
 * print_arr - prints n elements of an array of integers.
 * @arr: the array
 * @left: first index
 * @right: last index
 */
void print_arr(int *arr, int left, int right)
{
	int i = left;

	printf("Searching in array: ");
	for (; i <= right; i++)
	{
		printf("%d", arr[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");
}
/**
 * _binary_search - searches for a value in a sorted array of,
 *                 integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @l: left
 * @r: right
 * @value: is the value to search for
 * Return: the index where value is located
 */
int _binary_search(int *array, int l, int r, int value)
{
	int left = l;
	int right = r;
	int middle = 0, val = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		middle = left + (right - left) / 2;
		val = array[middle];
		print_arr(array, left, right);
		if (value == val)
			return (middle);
		if (value > val)
			left = middle + 1;
		else if (value < val)
			right = middle - 1;
	}
	return (-1);
}
/**
 * exponential_search - searches for a value in a sorted array,
 *                      of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	int index = 0, min;

	if (array == NULL)
		return (-1);
	if (array[index] == value)
		return (index);
	index = 1;

	while (index < (int)size && array[index] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		index *= 2;
	}

	min = index < (int)size ? index : (int)size - 1;
	printf("Value found between indexes [%d] and [%d]\n", index / 2, min);
	return (_binary_search(array, index / 2, min, value));
}
