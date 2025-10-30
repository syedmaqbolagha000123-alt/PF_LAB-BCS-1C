#include <stdio.h>
#include <string.h>


void reverseString(char str[]) {
    int len = strlen(str),i;
    for ( i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}


void toggleBits(char str[]) 
{
	int i;
    for (i = 0; str[i] != '\0'; i++) {
       
        str[i] = str[i] ^ (1 << 1);  
        str[i] = str[i] ^ (1 << 4);  
    }
}


void encode(char msg[]) {
    reverseString(msg);   
    toggleBits(msg);      
    printf("\nEncoded message:\n%s\n", msg);
}


void decode(char msg[]) {
    toggleBits(msg);      
    reverseString(msg);   
    printf("\nDecoded message:\n%s\n", msg);
}


int main() {
    char message[200]; 
    int choice;

    while (1) {
        printf("\n===== TCS Secure Message Tool =====\n");
        printf("1. Encode Message\n");
        printf("2. Decode Message\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                printf("\nEnter message to encode: ");
                fgets(message, sizeof(message), stdin);
                message[strcspn(message, "\n")] = '\0'; 
                break;

            case 2:
                printf("\nEnter message to decode: ");
                fgets(message, sizeof(message), stdin);
                message[strcspn(message, "\n")] = '\0';
                decode(message);
                break;

            case 3:
                printf("Exiting system...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

