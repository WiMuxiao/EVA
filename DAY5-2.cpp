#include<stdio.h>

void moveZeroes(int* nums,int numsSize)
{
	int t;
	for(int i=0;i<numsSize-1;i++)
	{
		for(int j=i+1;j<numsSize;j++)
		{
			if(nums[i]==0)
			{
				t=nums[i];
				nums[i]=nums[j];
				nums[j]=t;
			}
			else
			break;
		}
	}
 } 
