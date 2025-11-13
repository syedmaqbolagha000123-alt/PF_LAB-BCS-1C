/*Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].*/
#include <stdio.h>

int main()
{
    int nums[100];  
    int result[100]; 
    int n, i, j = 0;

    printf("Enter n (half of total elements): ");
    scanf("%d", &n);

    printf("Enter %d elements of array in form [x1,x2,...,xn,y1,y2,...,yn]:\n", 2 * n);
    for (i = 0; i < 2 * n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Shuffle: [x1,y1,x2,y2,...,xn,yn]
    for (i = 0; i < n; i++)
    {
        result[j++] = nums[i];     // take x_i
        result[j++] = nums[i + n]; // take y_i
    }

    printf("\nShuffled Array:\n");
    for (i = 0; i < 2 * n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}

