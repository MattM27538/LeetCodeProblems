class Solution {
public:
    string greatestLetter(string s) {
        for(const auto& letter:s){
            if((islower(letter) && m_charsInStrMap.find(toupper(letter))!=m_charsInStrMap.end())
            || (isupper(letter) && m_charsInStrMap.find(tolower(letter))!=m_charsInStrMap.end())){
                updateGreatestChar(m_greatestCharInStr,letter);
            }

            m_charsInStrMap[letter]=true;
        }
        
        return m_greatestCharInStr;
    }

private: 
    void updateGreatestChar(std::string& m_greatestCharInStr,const char greatestChar);

    std::string m_greatestCharInStr{""};
    std::unordered_map<char,bool> m_charsInStrMap{};
};

void Solution::updateGreatestChar(std::string& m_greatestCharInStr,const char greatestChar){
    if(m_greatestCharInStr==""){
        m_greatestCharInStr.push_back(toupper(greatestChar));
    }
    else if(toupper(greatestChar)>m_greatestCharInStr[0]){
        m_greatestCharInStr[0]=toupper(greatestChar);
    }
}