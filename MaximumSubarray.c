#define max(a, b) (a>b ? a:b)
int maxSubArray(int* nums, int numsSize) {
    int maxEndingHere, maxSoFar;
    maxEndingHere = maxSoFar = *nums;
    
    int i;
    for (i=1; i<numsSize; ++i) {
        maxEndingHere = max(*(nums+i), maxEndingHere+*(nums+i));
        maxSoFar = max(maxSoFar, maxEndingHere);
    }
    
    return maxSoFar;
}
