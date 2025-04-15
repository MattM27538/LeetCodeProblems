class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> sortedAnagrams{};
        unordered_map<string,vector<string>> stringToAnagramMap{}; 

        //Map all groups of anagrams into vectors. 
        for(int i{0};i<strs.size();++i){
            auto temp{strs[i]};
            sort(temp.begin(),temp.end());

            if(stringToAnagramMap.find(temp)==stringToAnagramMap.end()){
                stringToAnagramMap[temp]={strs[i]};
            }
            else{
                stringToAnagramMap[temp].push_back(strs[i]);
            }
        }

        //Push all anagram vectors to final vector.
        for(const auto &strAnagramsPair:stringToAnagramMap){
            sortedAnagrams.push_back(strAnagramsPair.second);
        }
        
        return sortedAnagrams;
    }
};