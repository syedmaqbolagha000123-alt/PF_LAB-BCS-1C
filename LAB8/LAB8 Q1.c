#include<stdio.h>
int main(void)
{
	

	  
	int i, j, k = 0;
	int found;
	int Array1Size,Array2Size,uArraySize;
	printf("Enter Array One Size:\n");
	scanf("%d", &Array1Size);
	printf("Enter Array Two Size:\n");
	scanf("%d", &Array2Size);
		int Array[Array1Size];
    	int array[Array2Size];
	printf("Array1:\n ");
	    uArraySize =  Array1Size +  Array2Size;//Max size of Union Array
	int Union[uArraySize];
	for( i = 0; i <Array1Size; i++)
	{
	  scanf("%d", &Array[i]);
	  Union[k] = Array[i];
	  k++;
	  
	  	
	}
	printf("\n");
	printf("\nArray2:\n ");
	for( i = 0; i < Array2Size; i++)
	{
		scanf("%d", &array[i]);
		found = 0; // assuming no same value found for now
		for(j = 0; j < k; j++)
		{
			if( array[i]== Union[j])
			{
				found = 1; 
				break;
			}
			
		}
			if( found == 0)
	{
		Union[k] = array[i];
		k++;
	}
	}
	printf("Union : ");
	for(i = 0; i < k; i++)
	{
	printf("%d ", Union[i] );	
	}
	
	
}
