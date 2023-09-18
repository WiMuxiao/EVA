#include<stdio.h> 

void Swap(int *nums, int idx1, int idx2)
{
    int tmp = nums[idx1];
    nums[idx1] = nums[idx2];
    nums[idx2] = tmp;
}
int* sortArray(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;
    for (int i = 0; i < numsSize - 1; ++i)
	{
        int midIdx = i;
        for (int j = i + 1; j < numsSize; ++j)
		{
            if (nums[j] < nums[midIdx])
			{
                midIdx = j;
            }
        }
        Swap(nums, i, midIdx);
    }

    return nums;
}


