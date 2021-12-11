// Option 12
#include <stdio.h>

int main()
{
    int x[7]={23, 5678, 2, 564, 365, 77, 443}; 
    int a[2][2]={{1, 1}, {1, 4}}, b[2][2]={{1, 2}, {4, 1}}, c[2][2], i, j, k;
    int sum_Matrix = 0;

    //____TASK 1____//
    printf("The array is: ");
    for (size_t y = 0; y < 7; y++)
    {
        printf(" %d ", x[y]);
    }
    

    //____TASK 2____//
    //print matrix 1
    printf("\nThe matrix 1 is: ");
    for (size_t i = 0; i < 2; i++)
    {
        printf("\n");
        for (size_t j = 0; j < 2; j++)
        {
            printf(" %d ", a[i][j]);
        }
        
    }
    //print matrix 2
    printf("\nThe matrix 2 is:");
    for (size_t i = 0; i < 2; i++)
    {
        printf("\n");
        for (size_t j = 0; j < 2; j++)
        {
            printf(" %d ", b[i][j]);
        }
        
    }    
    

    //multiplication of 2 matrices
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {

            c[i][j] = 0;
            for (k = 0; k <= 2; k++)
            {
                c[i][j] += sum_Matrix + a[i][k] * b[k][j];
            }
        }
    }
    //print the result on the screen
    printf("\nThe result m1*m2 is: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf(" %d ", c[i][j]);
        }
        printf("\n");
    }

    return (0);
}




/*printf("\nEnter matrix 1:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter matrix 2:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }*/