#include <stdio.h>

int main(void)
{
    float temp[7][3]; 
    float sum, average;
    int i, j;

    printf("Enter temperatures for 7 days (Morning, Afternoon, Night):\n\n");

    
    for(i = 0; i < 7; i++) {
        printf("Day %d:\n", i + 1);
        for(j = 0; j < 3; j++) {
            if(j == 0)
                printf("  Morning: ");
            else if(j == 1)
                printf("  Afternoon: ");
            else
                printf("  Night: ");
            scanf("%f", &temp[i][j]);
        }
        printf("\n");
    }

   
    printf("\n*** Temperature Table ***\n");
    printf("Day\tMorning\t\tAfternoon\tNight\n");
    for(i = 0; i < 7; i++) {
        printf("%d\t", i + 1);
        for(j = 0; j < 3; j++) {
            printf("%.2f\t\t", temp[i][j]);
        }
        printf("\n");
    }

    
    printf("\n Average Temperature per Day \n");
    for(i = 0; i < 7; i++) {
        sum = 0;
        for(j = 0; j < 3; j++) {
            sum += temp[i][j];
        }
        average = sum / 3;
        printf("Day %d Average Temperature: %.2fC\n", i + 1, average);
    }

    return 0;
}

