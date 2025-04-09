class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int numOfPairs={0};

        //Iterate through all pairs of indices in nums.
        for(int i={0};i<nums.size();++i){
            for(int j={i+1};j<nums.size();++j){
                //Check if each pair of indices sums to less than target.
                if(nums[i]+nums[j]<target){
                    ++numOfPairs;
                }
            }
        }

        return numOfPairs;
    }
};