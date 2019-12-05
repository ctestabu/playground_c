/* Асимптотика в среднем и худшем случае – O(n^2), в лучшем – O(n).
Сортировка вставками */
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int helper;
	helper = 0;
	helper = *a;
	*a = *b;
	*b = helper;
}
void printarr(int *arr, int size)
{
	int i;
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
    printf("\n");
}

void insertionsort(int *arr, int n)
{
	int i; 
	int j;
	//int cur_elem = n - (n - 1);
	i = 1;

	if (n <= 1)
		return;
	while (i < n)
	{
		int cur_elem = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > cur_elem)
		{
			ft_swap(&arr[j], &arr[j + 1]);
			j = j - 1;
		}
		++i;
	}
}

int main() 
{ 
    int arr[] = { 12, 11, 13, 5, 6 , 45, 46, 101, 22, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    insertionsort(arr, n); 
    printarr(arr, n); 
  
    return 0; 
}