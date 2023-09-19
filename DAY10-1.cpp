#include<stdio.h>

int mysqrt(int x)
{
	int left=1;
	int right=x/2+1;
	while(left<=right)
	{
		int mid=left+((right-left)>>1);
		if(mid>x/mid)
		{
			right=mid-1;
		}else if(mid<x/mid)
		{
			left=mid+1;
		}else if(mid==x/mid)
		{
			return mid;
		}
	}
	return right;
}
