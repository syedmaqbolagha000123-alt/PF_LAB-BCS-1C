#include <stdio.h>
#include <string.h>




void addBook(int isbns[], char titles[][50], float prices[], int quantities[], int *count) {
    int isbn, i;

    printf("\nEnter ISBN: ");
    scanf("%d", &isbn);

    
    for (i = 0; i < *count; i++) {
        if (isbns[i] == isbn) {
            printf("? Error: ISBN already exists!\n");
            return; 
        }
    }

    
    isbns[*count] = isbn;

    printf("Enter Title: ");
    scanf(" %[^\n]", titles[*count]); 

    printf("Enter Price: ");
    scanf("%f", &prices[*count]);

    printf("Enter Quantity: ");
    scanf("%d", &quantities[*count]);

   
    (*count)++; 
    printf("Book added successfully! Total books = %d\n", *count);
}




void processSale(int isbns[], int quantities[], float prices[], int count) {
    int isbn, qtySold, i, found = 0;

    printf("\nEnter ISBN to sell: ");
    scanf("%d", &isbn);

   
    for (i = 0; i < count; i++) {
        if (isbns[i] == isbn) {
            found = 1;

            printf("Enter number of copies sold: ");
            scanf("%d", &qtySold);

           
            if (quantities[i] >= qtySold) {
                quantities[i] -= qtySold; 
                printf(" Sale processed successfully!\n");
                printf("Remaining stock: %d\n", quantities[i]);
                printf("Total sale amount: Rs %.2f\n", prices[i] * qtySold);
            } else {
                printf(" Not enough stock available!\n");
            }
            break;
        }
    }

    if (!found)
        printf(" Book not found in inventory!\n");
}




void lowStockReport(int isbns[], char titles[][50], float prices[], int quantities[], int count) {
    int i, found = 0;

    printf("\n Low Stock Report (Quantity below 5)\n");
    printf("===============**********===============\n");

    for (i = 0; i < count; i++) {
        if (quantities[i] < 5) {
            printf("ISBN: %d | Title: %s | Price: %.2f | Quantity: %d\n",
                   isbns[i], titles[i], prices[i], quantities[i]);
            found = 1;
        }
    }

    if (!found)
        printf("All books have sufficient stock!\n");
}


int main() {
    
    int isbns[100];
    char titles[100][50];
    float prices[100];
    int quantities[100];
    int count = 0;  

    int choice;

    
    while (1) {
        printf("\n*========== Liberty Books Inventory ==========*\n");
        printf("1. Add New Book\n");
        printf("2. Process a Sale\n");
        printf("3. Low Stock Report\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(isbns, titles, prices, quantities, &count);
                break;

            case 2:
                processSale(isbns, quantities, prices, count);
                break;

            case 3:
                lowStockReport(isbns, titles, prices, quantities, count);
                break;

            case 4:
                printf("Exiting... Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

