/* A nested switch program where user enters continent (Asia, Europe) and then a
country inside it (Asia ? Pakistan, India; Europe ? France, Germany).*/
#include<stdio.h>
int main()
{
	int continent,country;
	printf("***SELECT YOUR CONTINENT***\n1.Asia\n2.Europe\n");
	scanf("%d",&continent);
	switch(continent)
	{
		case 1:
			printf("***SELECT YOUR COUNTRY***\n1.PAKISTAN\n2.INDIA\n");
			scanf("%d",&country);
			switch(country)
			{
				case 1:
					printf("You selected:Country---->>PAKISTAN");
					break;
				case 2:
					printf("You selected:Country---->>INDIA");
					break;
				default:
					printf("Please  Select your Country!");
					break;
					
			}
			break;
	    case 2:
		    printf("***SELECT YOUR Country***\n1.GERMANY\n2.FRANCE\n");
			scanf("%d",&country);
			switch(country)
			{
				case 1:
					printf("You selected:Country---->>GERMANY");
					break;
				case 2:
						printf("You selected:Country---->>FRANCE");
					break;
				default:
					printf("Please  Select your Country!");
					break;
			}
			break;
	    default:
				
			printf("Please  Select your CONTINENT!");
			break;
   }

	return 0;
}
