#include <stdio.h>
#include <stdlib.h>



void insertion_sort(int* array, int size)
{

    int smallest_index = NULL;
    int aux = 0;

    for (int i = 1; i < size; i ++)
    {
        smallest_index = i;

        for (int j = i; j > 0; j--)
        {
            if (array[j - 1] > array[j])
            {
                aux = array[j - 1]; 
                array[j - 1] = array[j];
                array[j] = aux;
            }
        }
    }

}

int main()
{
    
    int array[10] = {12, 5, 3, 78, 69, 26, 8, 11, 37, 89};

        
    for (int i = 0; i < 10; i++)
    {
        printf("\n\t  %d", array[i]);
    }

    insertion_sort(array, 10);
    printf("\n\n+---------------------+");
    printf("\n+- DEPOIS DE ARRUMAR -+");
    printf("\n+---------------------+\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\n\t  %d", array[i]);
    }
}