class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxFrequency{1};
        int countOfMaxFrequency{0};

        std::unordered_map<int,int> numsToOccurrencesMap{};
        
        //All all frequencies of numbers in nums to map.
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

        //Add frequency of numbers with max occurrence together.
        for(const auto& pair:numsToOccurrencesMap){
            if(pair.second==maxFrequency){
                countOfMaxFrequency+=maxFrequency;
            }
        }

        return countOfMaxFrequency;
    }
};