#include<stdio.h>

int search(int nums[],int numsSize,int target)
{
	int left=0;
	int right=numsSize-1;
	while(left<=right)
	{
		int mid=left+(right-left)/2;
		int numsMid=nums[mid];
		if(numsMid<target)
		{
			left=mid+1;
		}else if(target<numsMid)
		{
			right=mid-1;
		}
		else return mid;
	}
	return -1;
 } 
 
 int main()
 {
 	int nums[]={-1,0,3,5,9,12};
 	int numsSize=sizeof(nums)/sizeof(nums[0]);
 	int target=0;
 	scanf("%d",&target);
 	printf("%d",search(nums,numsSize,target));
 	return 0;
 }
