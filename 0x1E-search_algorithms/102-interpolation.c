#include "search_algos.h"
/**
 * interpolation_search - function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements of the array
 * @value: the value to search for
 * Return: index of the array the value is located at or -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = (int)size - 1;
	size_t pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

	if (array == NULL)
		return (-1);

	while ((array[high] != array[low]) && (value >= array[low])
			&& (value <= array[high]))
	{
		if (pos >= size || (int)pos < 0)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			  * (value - array[low]));
	}
	if (pos >= size || (int)pos < 0)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	if (value == array[low])
		return (low);
	else
		return (-1);
}
