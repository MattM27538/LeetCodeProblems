class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        //Use xor operator to determine what element only appears once.
        for(int x:nums){result^=x;}
        return result;
    }
};