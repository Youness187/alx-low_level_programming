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
 * binary - searches for a value in a sorted array of,
 *          integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @left: left index
 * @right: right index
 * @value: is the value to search for
 * Return: the index where value is located
 */
int binary(int *array, int left, int right, int value)
{
	int mid = left + (right - left) / 2;

	if (left > right)
		return (-1);

	print_arr(array, left, right);

	if (array[mid] == value)
	{
		if (mid > left && array[mid - 1] == value)
			return (binary(array, left, mid, value));
		return (mid);
	}
	else if (array[mid] < value)
		return (binary(array, mid + 1, right, value));

	return (binary(array, left, mid - 1, value));
}
/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	i = binary(array, 0, size - 1, value);

	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
