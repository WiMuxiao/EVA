#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define BUCKET_SIZE 100000


typedef struct NumBucket {
    int *bucket;
    int bucketSize;
} NumBucket;

#define MAX_NUM(a, b) ((a) > (b) ? (a) : (b))

int getArrMaxNum(int *nums, int numsSize)
{
    int result = nums[0];
    for (int i = 0; i < numsSize; i++) {
        result = MAX_NUM(result, nums[i]);
    }
    return result;
}

int getDecimalNumWidth(int num)
{
    if (num <= 0) {
        return 1;
    }
    int result = 0;
    while(num > 0) {
        result++;
        num = num / 10;
    }
    return result;
}

int getNumPos(int num, int pos)
{
    return (num / (int)pow(10, pos)) % 10;
}

int *createResultArr(int *originalNums, int numsSize)
{
    int *resultArr = (int *)malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        resultArr[i] = originalNums[i];
    }
    return resultArr;
}

NumBucket *createNumBucket(int numsSize)
{
    NumBucket *numBucket = (NumBucket *)malloc(10 * sizeof(NumBucket));
    for (int i = 0; i < 10; i++) {
        numBucket[i].bucketSize = 0;
        numBucket[i].bucket = (int *)malloc(numsSize * sizeof(int));
    }
    return numBucket;
}

void addToBucket(int *nums, int numsSize, int pos, NumBucket *numBucket)
{
    for (int i = 0; i < numsSize; i++) {
        int currNum = nums[i];
        int currNumPos = getNumPos(currNum, pos);
        NumBucket *currBucket = numBucket + currNumPos;
        currBucket->bucket[currBucket->bucketSize] = currNum;
        (currBucket->bucketSize)++;
    }
}

void readBucket(int *nums, NumBucket *numBucket)
{
    int count = 0;
    for (int i = 0; i < 10; i++) {
        NumBucket *currBucket = numBucket + i;
        for (int j = 0; j < currBucket->bucketSize; j++) {
            nums[count] = currBucket->bucket[j];
            count++;
        }
    }
}

void clearBucket(NumBucket *numBucket)
{
    for (int i = 0; i < 10; i++) {
        NumBucket *currBucket = numBucket + i;
        currBucket->bucketSize = 0;
    }
}

void printNumArr(int *nums, int numsSize)
{
    for (int i = 0; i < numsSize; i++) {
        printf("%d, ", nums[i]);
    }
    printf("\n");
}

int maximumGap(int* nums, int numsSize)
{
    NumBucket *numBucket = createNumBucket(numsSize);
    int maxNum = getArrMaxNum(nums, numsSize);
    int numWidth = getDecimalNumWidth(maxNum);
    int *resultArr = createResultArr(nums, numsSize);
    for (int i = 0; i < numWidth; i++) {
        addToBucket(resultArr, numsSize, i, numBucket);
        readBucket(resultArr, numBucket);
        clearBucket(numBucket);
    }
    int result = 0;
    for (int i = 0; i < numsSize - 1; i++) {
        result = MAX_NUM(result, abs(resultArr[i] - resultArr[i + 1]));
    }
    return result;
}
