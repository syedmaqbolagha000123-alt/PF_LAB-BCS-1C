#include <stdio.h>

#define ROWS 3
#define COLS 3



void updateSector(int grid[ROWS][COLS]) {
    int row, col, bit, action;
    printf("\nEnter sector coordinates (row col): ");
    scanf("%d %d", &row, &col);

    if (row >= ROWS || col >= COLS || row < 0 || col < 0) {
        printf("Invalid coordinates!\n");
        return;
    }

    printf("Select status to modify:\n");
    printf("0 - Power Status (ON/OFF)\n");
    printf("1 - Overload Warning\n");
    printf("2 - Maintenance Required\n");
    printf("Enter bit number: ");
    scanf("%d", &bit);

    printf("Enter action (1 = Set / 0 = Clear): ");
    scanf("%d", &action);

    if (action == 1)
        grid[row][col] |= (1 << bit); 
    else
        grid[row][col] &= ~(1 << bit); 
    printf(" Sector [%d][%d] updated. New value = %d\n", row, col, grid[row][col]);
}




void querySector(int grid[ROWS][COLS]) {
    int row, col;
    printf("\nEnter sector coordinates (row col): ");
    scanf("%d %d", &row, &col);

    if (row >= ROWS || col >= COLS || row < 0 || col < 0) {
        printf("Invalid coordinates!\n");
        return;
    }

    int value = grid[row][col];

    printf("\n--- Sector [%d][%d] Status ---\n", row, col);
    printf("Power Status        : %s\n", (value & 1) ? "ON" : "OFF");
    printf("Overload Warning    : %s\n", (value & (1 << 1)) ? "YES (Overloaded)" : "Normal");
    printf("Maintenance Required: %s\n", (value & (1 << 2)) ? "YES" : "NO");
}



void runDiagnostic(int grid[ROWS][COLS]) {
    int overloaded = 0, maintenance = 0,i,j;

    for ( i = 0; i < ROWS; i++) {
        for ( j = 0; j < COLS; j++) {
            if (grid[i][j] & (1 << 1)) overloaded++;
            if (grid[i][j] & (1 << 2)) maintenance++;
        }
    }

    printf("\n*========== SYSTEM DIAGNOSTIC ==========*\n");
    printf("Total Overloaded Sectors    : %d\n", overloaded);
    printf("Total Maintenance Required  : %d\n", maintenance);
    printf("*=======================================*\n");
}


int main() {
    int grid[ROWS][COLS] = {0};  
    int choice;

    while (1) {
        printf("\n====== IESCO Power Grid Menu ======\n");
        printf("1. Update Sector Status\n");
        printf("2. Query Sector Status\n");
        printf("3. Run System Diagnostic\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                updateSector(grid);
                break;
            case 2:
                querySector(grid);
                break;
            case 3:
                runDiagnostic(grid);
                break;
            case 4:
                printf("Exiting system...\n");
                return 0;
            default:
                printf("? Invalid choice! Try again.\n");
        }
    }
}

