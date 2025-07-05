class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        std::vector<std::string> uncommonWords{};
        std::unordered_map<std::string,int16_t> wordsToOccurrencesMap{};

        streamWordsToMap(s1, wordsToOccurrencesMap);
        streamWordsToMap(s2, wordsToOccurrencesMap);

        //Add all uncommon words to vector "uncommonWords".
        for(const auto& wordToOccurrencePair:wordsToOccurrencesMap){
            if(wordToOccurrencePair.second==1){
                uncommonWords.push_back(wordToOccurrencePair.first);
            }
        }

        return uncommonWords;
    }

private:
    void streamWordsToMap(const std::string& str, std::unordered_map<std::string,int16_t>& wordsToOccurrencesMap) const {
        std::stringstream strStream{str};
        std::string word{""};

        //Add number of unique word appearances to Map.
        while(getline(strStream, word, ' ')){
            if(wordsToOccurrencesMap.find(word) == wordsToOccurrencesMap.end()){
                wordsToOccurrencesMap[word]=1;
            }
            else{
                ++wordsToOccurrencesMap[word];
            }
        };
    }
};