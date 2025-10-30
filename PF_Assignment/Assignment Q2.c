#include <stdio.h>
#include <string.h>



void addCustomer(char name[], char cnic[]) 
{
    printf("Enter customer name: ");
    scanf(" %[^\n]", name);  

    printf("Enter customer CNIC: ");
    scanf(" %[^\n]", cnic);

    printf(" Customer information added successfully!\n");
}


void addItem(int code[], int stock[], float price[], int *count) 
{
    printf("\nEnter product code: ");
    scanf("%d", &code[*count]);

    printf("Enter stock quantity: ");
    scanf("%d", &stock[*count]);

    printf("Enter product price: ");
    scanf("%f", &price[*count]);

    (*count)++; 
    printf(" Product added successfully!\n");
}



void processSale(int code[], int stock[], float price[],int cartCode[], int cartQty[], int *cartCount, int count)	
{
    int pcode, qty, found = 0,i;

    printf("\nEnter product code to purchase: ");
    scanf("%d", &pcode);

    for (i = 0; i < count; i++) {
        if (code[i] == pcode) {
            found = 1;
            printf("Enter quantity: ");
            scanf("%d", &qty);

            if (qty <= stock[i]) {
                cartCode[*cartCount] = pcode;
                cartQty[*cartCount] = qty;
                (*cartCount)++;
                stock[i] -= qty; 
                printf("Added to cart successfully!\n");
            } else {
                printf(" Not enough stock available!\n");
            }
            break;
        }
    }

    if (!found)
        printf(" Product not found in inventory!\n");
}


float calculateTotal(int code[], float price[],int cartCode[], int cartQty[], int cartCount, int count) 
{
    float total = 0;
    int i,j;
    for ( i = 0; i < cartCount; i++) {
        for ( j = 0; j < count; j++) {
            if (cartCode[i] == code[j]) {
                total += price[j] * cartQty[i];
            }
        }
    }
    return total;
}


float applyDiscount(float total)
 {
    char promo[20];
    printf("\nEnter promo code (if any): ");
    scanf(" %[^\n]", promo);

    if (strcmp(promo, "Eid2025") == 0) 
	{
        printf(" Promo applied! 25%% discount.\n");
        total = total * 0.75;
    } else {
        printf("Invalid promo code. No discount applied.\n");
    }
    return total;
}




void displayInvoice(char name[], char cnic[], float finalBill)
 {
    printf("\n========== INVOICE ==========\n");
    printf("Customer Name : %s\n", name);
    printf("CNIC          : %s\n", cnic);
    printf("Final Bill    : Rs %.2f\n", finalBill);
    printf("=============================\n");
}




int main() {
    // Arrays for inventory
    int code[100], stock[100];
    float price[100];
    int count = 0; // total number of products

    // Arrays for shopping cart
    int cartCode[50], cartQty[50];
    int cartCount = 0;

    // Customer info
    char name[50], cnic[25];
    int choice;
    float total = 0, finalBill = 0;

    while (1) {
        printf("\n=*=*=*=*SUPERMARKET MENU*=*=*=\n");
        printf("1. Add Customer Information\n");
        printf("2. Add New Product\n");
        printf("3. Process Sale (Add to Cart)\n");
        printf("4. Calculate Total Bill\n");
        printf("5. Display Invoice\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addCustomer(name, cnic);
                break;

            case 2:
                addItem(code, stock, price, &count);
                break;

            case 3:
                processSale(code, stock, price, cartCode, cartQty, &cartCount, count);
                break;

            case 4:
                total = calculateTotal(code, price, cartCode, cartQty, cartCount, count);
                finalBill = applyDiscount(total);
                printf("Total (after discount if any): Rs %.2f\n", finalBill);
                break;

            case 5:
                displayInvoice(name, cnic, finalBill);
                break;

            case 6:
                printf("Exiting system... \n");
                return 0;

            default:
                printf(" Invalid choice! Try again.\n");
        }
    }
}

