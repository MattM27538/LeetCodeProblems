class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Sort array in ascending order
        sort(nums.begin(),nums.end());
        switch(nums.size()){
            case 1: return nums[0];
            break;
            default:
            //Check each index against the index two spots after it
            // when values don't match return value
            for(unsigned int i=0; i<nums.size()-1;i=i+3){
                if(nums[i]!=nums[i+2]){return nums[i];}
            }
        }
        return nums[nums.size()-1];
    }
};