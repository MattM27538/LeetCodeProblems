class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missingNumber={0};
        //Sum all numbers from 1 to n+1 and subtract all numbers from nums.
        for(int i={0};i<nums.size();++i){
            missingNumber+=i+1;
            missingNumber-=nums[i];
        }

        return missingNumber;
    }
};