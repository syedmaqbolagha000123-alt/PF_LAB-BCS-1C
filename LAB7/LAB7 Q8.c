#include<stdio.h>
#define Size 10
int main(void)
{
	int Number[Size];
	int i, counter;
	printf("Enter 10 numbers to Check Ascending Order:\n");
	 for(i = 0; i < Size; i++)
	 {
	 	counter = i +1;
	    printf("[%d]Number:", counter);
	    scanf("%d", &Number[i]);
	    
     }
	 
	 	if(Number[i] <= Number[i +1])
	 	{
	 	printf("Ascending Ordered Sorted");	
	}
	else
	{
		printf(" Not Ascending Ordered Sorted");	
	}
	 
}
