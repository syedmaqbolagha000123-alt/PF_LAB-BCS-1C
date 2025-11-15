#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int nonzero = 0; 
  int i;
    for ( i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            
            int temp = nums[i];
            nums[i] = nums[nonzero];
            nums[nonzero] = temp;

            nonzero++;
        }
    }
}

int main() {
    int nums[100], size;
  int i;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d numbers:\n", size);
    for ( i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    moveZeroes(nums, size);

    printf("\nArray after moving zeroes:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}

