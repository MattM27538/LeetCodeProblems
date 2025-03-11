class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int *ptr1={&nums[nums.size()-1]};
        int *ptr2={&nums[0]};
        int *ptr3={&ans[ans.size()-1]};

        /*Check both end indices of nums for highest absolute value.
          Square that value and push to final vector. Then
          iterate that index left or right towards the center of
          nums until indicies converge.
        */
        while(ptr1!=ptr2){
            if(abs(*ptr1)>abs(*ptr2)){
                *ptr3=pow(*ptr1,2);
                --ptr1;
            } else {
                *ptr3=pow(*ptr2,2);
                ++ptr2;
            }
            
            --ptr3;
        }

        //Add square of index value at convergence to final vector.
        *ptr3=pow(*ptr1,2);
        return ans;
    }
};