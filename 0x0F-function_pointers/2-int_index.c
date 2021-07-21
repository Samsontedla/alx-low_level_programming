#include "function_pointers.h"
/**
 *int_index - function that searches for an integer
 *@array: given array
 *@size: number of elements in array
 *@cmp: pointer to the function to be used to compare values
 *Return: Index if pointed function evaluates true or -1 on error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (; index < size; index++)
	{
		if (cmp(array[index]) != '\0')
			return (index);
	}
	return (-1);
}
