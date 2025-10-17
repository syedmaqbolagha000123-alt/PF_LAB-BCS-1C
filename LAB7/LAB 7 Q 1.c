#include<stdio.h>
#define size 12

int main(void)
{
	int Employees_id[size];
	int i, search_id, found=0;
	printf("\nEnter 12 Employees IDs\n\n\t******\n");
	for(i = 0; i < size; i++)
	{
		printf("\nEnter Employee[%d] ID: \n", i  + 1);
		scanf("%d", &Employees_id[i]);
		
	}
	for(i = 0; i < size; i++)
	{
		printf("\n***EMPLOYEES IDs SEARCHING ENGINE***\nEnter Employee ID: \n");
		scanf("%d", &search_id);
		if(Employees_id[i] == search_id)
		{
			found = 1;
			break;
		}
		
	}
    if(found)
    {
    	printf("\nEnter Employee[%d] ID is Exists in System \n", search_id);
	}
    else
    {
    	printf("\nEnter Employee[%d] ID is not Exists in System \n", search_id);
	}
	
}
