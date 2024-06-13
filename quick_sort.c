#include <stdio.h>
#include <stdlib.h>

void quick_sort(int* array, int start, int end)
{

    if (start > end)
    {
        return;
    }
    
    int pivot = array[end];

    int i = start, j = end - 1;

    while (i < j)
    {
        
        while(array[i] < pivot && i != j)
        {
            i++;
        }
        int aux = array[j];
        array[j] = array[i];
        array[i] = aux;

        while (array[j] > pivot && j != i)
        {
            j--;
        }
        aux = array[j];
        array[j] = array[i];
        array[i] = aux;
    }

    if (array[i] > array[end])
    {
        int aux = array[i];
        array[i] = array[end];
        array[end] = aux;
    }

    printf("\nCABOU AS TROCAS. ARRAY: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d - ", array[i]);
    }
    quick_sort(array, start, i - 1);
    quick_sort(array, i + 1, end);

}

int main()
{
    int array[10] = {4, 6, 7, 3, 19, 1, 8, 5, 15, 10};

    for (int i = 0; i < 10; i++)
    {
        printf("%d - ", array[i]);
    }

    printf("\n\n"); 
    quick_sort(array, 0, 9);
    printf("\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d -", array[i]);
    }
}