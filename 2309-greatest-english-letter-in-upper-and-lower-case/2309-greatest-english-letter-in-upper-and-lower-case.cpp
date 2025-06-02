class Solution {
public:
    string greatestLetter(string s) {
        for(const auto& letter:s){
            if((islower(letter) && m_charsInSMap.find(toupper(letter))!=m_charsInSMap.end())
            || (isupper(letter) && m_charsInSMap.find(tolower(letter))!=m_charsInSMap.end())){
                
                updateGreatestChar(m_greatestChar,letter);
            }

            m_charsInSMap[letter]=true;
        }

        return m_greatestChar;
    }

private: 
    void updateGreatestChar(std::string& m_greatestChar,const char letter);

    std::string m_greatestChar{""};
    std::unordered_map<char,bool> m_charsInSMap{};
};

void Solution::updateGreatestChar(std::string& m_greatestChar,const char letter){
    if(m_greatestChar==""){
        m_greatestChar.push_back(toupper(letter));
    }
    else if(toupper(letter)>m_greatestChar[0]){
        m_greatestChar[0]=toupper(letter);
    }
}