#include<stdio.h>


double findMaxAverage(int* nums, int numsSize, int k)
{
    double maxTotal=-300000000,total=0,maxAverage=0;
    for (int j=0;j<=numsSize-k;j++)
    {
        for(int i=0;i<k;i++)
        {
            total+=nums[j+i];
        }
        if(maxTotal<total)maxTotal=total;
        total=0;
    }
    maxAverage=maxTotal/k;
    return maxAverage;
}


