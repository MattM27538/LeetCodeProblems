class Solution {
public:
    int countConsistentStrings(string allowedCharacters, vector<string>& words) {
        std::unordered_map<char,bool> mapOfAllowedCharacters {};

        for(auto& character:allowedCharacters){
            mapOfAllowedCharacters[character] = true;
        }

        auto numberOfStringsUsingOnlyAllowedCharacters {0};

        for(std::string_view word:words){
            bool allCharactersInWordAreAllowed {true};

            for(auto& characterInWord:word){
                if(mapOfAllowedCharacters.find(characterInWord) == mapOfAllowedCharacters.end()){
                    allCharactersInWordAreAllowed=false;
                    break;
                }
            }

            if(allCharactersInWordAreAllowed){
                ++numberOfStringsUsingOnlyAllowedCharacters;
            }

            allCharactersInWordAreAllowed = true;
        }

        return numberOfStringsUsingOnlyAllowedCharacters;
    }
};