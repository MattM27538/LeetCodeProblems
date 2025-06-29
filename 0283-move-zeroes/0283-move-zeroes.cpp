bool stableSortSwap(const int num1,const int num2){
    //If nums1==0 swap positions with nums 2.
    if(num1==0){
        return false;
    }

    //If nums2==0 don't swap.
    if(num2==0){
        return true;
    }

    return false;
}

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       std::stable_sort(nums.begin(),nums.end(),stableSortSwap);
    }
};