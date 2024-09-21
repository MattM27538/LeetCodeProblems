class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0], subArrEnding=nums[0];
        for(int i=1; i<nums.size(); i++){
            //Check which subarray is greater.
            subArrEnding=max(subArrEnding+nums[i],nums[i]);
            //Keep track of largest value found.
            ans=max(ans,subArrEnding);
        }
        return ans;
    }
};