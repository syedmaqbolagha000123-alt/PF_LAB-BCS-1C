/*Write a program to check if a student has passed. If marks = 50, check if marks = 85,
then display “Passed with Distinction”. Otherwise, display “Just Passed”.*/
#include<stdio.h>
int main()
{
	int marks=0;
	printf("Enter your Marks to check your Result:\n");
	scanf("%d",&marks);
	if(marks>=50&&marks<85)
	{
		printf("Just Passed!\n");
	}
	else if(marks>=85)
	{
		printf("Passed With Distinction!\n");
	}
	else
	{
		printf("TRY AGIAN.");
	}
	return 0;
}
