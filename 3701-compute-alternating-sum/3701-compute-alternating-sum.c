int alternatingSum(int* nums, int numsSize) {
    int totalSum = 0;

    for(int i = 0; i < numsSize; ++i){
        if(i % 2 == 0){
            totalSum += nums[i];
        }
        else{
            totalSum -= nums[i];
        }
    }

    return totalSum;
}