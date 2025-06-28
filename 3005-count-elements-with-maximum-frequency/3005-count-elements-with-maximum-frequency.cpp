class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int8_t maxFrequency{1};
        int8_t countOfMaxFrequency{0};

        std::unordered_map<int8_t,int8_t> numsToOccurrencesMap{};

        for(const auto& num:nums){
            if(numsToOccurrencesMap.find(num)==numsToOccurrencesMap.end()){
                numsToOccurrencesMap[num]=1;
            }
            else{
                ++numsToOccurrencesMap[num];
                if(numsToOccurrencesMap[num]>maxFrequency){
                    maxFrequency=numsToOccurrencesMap[num];
                }
            }
        }

        for(const auto& pair:numsToOccurrencesMap){
            if(pair.second==maxFrequency){
                countOfMaxFrequency+=maxFrequency;
            }
        }

        return countOfMaxFrequency;
    }
};