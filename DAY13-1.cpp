#include<stdio.h>
#include<stdlib.h>


int removeElement(int* nums, int numsSize, int val)
{
    int *temp = (int*)malloc(sizeof(int)*numsSize);
    int j = 0;  
    for(int i = 0;i<numsSize;i++)
	{
        if(val != nums[i]){
            temp[j++] = nums[i];
        }
    }
    for(int i = 0;i<j;i++)
	{
        nums[i] = temp[i];
    }
    return j;
}

