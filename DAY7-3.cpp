#include<stdio.h> 
#include <assert.h>

void Swap(int* p1, int* p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void AdjustDown(int* a,int k, int parent)
{
    assert(a);
    int child = parent*2+1;
    while(child<k)
    {
        if(child+1<k && a[child+1]>a[child])
        {
            child++;
        }
        if(a[child]>a[parent])
        {
            Swap(&a[child],&a[parent]);
            parent = child;
            child = parent*2+1;
        }
        else
        {
            break;
        }
    }
}

int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize){
    *returnSize = k;
    for(int i = (arrSize-2)/2;i>=0; i--)
    {
        AdjustDown(arr,arrSize,i);
    }
    for(int i = arrSize - 1; i > 0; i--)
    {
        Swap(&arr[0],&arr[i]);
        AdjustDown(arr,i,0);
    }

    return arr;
}
