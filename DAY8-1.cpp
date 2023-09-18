#include<stdio.h>
#include<stdlib.h> 
#include<string.h> 


int cmpFun(const void *a, const void *b)
{
    return( *(int *)a - *(int *)b );
}

int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize)
{
    int *flag = (int *)malloc(arr1Size * sizeof(int));
    memset(flag, 0, arr1Size * sizeof(int));

    int *res = (int *)malloc(arr1Size * sizeof(int));
    memset(res, 0, arr1Size * sizeof(int));

    qsort(arr1, arr1Size,sizeof(int), cmpFun);
    int cnt = 0;
    for(int i = 0; i<arr2Size; i++){
        for(int k = 0; k < arr1Size; k++ ){
            if(arr2[i] == arr1[k] && flag[k] == 0){
                res[cnt] = arr1[k];
                cnt++;
                flag[k] = 1;
            }
        }
    }

    for(int k = 0; k < arr1Size; k++ ){
        if(flag[k] == 0){
            res[cnt] = arr1[k];
            cnt++;
            flag[k] = 1;
        }
    }

    free(flag);
    *returnSize = arr1Size;
    return res;
}
