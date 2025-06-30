class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        auto sizeOfS{std::ssize(s)};
        auto offsetSizeOfS{std::ssize(s)};

        for(const std::string& word:words){
            for(const auto& letter:word){
                if(offsetSizeOfS==1){
                    //Check if last letter in word matches last in s and is at the end of a string in words.
                    if((static_cast<const void*>(&letter) == static_cast<const void*>(&word.back())) && (letter == s.back())){
                        return true;
                    }

                    return false;
                }
                //Check if letters in words match letters in s.
                else if(letter != s[sizeOfS - offsetSizeOfS]){
                    return false;
                }

                --offsetSizeOfS;
            }
        }

        return false;
    }
};