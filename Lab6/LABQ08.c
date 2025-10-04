//Check if a number is palindrome (n=121) using a while loop.
#include<stdio.h>
int main()
{
	int n=121;
	int origional=n;
	int reverse=0,digit;
	while(n>0)
    {
    	digit=n%10;
    	reverse=reverse*10+digit;
    	n=n/10;
	}
	if(origional==reverse)
	{
		printf("%d is a palindrome number!",origional);
		
	}
	else
	{
		printf("%d is not a palindrome number!",origional);
		
	}
	return 0;
}
