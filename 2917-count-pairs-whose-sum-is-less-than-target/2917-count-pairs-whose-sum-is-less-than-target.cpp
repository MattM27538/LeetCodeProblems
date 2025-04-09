class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int numberOfPairs={0};
        if(nums.size()==1){return numberOfPairs;}

        int *trailingPtr={&nums[0]};
        int *leadingPtr={&nums[1]};

        //Iterate through each pair of indices of nums. 
        while(leadingPtr!=((&nums.back())+1)){
            if((*trailingPtr+*leadingPtr)<target){
                ++numberOfPairs;
            }
            // ++trailingPtr;
            if((++leadingPtr)==((&nums.back())+1)){
                ++trailingPtr;
                leadingPtr=trailingPtr+1;
            }
        }

        return numberOfPairs;
    }
};