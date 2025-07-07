class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        //Search for each value of nums2 in nums1.
        for(const auto& num:nums2){
            if(std::ranges::binary_search(nums1,num)){
                return num;
            }
        }

        return -1;
    }
};