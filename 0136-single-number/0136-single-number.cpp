class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){return nums[0];}
        sort(nums.begin(),nums.end());
        //Check every two pairs of ints. If they do not match return the first int. 
        if(nums[0]!=nums[1]){return nums[0];}
        for(int i=2;i<nums.size()-1;i+=2){
            if(nums[i]!=nums[i+1]){return nums[i];}
        }
        return nums[nums.size()-1];
    }
};