class Solution {
public:
    bool canJump(vector<int>& nums) {
        switch(nums.size()){
            case 1: return true;
                break;
            default: {
                int maxJump=nums[0], posOfMaxJump=0;
                //Iterate through vector and check if each possible jump
                //can reach a value that allows for continual jumping forward.
                for(auto it=begin(nums); it!=end(nums); ++it){
                    switch(maxJump) {case -1: return false;}
                    if(*it>=maxJump) {maxJump=*it;}
                    maxJump--;
                }
            }
        }
        return true;
    }
};