class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> disappearedNumbers;
        //For each number in nums mark the value at index [number - 1] as negative.
        for(int i{0};i<nums.size();++i){
            if(nums[abs(nums[i])-1]>0){
                nums[abs(nums[i])-1]*=-1;
            }
        }

        //Add all indices in nums with positive numbers to vector disappearedNumbers.
        for(int i{0};i<nums.size();++i){
            if(nums[i]>0){
                disappearedNumbers.push_back(i+1);
            }
        }

        return disappearedNumbers;
    }
};