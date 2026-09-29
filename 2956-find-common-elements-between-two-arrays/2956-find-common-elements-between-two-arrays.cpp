class Solution {
public:
    std::vector<int> findIntersectionValues(const vector<int>& nums1, const vector<int>& nums2) {
        std::unordered_map<int, bool> numsThatExistInNums1 {};
        std::unordered_map<int, bool> numsThatExistInNums2 {};
        std::vector<int> commonElementsBetweenArrays {0, 0}; 

        for(const auto& num : nums1){
            if(numsThatExistInNums1.find(num) == numsThatExistInNums1.end()){
                numsThatExistInNums1[num] = true; 
            }
        }
        
        for(const auto& num : nums2){
            if(numsThatExistInNums2.find(num) == numsThatExistInNums2.end()){
                numsThatExistInNums2[num] = true; 
            }

            if(numsThatExistInNums1[num] == true){
                ++commonElementsBetweenArrays[1];
            }
        }

        for(const auto& num : nums1){
            if(numsThatExistInNums2[num] == true){
                ++commonElementsBetweenArrays[0];
            }
        }

        return commonElementsBetweenArrays;
    }
};