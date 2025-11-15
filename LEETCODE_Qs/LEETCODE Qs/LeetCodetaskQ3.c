#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0)
	 {
        return 0;
    }

    int j = 0;  

    for (int i = 1; i < numsSize; i++) 
	{
        if (nums[j] != nums[i]) {
            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;  
}

int main() {
    int nums[100], size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d sorted numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    int newSize = removeDuplicates(nums, size);

    printf("\nNew size after removing duplicates: %d\n", newSize);
    printf("Array after removing duplicates:\n");

    for (int i = 0; i < newSize; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}

