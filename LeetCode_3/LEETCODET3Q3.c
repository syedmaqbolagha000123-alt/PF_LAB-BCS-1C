#include <stdio.h>

void rotate(int** matrix, int matrixSize, int* matrixColSize)
{

    int i,j;
    for ( i = 0; i < matrixSize; i++)
	{
        for (j = i + 1; j < matrixSize; j++)
		{
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    
    for (i = 0; i < matrixSize; i++)
	 {
        int left = 0, right = matrixColSize[i] - 1;
        while (left < right)
		 {
            int temp = matrix[i][left];
            matrix[i][left] = matrix[i][right];
            matrix[i][right] = temp;
            left++;
            right--;
        }
    }
}

int main()
 {
    int n,i,j;

    printf("Enter matrix size (n x n): ");
    scanf("%d", &n);

    
    static int matrixStorage[20][20];

 
    int* matrix[20];

  
    int colSize[20];

   
    for ( i = 0; i < n; i++)
   {
        matrix[i] = matrixStorage[i];
        colSize[i] = n;
    }

 
    printf("Enter %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++)
	 {
        for ( j = 0; j < n; j++)
		{
            scanf("%d", &matrixStorage[i][j]);
        }
    }

    
    rotate(matrix, n, colSize);

   
    printf("\nRotated Matrix:\n");
    for ( i = 0; i < n; i++)
	{
        for (j = 0; j < n; j++)
       {
            printf("%d ", matrixStorage[i][j]);
       }
        printf("\n");
    }

    return 0;
}

