class Solution {
public:
    string greatestLetter(string s) {
        for(const auto& letter:s){
            if((islower(letter) && charsInSMap.find(toupper(letter))!=charsInSMap.end())
            || (isupper(letter) && charsInSMap.find(tolower(letter))!=charsInSMap.end())){
                    updateGreatestChar(greatestChar,letter);
            }

            charsInSMap[letter]=true;
        }

        return greatestChar;
    }

private: 
    void updateGreatestChar(std::string& greatestChar,const char letter);

    std::string greatestChar{""};
    std::unordered_map<char,bool> charsInSMap{};
};

void Solution::updateGreatestChar(std::string& greatestChar,const char letter){
    if(greatestChar==""){
        greatestChar.push_back(toupper(letter));
    }
    else if(toupper(letter)>greatestChar[0]){
        greatestChar[0]=toupper(letter);
    }
}