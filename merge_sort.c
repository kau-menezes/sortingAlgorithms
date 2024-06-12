#include <stdio.h>
#include <stdlib.h>

void merge(int* array1, int*array2, int size1, int size2)
{
    int* cpy_array1 = (int*)malloc(size1 * sizeof(int));
    int* cpy_array2 = (int*)malloc(size2 * sizeof(int));

    for (int i = 0; i < size1; i++)
    {
        cpy_array1[i] = array1[i];
    }

    for (int i = 0; i < size2; i++)
    {
        cpy_array2[i] = array2[i];
    }

    int i, j, k;
    i = j = k = 0;

    while(i < size1 && j < size2)
    {
        printf("\n cpy1 %i < cpy2 %i",cpy_array1[i],cpy_array2[j]);
        if (cpy_array1[i] < cpy_array2[j])
        {
            array1[k++] = cpy_array1[i++];

        } else {
            array1[k++] = cpy_array2[j++];

        }
        
    }

    while (i < size1)
    {

        array1[k++] = cpy_array1[i++];

    }

    while (j < size2)
    {

        array1[k++] = cpy_array2[j++];

    }

    free(cpy_array1);
    free(cpy_array2);
    printf("\n");
}

void divide(int *array, int size)
{
    if (size < 2) {
        return;
    }

    int left_size = size / 2;
    int right_size = left_size + (size &1) ;

    divide(array, left_size);
    divide(array + left_size, right_size);

    merge(array, array + left_size,left_size,right_size);

}

void merge_sort(int* array, int size)
{
    divide(array, size);
}


int main ()
{
    int array[10] = {4, 6, 7, 3, 19, 1, 8, 5, 15, 10};

    for (int i = 0; i < 10; i++)
    {
        printf("%d - ", array[i]);
    }

    printf("\n\n"); 
    divide(array, 10);
    printf("\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d -", array[i]);
    }

}
