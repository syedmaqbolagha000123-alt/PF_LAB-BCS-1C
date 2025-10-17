/*
 Take an array from user that stores the ages of 8 participants. Write a program to find the youngest
participant’s age.*/
#include<stdio.h>
#define size 8
int main(void)
{
	int Ages[size] = {0};
    
	int i,counter;
	printf("Enter Ages of 8 Students\n");
	for(i = 0; i < size; i++)
	{
		counter = i +1;
		printf("Enter Age of Student: %d\t", 	counter);
		scanf("%d", &Ages[i]);			
	}
	int	youngest_age= Ages[0];
	for(i = 0; i< size; i++)
	{
		if(Ages[i] < youngest_age)
		{
			youngest_age= Ages[i];
		}
	}
	printf("Youngest Student is : %d", youngest_age);
}

