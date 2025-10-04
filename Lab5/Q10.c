/*Demonstrate bitwise left shift and right shift operators on an integer.*/
#include<stdio.h>
int main()
{
	int num;
	printf("Enter Number to perform <<&>>!:");
	scanf("%d",&num);
	int left=num<<1;
	int right=num>>1;
	printf("Number After <<: %d\n",left);
	printf("Number After >>: %d\n",right);
	return 0;
}
