class Solution {
public:
    bool isAcronym(std::vector<string>& words, std::string s) {
        if(words.size() != s.size()){
            return false;
        }
        
        for(int i{0}; i < std::ssize(words); ++i){
            const auto firstCharacterInWord {words[i][0]};
            const auto charInString{s[i]};

            if(firstCharacterInWord != charInString){
                return false;
            }
        }

        return true;
    }
};