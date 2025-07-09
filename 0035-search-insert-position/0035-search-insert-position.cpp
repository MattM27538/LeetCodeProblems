class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto insertPosition {std::ranges::upper_bound(nums, target-1)};
       
        return static_cast<int>(std::distance(nums.begin(), insertPosition));
    }
};