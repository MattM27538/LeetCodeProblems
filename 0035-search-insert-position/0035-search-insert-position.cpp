class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //Initialize iterator to where target is or would be inserted.
        auto insertPosition {std::ranges::upper_bound(nums, target-1)};
       
        return static_cast<int>(std::distance(nums.begin(), insertPosition));
    }
};