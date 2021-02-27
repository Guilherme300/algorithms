#include <stdio.h>

void printArrayData(int *array, int array_size);
void swap(int array[], int index1, int index2);
int indexOfMinimum(int *array, int array_size, int startIndex);
int * selectionSort(int array[], int array_size);

int main(void)
{
	int arr_size = 5;
	int arr[] = {5,1,22,4,1};

	int *sortedArr = selectionSort(arr, arr_size);

	printArrayData(sortedArr, arr_size);
}

int * selectionSort(int array[], int array_size)
{
	for(int i = 0; i < array_size; i++)
	{
		int index = indexOfMinimum(array, array_size, i);
		swap(array, index, i);
	}

	return array;
}

int indexOfMinimum(int *array, int array_size, int startIndex)
{
	int min = array[startIndex];
	int minIndex = startIndex;

	for(int i = startIndex+1; i < array_size; i++)
	{
		
		if(array[i] < min)
		{
			min = array[i];
			minIndex = i;
		}

	}

	return minIndex;
}

void swap(int array[], int index1, int index2)
{
	int temp = array[index1];
	array[index1] = array[index2];
	array[index2] = temp;
}

void printArrayData(int *array, int array_size)
{
	for(int i = 0; i < array_size; i++)
	{
		printf("%d\n", *(array + i));
	}
}
