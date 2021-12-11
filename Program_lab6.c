//Option 12
#include <stdio.h>
#include <stdlib.h>
const int size = 4;
int main()
{
    //Task1
    int a[] = {0, 3, 5, 7};
    int *ptr[size], i;

    if (ptr == NULL)
    {
        printf("____TASK 1____");
        printf("Can't run the program !");
        exit(0);
    }
    printf("\n____TASK 1____");
    for (i = 0; i < size; i++)
    {
        ptr[i] = &a[i];
    }
    //print the array on the the screen
    printf("\nThe array is: ");
    for (i = 0; i < size; i++)
    {
        printf(" %d ", *ptr[i]);
    }
    //Task 2
    int *ptr_arr, num_element;
    printf("\n\n\n____TASK 2____");
    //memory allocation
    ptr_arr = (int *)calloc(8, sizeof(int));
    printf("\nEnter the number of the element of the array: ");
    scanf("%d", &num_element);

    for (size_t j = 0; j < num_element; j++)
    {
        printf("ptr_arr[%d] = ", j);
        scanf("%d", (ptr_arr + j));
    }
    printf("The array is: ");
    for (size_t j = 0; j < num_element; j++)
    {
        printf(" %d ", *(ptr_arr + j));
    }

    //release memoryz
    free(ptr_arr);
    return 0;
}