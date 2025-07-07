class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_map<int,bool> numsInNums1{};

        //Add all numbers in nums1 to map.
        for(const auto& num:nums1){
            numsInNums1[num]=true;
        }

        //Return the first number in nums2 found in map.
        for(const auto& num:nums2){
            if(numsInNums1.find(num)!=numsInNums1.end()){
                return num;
            }
        }

        return -1;
    }
};