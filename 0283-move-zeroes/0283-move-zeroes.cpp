bool stableSortSwap(const int num1,const int num2){
    //If nums1==0 swap positions with nums 2.
    if(num1==0){
        return false;
    }

    if(num2==0){
        return true; //Don't swap.
    }

    return false;
}

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       std::stable_sort(nums.begin(),nums.end(),stableSortSwap);
    }
};