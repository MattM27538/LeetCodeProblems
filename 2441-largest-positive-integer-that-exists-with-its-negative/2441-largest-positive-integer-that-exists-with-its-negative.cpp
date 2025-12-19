class Solution {
public:
    int findMaxK(vector<int>& nums) {
        auto largestNumberWithPositiveAndNegativeInNums {-1};
        std::unordered_map<int, bool> numbersInNumsMap {};

        for(auto& num:nums){
            if(numbersInNumsMap.find(-num) == numbersInNumsMap.end()){
                numbersInNumsMap[num] = true;
            }
            else if(abs(num) > largestNumberWithPositiveAndNegativeInNums){
                largestNumberWithPositiveAndNegativeInNums = abs(num);
            }
        }

        return largestNumberWithPositiveAndNegativeInNums;
    }
};