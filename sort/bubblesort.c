#include <stdio.h>
/*Сортировка пузырьком / Bubble sort

Будем идти по массиву слева направо. Если текущий элемент больше следующего, меняем их местами.
Делаем так, пока массив не будет отсортирован.
Заметим, что после первой итерации самый большой элемент будет находиться в конце массива, на правильном месте.
После двух итераций на правильном месте будут стоять два наибольших элемента, и так далее.
Очевидно, не более чем после n итераций массив будет отсортирован.
Таким образом, асимптотика в худшем и среднем случае – O(n^2), в лучшем случае – O(n)
*/

void ft_swap(int *a, int *b)
{
	int helper;
	helper = 0;
	helper = *a;
	*a = *b;
	*b = helper;
}

void bubblesort(int *arr, int n)
{
	int i;
	int j;
	i = 0;

	while (i < n - 1)
	{
		j = 0;
		{
			while (j < n - i - 1)
			{
				if (arr[j] > arr[j + 1])
					ft_swap(&arr[j], &arr[j + 1]);
				++j;
			}
		}
		++i;
	}
}
void printarr(int *arr, int size)
{
	int i;
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
    printf("\n");
}

int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 101010, 24124, 575, 255,5346,34}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubblesort(arr, n); 
    printf("Sorted array: \n"); 
    printarr(arr, n); 
    return 0; 
}