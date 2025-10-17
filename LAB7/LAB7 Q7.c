/*7) A user enters a text containing letters, digits, spaces, and special characters. You want to create a
program that extracts only the digits from the input and stores them in an array. Then, calculate the sum
of all extracted digits and display it.*/
#include<stdio.h>

int main(void)
{
	char text[100];
	int DIGITS[100];
	int i = 0,j = 0,sum = 0;
	printf("Enter Text(Including A-Z,Numbers, Special Characters,and Spaces):\n");
	scanf("%[^\n]", text);
	while(text[i] != '\0')
	{
		if(text[i]>= '0' &&  text[i]<= '9')
		{
			DIGITS[j] = text[i] - '0';
			sum += DIGITS[j];
			j++;
			
		}
		i++;
	}
	printf("\n Extracted Numbers:\n ");
	for( i =0; i <j; i++)
	{
		printf("%d\t", DIGITS[i]);
	}
	printf("\n\nSum of Number from provided Text: %d", sum);
	return 0;
}
