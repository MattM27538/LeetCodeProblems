class Solution {
public:
    int maxDistinct(string str) {
        auto numberOfSubstringsWithDistinctFirstLetter {0};
        std::unordered_map<char, bool> alreadyUsedLettersOfSubstrings{};

        for(const auto& letter : str){
            if(alreadyUsedLettersOfSubstrings.find(letter) == alreadyUsedLettersOfSubstrings.end()){
                alreadyUsedLettersOfSubstrings[letter] = true;
                ++numberOfSubstringsWithDistinctFirstLetter;
            }
        }

        return numberOfSubstringsWithDistinctFirstLetter;
    }
};