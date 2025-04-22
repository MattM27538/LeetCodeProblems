class Solution {
public:
    char repeatedCharacter(string s) {
        std::unordered_map<char,bool> charsInStringMap;

        for(const auto &charInString:s){
            if(charsInStringMap.find(charInString)==charsInStringMap.end()){
                charsInStringMap[charInString]=true;
            }
            else{
                return charInString;
            }
        }
        //Unreachable placeholder.
        return ' ';
    }
};