#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int* array, int size)
{

    while (1)
    {
        int flag = 0;
        for (int i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
                flag++;
            }
        }

        for (int i = 0; i < 10; i++)
        {
            printf("%d - ", array[i]);
        }

        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int array[10] = {4, 6, 7, 3, 19, 1, 8, 5, 15, 10};

    for (int i = 0; i < 10; i++)
    {
        printf("%d - ", array[i]);
    }

    printf("\n\n"); 
    bubble_sort(array, 10);
    printf("\n\n+---------------------+");
    printf("\n+- DEPOIS DE ARRUMAR -+");
    printf("\n+---------------------+\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d -", array[i]);
    }
}