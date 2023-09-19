#include<stdio.h>


int search(int* nums, int numsSize, int target){
    if(numsSize==0)
        return -1;
    int low = 0;
    int high = numsSize-1;
    int mid;
    while(low <= high){
        mid = low+((high-low)>>1);
        if(nums[mid] > nums[0])
            low = mid+1;
        else if(nums[mid] < nums[0] && nums[mid-1] > nums[0])
            break;
        else
            high = mid-1;
    }
    if(target == nums[mid]){
        return mid;
    }
    if(mid==0 || target < nums[0]){
        low = mid+1;
        high = numsSize-1;
    }
    else{
        low = 0;
        high = mid -1;
    }
    
    while(low <= high){
        mid = low+((high-low)>>1);
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] > target)
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}

