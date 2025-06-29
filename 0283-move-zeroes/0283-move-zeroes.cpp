class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int leftIndices{0};

        for(decltype(std::ssize(nums)) rightIndices{0}; rightIndices<std::ssize(nums); ++rightIndices){
            if(nums.data()[rightIndices] != 0){
                std::swap(nums.data()[rightIndices], nums.data()[leftIndices]);
                ++leftIndices;
            }
        }
    }
};