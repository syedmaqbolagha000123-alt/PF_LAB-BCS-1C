/*Write a program that checks if a number is odd or even using bitwise &amp;*/
#include<stdio.h>
int main()
{
	int num;
	printf("Enter A Number:\n");
	scanf("%d,",&num);
	if(num&1)
	{
		printf("The Number is Odd:%d",num);
	}else
	{
		printf("The Number is Even:%d",num);
	}
	return 0;
}
