int sumOfSquares(int* nums, int numsSize) {
    int sumOfSquares=0;

    for(int i=1; i<numsSize+1; ++i){
        if(numsSize%i==0){
            sumOfSquares+=(nums[i-1] * nums[i-1]);
        }
    }

    return sumOfSquares;
}