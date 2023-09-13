#include<stdio.h> 

void rotate(int* nums, int numsSize, int k)
{
    int newArr[numsSize];
    for(int i=0;i<numsSize;i++)
    {
        newArr[(i+k)%numsSize]=nums[i];
    }
    for(int j=0;j<numsSize;j++)
    {
        nums[j]=newArr[j];
    }
}
