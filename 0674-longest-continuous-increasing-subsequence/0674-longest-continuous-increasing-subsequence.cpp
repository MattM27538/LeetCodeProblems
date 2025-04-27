class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        auto longestIncreasingSequence{1};
        auto currentSequenceLength{1};

        for(int i{1};i<nums.size();++i){
            if(nums[i]>nums[i-1]){
                ++currentSequenceLength;
            }

            if(nums[i]<=nums[i-1] || i==nums.size()-1){
                longestIncreasingSequence=max(longestIncreasingSequence,currentSequenceLength);
                currentSequenceLength=1;
            }
        }

        return longestIncreasingSequence;
    }
};