/*Use a nested ternary operator to find the smallest of three numbers*/
#include<stdio.h>
int main()
{
	int N1,N2,N3,smallest;
	printf("Enter Three Numbers to Find out Smallest one among them!\n");
	scanf("%d %d %d",&N1,&N2,&N3);
	printf("\n%d\t%d\t%d\n",N1,N2,N3);
	smallest=(N1<N2)?((N1<N3)?N1:N3):((N2<N3)?N2:N3);
	printf("\nThe Smallest Number: %d\n",smallest);
	return 0;
}
