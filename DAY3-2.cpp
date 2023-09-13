#include<stdio.h> 
#define maxn 100010

int pivotIndex(int* nums, int numsSize)
{
    int i;
	int sum[maxn];
    for(i = 0; i < numsSize; ++i) 
	{
        sum[i] = nums[i];
        if(i) 
            sum[i] += sum[i-1]; 
    }
    if(sum[numsSize-1] - sum[0] == 0)
	 {
        return 0;
    }
    for(i = 1; i < numsSize; ++i)
	 {
        if( sum[i-1] == sum[numsSize-1] - sum[i] ) 
		{
            return i;
        }
    }
    return -1;
}

