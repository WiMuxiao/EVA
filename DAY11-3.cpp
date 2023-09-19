#include<stdio.h>

int findMin(int* nums, int numsSize){
    int left = 0;
    int right = numsSize - 1;
    int ans = 0;
    if(nums[left] < nums[right])
        return nums[left];
    while(left < right){
        int mid = left + (right - left) / 2;
        if(nums[mid] >= nums[0])
		{
            left = mid + 1;
            ans = left;
        }
        else
            right = mid;
    }
    return nums[ans];
}
