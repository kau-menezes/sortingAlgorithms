#include <stdio.h>
#include <stdlib.h>

void selection_sort(int array[], int size)
{

    // inicialy, the smallest portion of the array would be the first we're analysing
    int smallest = array[0];
    int aux = 0;

    // loop that occurs for each of the elements of the array
    for (int i = 0; i < size - 1; i++)
    {
        // the smallest is set to the position that's being analysed 
        smallest = i;

        for (int j = i + 1; j < size - 1; j++)
        {

            if (array[j] < array[smallest])
            {
                smallest = j;

            }

        }

        aux = array[smallest]; 
        array[smallest] = array[i];
        array[i] = aux;

    }

}

int main()
{
    int array[10] = {12, 5, 3, 78, 69, 26, 8, 11, 37, 89};
    
    for (int i = 0; i < 10; i++)
    {
        printf("\n\t  %d", array[i]);
    }

    selection_sort(array, 10);
    printf("\n\n+---------------------+");
    printf("\n+- DEPOIS DE ARRUMAR -+");
    printf("\n+---------------------+\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\n\t  %d", array[i]);
    }

}