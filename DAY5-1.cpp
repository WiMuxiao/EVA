#include <stdio.h>
#include<stdlib.h>
#define MAX 10000

int Cmp(int *a, int *b) 
{
    int val_a = *a;
    int val_b = *b;
    while (val_a / 10 != 0)
	{
        val_a = val_a / 10;
    }
    while (val_b / 10 != 0)
	{
        val_b = val_b / 10;
    }
    if (val_a != val_b)
	{
        return val_a > val_b;
    } else
	{
        val_a = *a;
        val_b = *b;
        int stack_a[50] = {0};
        int top_a = -1;
        int stack_b[50] = {0};
        int top_b = -1;
        while (val_a != 0)
		{
            stack_a[++top_a] = val_a % 10;
            val_a /= 10;
        }
        while (val_b != 0)
		{
            stack_b[++top_b] = val_b % 10;
            val_b /= 10;
        }
        int sum = top_a + top_b;
        int cycle = (top_a == top_b) ? top_a+1 : sum+2;
        int j = 0;
        while (j < cycle)
		{
            int A = (j <= top_a) ? stack_a[top_a-j] : stack_b[top_b - (j-top_a) + 1];
            int B = (j <= top_b) ? stack_b[top_b-j] : stack_a[top_a - (j-top_b) + 1];
            if (A != B)
			{
                return A-B;
            }
            j++;
        }
        return 0;
    }
}

char* minNumber(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), Cmp);
    int stack[100] = {0};
    int top = -1;
    char *ret = (char*)malloc(sizeof(char) * MAX);
    int j = 0;
    for (int i = 0; i < numsSize; i++)
	{
        printf("%d ", nums[i]);
        int temp = nums[i];
        if (temp == 0)
		{
            ret[j++] = '0';
        }
        top = -1;
        while (temp != 0)
		{
            stack[++top] = temp % 10;
            temp /= 10;
        }
        while (top != -1)
		{
            ret[j++] = stack[top--] + '0';
        }
    }
    ret[j] = 0;
    return ret;
}
