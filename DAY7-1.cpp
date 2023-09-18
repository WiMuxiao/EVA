#include<stdio.h> 

void sortColors(int* nums, int numsSize)
{
	int a=0,b=0,c=0;
	int i;
	for(i=0;i<numsSize;i++)
	{
		if(nums[i]==0)
		{
			a++;
		}else if(nums[i]==1)
		{
			b++;
		}else if(nums[i]==2)
		{
			c++;
		}
	}
	for(i=0;i<a;i++)
	{
		nums[i]=0;
	}
	for(i=a;i<a+b;i++)
	{
		nums[i]=1;
	}
	for(i=a+b;i<a+b+c;i++)
	{
		nums[i]=2;
	}
}
