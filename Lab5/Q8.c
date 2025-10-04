/*Write a program that toggles the 2nd bit of a number using XOR.*/
#include<stdio.h>
int main()
{
	int num;
	printf("Enter Number:\n");
	scanf("%d",&num);
	int result=num^2;
	printf("ORIGINAL NUMBER:%d\n",num);
	printf("AFTER 2ND BIT:%d",result);
	return 0;
}
