class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sol=0;
        for(int i:nums){if(i<k){++sol;}}
        return sol;
    }
};