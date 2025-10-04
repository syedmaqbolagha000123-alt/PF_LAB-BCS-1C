/*Demonstrate the effect of pre-increment and post-increment operators with an
example.*/
#include<stdio.h>
int main()
{
   int i=0,j=0;
   printf("%d\t%d\n",i,j);
   printf("--*---*--*--*--\n");
   
   while(i<=10&&j<=10)
   {
   	printf("%d\t%d\n",++i,j++);
   	//pre increment
   	//Post increment
   }
   
   
	return 0;
}
