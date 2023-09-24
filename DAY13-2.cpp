#include<stdio.h> 


int removeDuplicates(int* nums, int numsSize)
{
    for(int i = 0;i<numsSize-1;i++){
        if(nums[i] == nums[i+1]){
            for(int j = i;j<numsSize-1;j++){
                 nums[j] = nums[j+1];				
            }   
			numsSize--;
			i--;
        }
        
    }
    return numsSize;
}

