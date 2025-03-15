class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans={0};
        int numOfDigits={1};
        /*Check length of digits in each number.
          Increment ans for each number with
          even number of digits.  
        */
        for(int &num:nums){
            while(num>=10){
                num/=10;
                ++numOfDigits;
            }
            if(numOfDigits%2==0){++ans;}
            numOfDigits=1;
        }

        return ans;
    }
};