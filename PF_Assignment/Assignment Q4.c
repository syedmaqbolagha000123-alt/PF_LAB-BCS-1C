#include <stdio.h>

#define SIZE 5  


void push(int stack[], int *top, int maxSize)
 {
    int value;
    if (*top == maxSize - 1) 
	{
        printf("\nStack Overflow! Cannot push more elements.\n");
        return; 
    }
    printf("Enter value to PUSH: ");
    scanf("%d", &value);
    (*top)++;
    stack[*top] = value;
    printf("%d pushed successfully. (top is now %d)\n", value, *top);
}
void pop(int stack[], int *top) 
{  
    if (*top == -1) {
        printf("\nStack Underflow! Nothing to pop.\n");
        return;
    }
    printf("Popped element: %d\n", stack[*top]);
    (*top)--;
    printf("(top is now %d)\n", *top);
}
void peek(int stack[], int top)
 {
    
    if (top == -1) {
        printf("\n Stack is empty! No top element.\n");
    } else {
        
        printf("Top element: %d (at index %d)\n", stack[top], top);
    }
}
void display(int stack[], int top) 
{
    if (top == -1) 
	{ 
       printf("\nStack is empty!\n");
        return;
    }
    printf("\nStack elements (Top Bottom):\n");
    int i;
    for ( i = top; i >= 0; i--) {
        printf("Index %d : %d\n", i, stack[i]);
    }
}
int main() 
{
    int stack[SIZE];    
    int top = -1;       
    int choice;         

   
    while (1) {
        printf("\n*======= STACK MENU =======*\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n"); 
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                
                push(stack, &top, SIZE);
                break;

            case 2:
               
                pop(stack, &top);
                break;

            case 3:
                
                peek(stack, top);
                break;

            case 4:
                
                display(stack, top);
                break;

            case 5:
                printf("Exiting program... Goodbye!\n");
                return 0; 

            default:
                printf("Invalid choice! Please enter 1-5.\n");
        }
    }

   
    return 0;
}

