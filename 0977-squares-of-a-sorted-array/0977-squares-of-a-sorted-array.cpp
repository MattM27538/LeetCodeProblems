class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans={};
        //Add square of each value in nums to final vector.
        for(const int &num:nums){
            ans.push_back(pow(num,2));
        }

        sort(ans.begin(),ans.end());
        return ans;
    }
};