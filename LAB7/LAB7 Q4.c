/*4)You have an array of 6 numbers. Write a program to shift all elements one position to the right, moving
the last element to the first position.*/
#include<stdio.h>
#define Array_Size 6
int main()
{
	int numbers[Array_Size], New_Numbers[Array_Size], i, counter;
	printf("Enter 6 Numbers:\n");
	for(i = 0; i < Array_Size; i++)
	{
		counter = i + 1;
		printf("Entert Number[%d]: ", counter);
		scanf("%d", &numbers[i]);
	}
	New_Numbers[0] = numbers[5];
	
	for(i = 0; i < 5; i++)
	{
		New_Numbers[i + 1] = numbers[i];
    }
    printf("\n\n After Shifting The Element of Array:\n");
   
    for(i = 0; i < Array_Size; i++ )
    {
    	printf("%d\t", New_Numbers[i]);
	}
	
}
