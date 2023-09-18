#include<stdio.h> 


bool containsDuplicate(int* nums, int numsSize)
{
    int i,j,temp;
    for(i=0;i<numsSize;i++)
        for(j=0;j<numsSize-1-i;j++)
        {
            if(nums[j]>nums[j+1])
            {
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
       
     for(i = 0;i<numsSize;i++)
     {
        printf("%d",nums[i]);
      } 
    for(i=0;i<numsSize-1;i++)
    {    
        if(nums[i]==nums[i+1])
            return true;
        else
            continue;       
    
    } 
    return false;
}
