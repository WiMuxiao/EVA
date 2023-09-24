#include<stdio.h>


#define MAX(a, b) ((a) > (b) ? (a) : (b))
int longestOnes(int* A, int ASize, int K){
    int ans = 0;
    int left = 0;
    int right = 0;
    int usedK = 0;
    int pos = 0;
    while (right < ASize) {
        while (right < ASize && usedK < K) {
            if (A[right] == 0) {
                ++usedK;
            }
            ++right;
        }
        while (right < ASize && A[right] == 1) {
            ++right;
        }
        ans = MAX(ans, right - left);
        if (right == ASize) {
            return ans;
        }
        while (left < right && A[left] == 1) {
            ++left;
        }
        if (left < right) {
            ++left;
            --usedK;
        } else {
            ++left;
            ++right;
        }
    }
    return ans;
}
