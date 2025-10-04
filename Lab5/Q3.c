/*Write a program using nested switch to select a device: (1=Phone, 2=Laptop). Inside
each, choose brand (Phone: 1=Samsung, 2=Apple; Laptop: 1=Dell, 2=HP).*/
#include<stdio.h>
int main()
{
	int device,brand;
	printf("***SELECT YOUR DEVICE***\n1.Phone\n2.Laptop\n");
	scanf("%d",&device);
	switch(device)
	{
		case 1:
			printf("***SELECT YOUR BRAND***\n1.Samsung\n2.Apple\n");
			scanf("%d",&brand);
			switch(brand)
			{
				case 1:
					printf("You selected:Phone---->>Samsung");
					break;
				case 2:
					printf("You selected:Phone---->>Apple");
					break;
				default:
					printf("Please  Select your Brand!");
					break;
					
			}
			break;
	    case 2:
		    printf("***SELECT YOUR BRAND***\n1.DELL\n2.HP\n");
			scanf("%d",&brand);
			switch(brand)
			{
				case 1:
					printf("You selected:Laptop---->>DELL");
					break;
				case 2:
					printf("You selected:Laptop---->>HP");
					break;
				default:
					printf("Please  Select your Brand!");
					break;
			}
			break;
	    default:
				
			printf("Please  Select your DEVICE!");
			break;
   }

	return 0;
}
