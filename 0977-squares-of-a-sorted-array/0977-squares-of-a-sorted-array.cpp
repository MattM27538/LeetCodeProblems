class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans={};
        int *ptr1={&nums[nums.size()-1]};
        int *ptr2={&nums[0]};

        /*Check both end indices of nums for highest absolute value.
          Square that value and push to final vector. Then
          iterate that index left or right towards the center of
          nums until indicies converge.
        */
        while(ptr1!=ptr2){
            if(abs(*ptr1)>abs(*ptr2)){
                ans.insert(ans.begin(),pow(*ptr1,2));
                --ptr1;
            } else {
                ans.insert(ans.begin(),pow(*ptr2,2));
                ++ptr2;
            }
        }

        //Add square of index value at convergence to final vector.
        ans.insert(ans.begin(),pow(*ptr1,2));
        return ans;
    }
};