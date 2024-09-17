class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currentVal=0, temp=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(i<k){currentVal+=nums[i];}
            else{
                temp=temp>currentVal?temp:currentVal;
                currentVal+=nums[i]-nums[i-k];
            }
        }
        temp=currentVal>temp?currentVal:temp;
        return temp/k;
    }
};