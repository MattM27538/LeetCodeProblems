class Solution {
public:
    bool areOccurrencesEqual(string str) {
        std::unordered_map<char, int> mapOfCharsInStringToFrequency {};

        for(auto& character : str){
            ++mapOfCharsInStringToFrequency[character];
        }

        const auto firstCharacterFrequency {mapOfCharsInStringToFrequency.cbegin()->second};
        bool allOccurrencesOfCharactersInStringAreEqual {true};

        for(auto& characterAndFrequencyPair : mapOfCharsInStringToFrequency){
            if(characterAndFrequencyPair.second != firstCharacterFrequency){
                allOccurrencesOfCharactersInStringAreEqual = false;
                break;
            }
        }

        return allOccurrencesOfCharactersInStringAreEqual;
    }
};