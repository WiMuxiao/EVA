#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b)
{
    return *(int*)a - *(int*)b;
}
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes)
{
    *returnSize = 0;
    if(numsSize < 3)
        return NULL;
    qsort(nums,numsSize,sizeof(int),cmp);
    int **ans = (int **)malloc(sizeof(int *) * numsSize  *numsSize);
    *returnColumnSizes = (int *)malloc(sizeof(int) * numsSize * numsSize);
    int i,j,k,sum;
 
    int left   = 0;
    int middle = 0;
    int right  = 0;
    for(left = 0; left< numsSize - 2; left++)
    {
        if(nums[left] > 0)
        {         
            return ans;
        }
 
        
        if(left > 0 && nums[left] == nums[left-1])
            continue;
        middle = left + 1;
        right  = numsSize - 1;
 
        while(middle < right)
        {
            sum = nums[left] + nums[middle] + nums[right];
 
            if(sum == 0)
            {
                ans[*returnSize] = (int*)malloc(sizeof(int)*3);
                (*returnColumnSizes)[*returnSize] = 3;
                ans[*returnSize][0] = nums[left];
                ans[*returnSize][1] = nums[middle];
                ans[*returnSize][2] = nums[right];
                *returnSize += 1;
                while(middle < right && nums[middle] == nums[++middle]);
                while(middle < right && nums[right] == nums[--right]);
            }
            else if(sum > 0)
            {
               right--;
            }
            else
            {          
                middle++;
            }
        }
    }
    return ans;
}
