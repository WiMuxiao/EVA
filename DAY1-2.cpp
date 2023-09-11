#include<stdio.h>
#include<malloc.h>
int main()
{
      int *ans;
      int* nums;
	  int numsSize;
	  int* returnSize;
	  ans=(int*)malloc(sizeof(nums)*numsSize*2);
    int i=0;
    for(i;i<numsSize*2;++i)
    {
        if(i>=numsSize)
        {
            ans[i]=nums[i-numsSize];
        }
        else
        {
            ans[i]=nums[i];
        }
    }
    *returnSize=numsSize*2;
    printf("%d\n",ans);
    return 0;
}
