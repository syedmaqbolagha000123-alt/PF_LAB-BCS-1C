#include<stdio.h>
#define size 10
int main(void)
{
	int Marks[size];
	int i;
	float Average;
	int sum;
	printf("Enter 10 students Marks!\n");
	for(i = 0; i < size; i++)
	{
		printf("Enter Student[%d] Marks: ",i + 1);
		scanf("%d", &Marks[i]);
		sum += Marks[1];
	}
	Average = sum/size;
	printf("Average Marks of class: %.2f", Average);
}
