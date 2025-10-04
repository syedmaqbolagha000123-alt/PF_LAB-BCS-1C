/*	5. Write a program that checks whether a given number is divisible by both 2 and 3
using logical operators.*/
#include<stdio.h>
int main()
{
	int number;
	printf("Enter A Number!\n");
	scanf("%d",&number);
	if(number%2==0 && number%3==0)
	{
		printf("The Entered Unmber is Divisible By both 2 & 3.\n");
   }
	else
	{
		printf("The Entered Number is not divisible by 2 Or 3.\n");
		
	}
	
	
	return 0;
}
