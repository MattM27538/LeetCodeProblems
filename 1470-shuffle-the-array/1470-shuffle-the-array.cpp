class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int ncopy=n;
        //Move elements from second half og graph into final positions.
        for(int i=1; i<2*n; i+=2){
            nums.insert(nums.begin()+i,nums[ncopy]);
            ncopy+=2;
        }
        //Erase moved elements from second half of graph.
        for(int i=2*n; i<3*n; ++i){
            nums.erase(nums.begin()+2*n);
        }
        return nums;
    }
};