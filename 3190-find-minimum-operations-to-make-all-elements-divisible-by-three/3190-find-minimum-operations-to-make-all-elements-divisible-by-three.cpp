class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int numOfOperations=0;
        for(int num:nums){
            //Increase number of operations by smallest difference between num and multiple
            //of 3 above or below num.
            if(num%3!=0 || num<3){
                numOfOperations+=min(((num/3+1)*3)-num,num-(num/3*3));
            }
        }
        return numOfOperations;
    }
};