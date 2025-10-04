//Print multiplication table of a number entered by user.
#include<stdio.h>
int main()
{
 int Number,i;
 printf("Enter a number for Multiplication Table:");
 scanf("%d",&Number);
  for(i=1;i<=10;i++)
  {printf("\t\t%d\tX\t%d\t=\t%d\t\t\n",Number,i,Number*i);
	  }
	  return 0;
}
