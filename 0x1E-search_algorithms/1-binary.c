#include "search_algos.h"
/*
 * binary_search - searches for a value in a sorted array using binary search
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to search for 
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int i;
    	if (array == NULL)
		return (-1);
    
    	while (low <= high)
    	{
		int mid = low + (high - low) / 2;
		printf("Searching in array: ");
        	for (i = low; i <= high; ++i)
		{
            		printf("%d, ", array[i]);
        	}
		printf("\n");
        
        	if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	
	return (-1);
}

