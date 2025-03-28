class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largestValIndex={0};
        int secondLargestValIndex={0};
        
        /*Iterate through nums. If an index value is 
          greater than or equal to largestValIndex assign
          largestValIndex to secondLargestValIndex, and
          nums[index] to largestValIndex. Else if an index 
          value is greater than only secondLargestValIndex
          assign num to secondLargestValIndex.
        */
        for(const int &num:nums){
            if(num>=largestValIndex){
                secondLargestValIndex=largestValIndex;
                largestValIndex=num;
            } 
            else if(num>=secondLargestValIndex){
                secondLargestValIndex=num;
            }
        }

        return (largestValIndex-1)*(secondLargestValIndex-1);
    }
};