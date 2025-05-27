class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        std:vector<int> disappearedNumbers;
        std::unordered_map<int,bool> existingIntsInNums{};

        //Add all existing numbers in nums to Map.
        for(const auto& num:nums){
            if(existingIntsInNums.find(num)==existingIntsInNums.end()){
                existingIntsInNums[num]=true;
            }
        }

        //Add all numbers between 1 and n to vector disappearedNumbers.
        for(int i{1};i<=nums.size();++i){
            if(existingIntsInNums.find(i)==existingIntsInNums.end()){
                disappearedNumbers.push_back(i);
            }
        }

        return disappearedNumbers;
    }
};