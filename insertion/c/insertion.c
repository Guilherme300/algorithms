#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int arr_size);
int * createNewArrFromOld(int *oldArr, int arr_size);
int * insertion(int *arr, int arr_size);

int main(void)
{
	int arr_size = 6;
	int arr[] = {3,1,2,6,5,9};
	
	int *sortedArr = insertion(arr, arr_size);

	printf("Array\n");
	printArray(arr, arr_size);

	printf("Sorted Array\n");
	printArray(sortedArr, arr_size);

	free(sortedArr);
}

int * createNewArrFromOld(int *arr, int arr_size)
{
	int *newArr = malloc(sizeof(int) * arr_size);

	for(int i = 0; i < arr_size; i++)
	{
		newArr[i] = *(arr + i);
	}

	return newArr;
}

int * insertion(int *arr, int arr_size)
{
	int *newArr = createNewArrFromOld(arr, arr_size);

	for (int i = 1; i < arr_size; i++)
	{
	
		int j = i - 1;
		int val = newArr[i];

		while(j >= 0 && newArr[j] > val)
		{
			newArr[j + 1] = newArr[j];
			j--;
		}

		newArr[j + 1] = val;
	
	}

	return newArr;
}

void printArray(int *arr, int arr_size)
{
	for(int i = 0; i < arr_size; i++)
	{
		printf("%d\n", *(arr + i));
	}
}