#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* numbers,int numbersSize,int target,int* returnSize)
{
	int* arr=(int*)malloc(sizeof(int)*2);
	*returnSize=2;
	for(int i=0;i<numbersSize;i++)
	{
		for(int j=i+1;j<numbersSize;j++)
		{
			if(numbers[i]+numbers[j]=target)
			{
				arr[0]=i+1,arr[1]=j+1;
				return arr;
			}
		}
	}
	arr[0]=-1,arr[1]=-1;
	return arr;
}
