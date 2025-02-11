class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int numOfOperations=0;
        for(int num:nums){
            if(num%3!=0){
                numOfOperations+=min(((num/3+1)*3)-num,num-(num/3*3));
            }
            else if(num<3){
                numOfOperations+=min(num,3-num);
            } 
        }
        return numOfOperations;
    }
};