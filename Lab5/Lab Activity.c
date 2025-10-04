#include<Stdio.h>
   int main ()
   {
    char degree[20];
    char Result[15];
    
    printf( "Enter your Qualification:\t\n");
    scanf("%s",degree);
    if(strcmp(degree,"MS")==0)
	{
    	printf( "enter your Result");
    	 scanf("%s", Result);
    	 
    	 if(strcmp(Result,"PASS")==0)
		 {
    	 	printf( "CONGRALUATION!! you are Hired\n"); 	
		 }
		 else
		 {
		 printf( "Better Luck Next time");
		 }
    	
	}
	else
	{
		printf( "Not Eligible");
		
	}
    
   	return 0;
   	
   }
