#include <stdio.h>

int main(void)
{
    int marks[5][3] = {
        {80, 75, 90},
        {60, 70, 65},
        {78, 82, 88},
        {92, 85, 89},
        {55, 60, 58}
    };

    int i, j;
    int total;
    float avg_subject[3] = {0};

    // ?? Display marks table
    printf("Marks Table:\n");
    printf("Student\tSub1\tSub2\tSub3\n");
    for(i = 0; i < 5; i++) {
        printf("%d\t", i + 1);
        for(j = 0; j < 3; j++) {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
    }

    
    printf("\nTotal Marks of Each Student:\n");
    for(i = 0; i < 5; i++) {
        total = 0;
        for(j = 0; j < 3; j++) {
            total += marks[i][j];
        }
        printf("Student %d: %d\n", i + 1, total);
    }

    printf("\nAverage Marks of Each Subject:\n");
    for(j = 0; j < 3; j++) {
        for(i = 0; i < 5; i++) {
            avg_subject[j] += marks[i][j];
        }
        avg_subject[j] /= 5.0;
        printf("Subject %d: %.2f\n", j + 1, avg_subject[j]);
    }

    
    
    return 0;
}

