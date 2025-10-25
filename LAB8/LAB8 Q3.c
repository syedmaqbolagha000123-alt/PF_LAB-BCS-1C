#include <stdio.h>

int main(void)
{
	int Array1Size,Array2Size,IarraySize;
    printf("Enter Array One Size\n");
    scanf("%d", &Array1Size);
    
    printf("Enter Array One Size\n");
    scanf("%d", &Array2Size);
    int arr1[Array1Size], arr2[Array2Size];
    int i, j, count = 0;

   
    printf("Enter elements of Array 1:\n");
    for(i = 0; i < Array1Size; i++)
	 {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter elements of Array 2:\n");
    for(i = 0; i < Array2Size; i++) 
	{
        scanf("%d", &arr2[i]);
    }

    
    for(i = 0; i < Array1Size; i++)
	 {
        for(j = 0; j < Array2Size; j++) 
		{
            if(arr1[i] == arr2[j]) 
			{
                count++;
                break;  
            }
        }
    }


    printf("\nTotal common elements: %d\n", count);

    return 0;
}

