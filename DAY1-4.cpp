#include<stdio.h>
#include<stdlib.h> 

int* runningSum(int* nums, int numsSize, int* returnSize) 
{
	int i,j;
	for(i=1;i<numsSize;i++)
	{
		nums[i]=nums[i]+nums[i-1];
	}
	*returnSize=numsSize;
	return nums;
}

int main()
{
	int nums[100];
	int numsSize,i;
	printf("�������鳤�ȣ�");
	scanf("%d",&numsSize);
	printf("��������Ԫ�أ�"); 
	for(i = 0; i < numsSize; i++)
	{
	scanf("%d", &nums[i]);
	}

    int returnSize;

    int* ans = runningSum(nums, numsSize, &returnSize);

    printf("[");
    for(i = 0; i < returnSize; i++)
	{
	printf("%d", ans[i]);
    if(i != returnSize - 1)
	{
	printf(",");
	}
    }
    printf("]");

    free(ans);

    return 0;

}
