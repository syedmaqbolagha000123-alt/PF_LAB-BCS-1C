/*Write a program that takes age and gender. If age = 18 and gender = male, print
“Adult Male”, else if female, “Adult Female”, otherwise “Minor”. */
#include<stdio.h>
int main()
{
	int age;
	char gender;
	printf("Enter Your Age :\nSelect your Gender\n(M or m.Male)\n(F or f.Female)\n");
	scanf("%d %c",&age,&gender);
	switch(age>=18)
	{
		case 1:
		
			switch(gender)
				{
					case'M':
					printf("Adult Male!\n");
					break;
					case'm':
					printf("Adult Male!\n");
					break;
			    	case'F':
					printf("Adult Female!\n");
					break;
			     	case'f':
			     	printf("Adult Female!\n");
			     	break;
			     	default:
					printf("Unknown Gender!\n");
					break;
			   }
		break;		
		
		case 0:
		printf("MINOR!\n");
		break;
}
	return 0;
}
