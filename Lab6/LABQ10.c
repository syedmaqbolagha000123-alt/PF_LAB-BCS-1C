//Keep taking input until user enters 0.
#include<stdio.h>
int main()
{
	int num;
	while(1)
	{
	printf("Enter Number 0 to stop the Program.\n");
	scanf("%d",&num);
	if(num==0)
	{
	printf("program ended.\n");	
	}
	else
	
	{
	printf("You Enter a Number:%d\n",num);	
	}
	}
	return 0;
}
