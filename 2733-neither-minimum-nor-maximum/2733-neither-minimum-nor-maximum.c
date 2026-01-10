int findNonMinOrMax(const int* nums, const int numsSize) {
    int maximumValue = nums[0];
    int minimumValue = nums[0];
    int neitherMinimumNorMaximumValueInNums = nums[0];

    for(int i = 1; i < numsSize; ++i){
        if(nums[i] < minimumValue){
            neitherMinimumNorMaximumValueInNums = minimumValue;    
            minimumValue = nums[i];
        }
        else if(nums[i] > maximumValue){    
            neitherMinimumNorMaximumValueInNums = maximumValue;    
            maximumValue = nums[i];
        }
        else{
            return nums[i];
        }
    }

    if((neitherMinimumNorMaximumValueInNums != minimumValue) && (neitherMinimumNorMaximumValueInNums != maximumValue)){
        return neitherMinimumNorMaximumValueInNums;
    }

    const int failedToFindNonMinimumOrMaximum = -1;
    return failedToFindNonMinimumOrMaximum;
}