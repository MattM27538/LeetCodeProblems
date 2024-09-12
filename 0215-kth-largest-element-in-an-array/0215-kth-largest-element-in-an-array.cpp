class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //Solution using sort
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }
};