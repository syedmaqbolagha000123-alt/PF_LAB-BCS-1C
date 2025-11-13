/*You are given an integer array nums. Transform nums by performing the following operations in the exact order specified:

Replace each even number with 0.
Replace each odd numbers with 1.
Sort the modified array in non-decreasing order.*/
#include <stdio.h>

int main()
{
    int Arr[10];
    int i, j, temp;

    printf("Enter 10 numbers:\n");

   
    for (i = 0; i < 10; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &Arr[i]);   
        if (Arr[i] % 2 == 0)
            Arr[i] = 0;
        else
            Arr[i] = 1;
    }

   
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - i; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }

    
    printf("\nTransformed and Sorted Array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", Arr[i]);
    }

    return 0;
}

