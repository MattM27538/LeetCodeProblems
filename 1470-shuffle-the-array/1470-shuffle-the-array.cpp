class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> finalVec;
        for(int i=0; i<n; ++i){
            finalVec.push_back(nums[i]);
            finalVec.push_back(nums[n+i]);
        }
        return finalVec;
    }
};