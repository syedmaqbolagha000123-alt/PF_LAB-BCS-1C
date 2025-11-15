#include <stdio.h>
#include <string.h>

void ReverseStr(char Arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        char temp = Arr[left];
        Arr[left] = Arr[right];
        Arr[right] = temp;
        left++;
        right--;
    }

    printf("Reversed String: %s", Arr);
}

int main()
{
    char arr[100];

    printf("Enter Your Name\n");
    scanf(" %[^\n]", arr);

    int len = strlen(arr);

    ReverseStr(arr, len);
}

