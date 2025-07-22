int findMiddleIndex(int* nums, int numsSize) {
    int noIndexFound=-1;
    int middleIndex=0;
    int leftIndicesSum=0;
    int rightIndicesSum=0;

    for(int i=1; i < numsSize; ++i){
        rightIndicesSum+=nums[i];
    }

    for(int i=1; i < numsSize; ++i){
        if(leftIndicesSum == rightIndicesSum){
            return middleIndex;
        }

        leftIndicesSum+=nums[middleIndex];
        rightIndicesSum-=nums[i];
        ++middleIndex;
    }

    if(leftIndicesSum == rightIndicesSum){
        return middleIndex;
    }

    return noIndexFound;
}