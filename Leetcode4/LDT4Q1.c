#include <stdio.h>
#include <stdlib.h>


int climbStairs(int n)

{
    if (n <= 1)
	{
        return 1;
    }
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main()
{
    int n;
    printf("Enter the number of steps: ");
    scanf("%d", &n);

    int ways = climbStairs(n);
    printf("Number of distinct ways to climb %d steps: %d\n", n, ways);

    return 0;
}

