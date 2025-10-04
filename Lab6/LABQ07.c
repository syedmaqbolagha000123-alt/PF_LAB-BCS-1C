#include<stdio.h>  //7. Print Fibonacci series up to 10 terms using a for loop.
int main(){
	int n =10;
	int first=0,second=1;
	int i,next;
	printf("Fibonacci series up to %d terms.\n",n);
	// printing first & second terms of series
	printf("%d, %d", first,second);
	for(i=3;i<=n;i++)
	{
		next= first+second;
		printf(", %d",next);
		// updated values 
		first=second;
		second=next;	
	}
	return 0;
}
