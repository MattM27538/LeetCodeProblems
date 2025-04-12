class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,bool> uniqueValsMap{};

        //Add all unique vals in nums to uniqueValsMap.
        for(const auto &num:nums){
            if(uniqueValsMap.find(num)==uniqueValsMap.end() && num>0){
                uniqueValsMap[num]=true;
            }
        }

        return static_cast<int>(uniqueValsMap.size());
    }
};