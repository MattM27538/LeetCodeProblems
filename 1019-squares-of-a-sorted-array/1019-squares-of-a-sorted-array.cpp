class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int *backOfNums={&nums[nums.size()-1]};
        int *frontOfNums={&nums[0]};
        int *ansIterator={&ans[ans.size()-1]};

        /*Check both end indices of nums for highest absolute value.
          Square that value and push to final vector. Then
          iterate that index left or right towards the center of
          nums until indicies converge. 
          */
        while(backOfNums!=frontOfNums){
            if(abs(*backOfNums)>abs(*frontOfNums)){
                *ansIterator=pow(*backOfNums,2);
                --backOfNums;
            } else {
                *ansIterator=pow(*frontOfNums,2);
                ++frontOfNums;
            }
            
            --ansIterator;
        }

        //Add square of index value at convergence to final vector.
        *ansIterator=pow(*backOfNums,2);
        return ans;
    }
};