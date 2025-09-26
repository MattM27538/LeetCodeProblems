class Solution {
public:
    int maxFreqSum(string sentence) {
        std::unordered_map<char, int> mapOfVowelToFrequenciesInSentence {};
        std::unordered_map<char, int> mapOfConsonantToFrequenciesInSentence {};

        addCharsInSentenceToMaps(mapOfVowelToFrequenciesInSentence, mapOfConsonantToFrequenciesInSentence, sentence);
    
        auto vowelWithMaximumFrequencyInSentence {0};
        vowelWithMaximumFrequencyInSentence = getMaxVowelFrequencyFromMap(mapOfVowelToFrequenciesInSentence);

        auto consonantWithMaximumFrequencyInSentence {0};
        consonantWithMaximumFrequencyInSentence = getMaxConsonantFrequencyFromMap(mapOfConsonantToFrequenciesInSentence);

        return vowelWithMaximumFrequencyInSentence + consonantWithMaximumFrequencyInSentence;
    }

    void addCharsInSentenceToMaps(std::unordered_map<char, int>& mapOfVowelToFrequenciesInSentence, 
    std::unordered_map<char, int>& mapOfConsonantToFrequenciesInSentence, std::string_view sentence){
        for(auto character:sentence){
            if(isVowel(character)){
                updateVowelCountInMap(mapOfVowelToFrequenciesInSentence, character);
            }
            else{
                updateConsonantCountInMap(mapOfConsonantToFrequenciesInSentence, character);
            }
        }
    }

    void updateVowelCountInMap(std::unordered_map<char, int>& mapOfVowelToFrequenciesInSentence, const char vowel){
        if(mapOfVowelToFrequenciesInSentence.find(vowel) == mapOfVowelToFrequenciesInSentence.end()){
            mapOfVowelToFrequenciesInSentence[vowel] = 1;
        }
        else{
            ++mapOfVowelToFrequenciesInSentence[vowel];
        }
    }

    void updateConsonantCountInMap(std::unordered_map<char, int>& mapOfConsonantToFrequenciesInSentence, const char consonant){
        if(mapOfConsonantToFrequenciesInSentence.find(consonant) == mapOfConsonantToFrequenciesInSentence.end()){
            mapOfConsonantToFrequenciesInSentence[consonant] = 1;
        }
        else{
            ++mapOfConsonantToFrequenciesInSentence[consonant];
        }
    }

    bool isVowel(const char character){
        switch(character){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                {
                    return true;
                }
        }

        return false;
    }

    int getMaxVowelFrequencyFromMap(const std::unordered_map<char, int>& mapOfVowelToFrequenciesInSentence){
        auto vowelWithMaximumFrequencyInSentence {0};

        for(auto& keyValuePair:mapOfVowelToFrequenciesInSentence){
            if(keyValuePair.second > vowelWithMaximumFrequencyInSentence){
                vowelWithMaximumFrequencyInSentence = keyValuePair.second;
            }
        }

        return vowelWithMaximumFrequencyInSentence;
    }

    int getMaxConsonantFrequencyFromMap(const std::unordered_map<char, int>& mapOfConsonantToFrequenciesInSentence){
        auto consonantWithMaximumFrequencyInSentence {0};

        for(auto& keyValuePair:mapOfConsonantToFrequenciesInSentence){
            if(keyValuePair.second > consonantWithMaximumFrequencyInSentence){
                consonantWithMaximumFrequencyInSentence = keyValuePair.second;
            }
        }

        return consonantWithMaximumFrequencyInSentence;
    }
};
