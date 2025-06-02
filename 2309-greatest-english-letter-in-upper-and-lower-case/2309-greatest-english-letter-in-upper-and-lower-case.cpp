class Solution {
public:
    string greatestLetter(string s) {
        for(const auto& letter:s){
            if((islower(letter) && m_charsInSMap.find(toupper(letter))!=m_charsInSMap.end())
            || (isupper(letter) && m_charsInSMap.find(tolower(letter))!=m_charsInSMap.end())){
                updateGreatestChar(m_greatestCharInS,letter);
            }

            m_charsInSMap[letter]=true;
        }

        return m_greatestCharInS;
    }

private: 
    void updateGreatestChar(std::string& m_greatestCharInS,const char letter);

    std::string m_greatestCharInS{""};
    std::unordered_map<char,bool> m_charsInSMap{};
};

void Solution::updateGreatestChar(std::string& m_greatestCharInS,const char letter){
    if(m_greatestCharInS==""){
        m_greatestCharInS.push_back(toupper(letter));
    }
    else if(toupper(letter)>m_greatestCharInS[0]){
        m_greatestCharInS[0]=toupper(letter);
    }
}