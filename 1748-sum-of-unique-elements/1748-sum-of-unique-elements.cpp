class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        auto sumOfUniqueElements{0};
        std::unordered_map<int,bool> uniqueElementsMap;

        //Set all unique elements value to true in map;
        for(const auto &num:nums){
            if(uniqueElementsMap.find(num)==uniqueElementsMap.end()){
                uniqueElementsMap[num]=true;
            }
            else{
                uniqueElementsMap[num]=false;
            }
        }

        //Sum all unique elements.
        for(const auto &pair:uniqueElementsMap){
            if(pair.second==true){
                sumOfUniqueElements+=pair.first;
            }
        }

        return sumOfUniqueElements;
    }
};