#include<stdio.h>
#include<stdlib.h> 

int cmp(const void* x, const void* y)
{
    return ((int*)y)[0] - ((int*)x)[0];
}

char *s[] = {"Gold Medal", "Silver Medal", "Bronze Medal"};

char ** findRelativeRanks(int* score, int scoreSize, int* returnSize){
    int nums[scoreSize][2];
    for(int i = 0; i < scoreSize; i++)
    {
        nums[i][0] = score[i];
        nums[i][1] = i;
    }
    qsort(nums, scoreSize, sizeof(nums[0]), cmp);
    char** ans = (char**)malloc(sizeof(char*) * scoreSize);
    for(int i = 0; i < scoreSize; i++)
    {
        if(i < 3)
        {
            ans[nums[i][1]] = s[i];
        }
        else
        {
            ans[nums[i][1]] = (char*)malloc(sizeof(char) * 8);
            sprintf(ans[nums[i][1]], "%d", i + 1);
        }
    }
    *returnSize = scoreSize;
    return ans;
}

