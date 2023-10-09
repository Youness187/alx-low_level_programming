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
 * binary_search - searches for a value in a sorted array of,
 *                 integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;
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
