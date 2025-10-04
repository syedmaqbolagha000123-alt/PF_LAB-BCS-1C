#include<stdio.h>
int main()
{
	int number = 7;
	int i;
   int 	isprime =1;
	for(i=2;i<=number/2;i++){
	
	 if(number%i==0)
	 {
	 	isprime=0;
	 	break;
	 }
  }
  if(isprime==1)
  {
  	printf("%d is prime number. \n",number);
  	
  }else{
  	printf("%d is not prime number. \n",number);
  }
}
