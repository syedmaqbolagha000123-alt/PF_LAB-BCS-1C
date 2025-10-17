/*An array contains 12 numbers. Write a program to remove all occurrences of a given number and shift
remaining elements left.
For example user enters 1 , 2 , 4 , 5 , 7 ,7 , 7 ,8,9,10,10,11 as an array want to remove 7 than the output will
be 1 , 2 ,4,5, 8, 9 , 10, 10,11v*/
#include<stdio.h>
#define Array_Size 12
int main(void)

{
	int number[Array_Size];
	int i,j = 0;
	int Number, counter = 0;
	printf("Enter 12 Numbers(repeation is allowed)\n");
	for(i = 0; i < Array_Size; i++)
	{
		counter = i +1;
		printf("Number[%d]:\t", counter);
		scanf("%d", &number[i]);
		
	}
	printf("Enter the Number For Removing from this Numbers\n");
	scanf("%d", &Number);
	for(i = 0; i < Array_Size; i++)
	{
		if(number[i] != Number)
		{
			number[j] = number[i];
			j++;
		}
	
	}
		printf("\n Array after Removing a Numbers %d\n", Number);
		for(i = 0; i < j; i++){
			printf("%d\t", number[i]);
		}
		
}
