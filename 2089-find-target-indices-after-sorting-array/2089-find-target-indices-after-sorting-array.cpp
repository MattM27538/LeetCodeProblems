class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, const int target) {
        std::sort(nums.begin(), nums.end());

        std::vector<int> targetIndicesVector {};

        for(decltype(nums.size()) i {0}; i < nums.size(); ++i){
            if(nums[i] == target){
                targetIndicesVector.push_back(i);
            }
        }

        return targetIndicesVector;
    }
};