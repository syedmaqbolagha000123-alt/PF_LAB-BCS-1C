/*Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4]*/
#include<stdio.h>
int main()
{
	int Number[100],RuningSum[100];
	int i,n;
	printf("Enter number of Element\n");
	scanf("%d", &n);
	for(i = 0; i<n; i++)
	{
		printf("Enter[%d]",i + 1);
		scanf("%d", &Number[i]);
	}
	    RuningSum[0] = Number[0];
	    for(i=1; i<n; i++)
	    {
	    	RuningSum[i] = RuningSum[i-1] + Number[i];
		}
		printf("\nRuning Sum Array\n");
		for(i=0; i<n; i++)
		{
			printf("%d\t", 	RuningSum[i]);
		}
}
