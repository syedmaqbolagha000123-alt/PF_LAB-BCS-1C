#include <stdio.h>

int main() {
    int Array1Size,Array2Size,IarraySize;
    printf("Enter Array One Size\n");
    scanf("%d", &Array1Size);
    
    printf("Enter Array One Size\n");
    scanf("%d", &Array2Size);
    // intersection Array size will be Smallest Array
    if(Array1Size <= Array2Size)
    {
    	IarraySize = Array1Size;
	}
	else
	{
		IarraySize = Array2Size;
	}
    
    int i, j, k = 0;
int array1[Array1Size], Array2[Array2Size], intersection[IarraySize ];
    
    printf("Enter elements of Array 1:\n");
    for(i = 0; i < Array1Size; i++) 
	{
        scanf("%d", &array1[i]);
    }

    
    printf("Enter elements for Array 2:\n");
    for(i = 0; i < Array2Size; i++) 
	{
        scanf("%d", &Array2[i]);
    }

    // Finding intersection
    for(i = 0; i < Array1Size; i++)
	 {
        for(j = 0; j < Array2Size; j++) 
		{
            if(array1[i] == Array2[j]) 
			{  
                int already_added = 0;
                int x;
                
                for( x = 0; x < k; x++)
				 {
                    if(intersection[x] == array1[i])
					 {
                        already_added = 1;
                        break;
                    }
                }
                
                if(!already_added)
				 {
                    intersection[k] = array1[i];
                    k++;
                }
            }
        }
    }

    
    printf("\nIntersection of the two arrays: ");
    if(k == 0){
	
        printf("No common elements.");
    }
    else {
        for(i = 0; i < k; i++) {
            printf("%d ", intersection[i]);
        }
    }

}

