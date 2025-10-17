/*6) You have an array of 10 integers representing daily profit/loss. Write a program to sum only the positive
values.*/
#include<stdio.h>
#define Size 10
int main()
{
	int Array[Size];
	int i,counter,sum = 0;
	printf("Enter 10 Amount of profit and Lost(with negative Sign)\n");
	for(i = 0; i < Size; i++)
	{
	  counter = i + 1;
	  printf("[%d] Amount:",counter);
	  scanf("%d", &Array[i]);
	}
	printf("\nAll Entered Amount:\n");
	for(i = 0; i < Size; i++)
	{
		printf("%d\t", Array[i]);
	}
	printf("\nHere is SUM of Profit\n");
	for(i = 0; i < Size; i++)
	{ 
	    if(Array[i] >= 0)
	  sum += Array[i];	
	}
	printf("Sum: %d", sum);
	
}
