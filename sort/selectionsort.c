/*Сортировка выбором / Selection sort

На очередной итерации будем находить минимум в массиве после текущего элемента и 
менять его с ним, если надо.
Таким образом, после i-ой итерации первые i элементов будут стоять на своих местах.
Асимптотика: O(n^2) в лучшем, среднем и худшем случае.
Нужно отметить, что эту сортировку можно реализовать двумя способами – сохраняя 
минимум и его индекс или просто переставляя текущий элемент с рассматриваемым,
если они стоят в неправильном порядке. 
Первый способ оказался немного быстрее, поэтому он и реализован.
*/

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

void	selectionsort(int *arr, int n)
{
	int i;
	int j;
	int min_val_ind;
	
	i = 0;
	j = 0;
	while (i < n - 1)
	{
		min_val_ind = i;
		j = i + 1;
		while (j < n)
		{
			if (arr[j] < arr[min_val_ind])
				min_val_ind = j;
			j++;
		}
		ft_swap(&arr[min_val_ind], &arr[i]);
		++i;
	}
}

int main() 
{ 
    int arr[] = { 12, 11, 13, 5, 6 , 45, 46, 101, 22, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    selectionsort(arr, n); 
    printarr(arr, n); 
  
    return 0; 
}