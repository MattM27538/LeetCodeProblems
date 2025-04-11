class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missingNum={0};
        //Sum all numbers from 1 to n+1 and subtract all numbers from nums.
        for(int i={0};i<nums.size();++i){
            missingNum+=i+1;
            missingNum-=nums[i];
        }

        return missingNum;
    }
};