#include<stdio.h>

int searchInsert(int* nums,int numsSize,int target)
{
	int left=0;
	int right=numsSize-1;
	while(left<=right)
	{
		int mid=((right-left)>>1)+left;
		if(nums[mid]<target)
		{
			left=mid+1;
		}else{
			right=mid-1;
		}
	}
	return left;
}
