class Solution {
public:
    bool allLettersInSameRow(std::string_view word, int& firstLetterRow, std::unordered_map<char,int>& letterToRowMap){
        for(const auto& letter:word){
            if(letterToRowMap.at(std::tolower(letter))!=firstLetterRow){
                return false;
            }
        }

        return true;
    }

    vector<string> findWords(vector<string>& words) {
        std::unordered_map<char,int> letterToRowMap{
            {'q',1},{'w',1},{'e',1},{'r',1},{'t',1},{'y',1},{'u',1},{'i',1},{'o',1},{'p',1},
            {'a',2},{'s',2},{'d',2},{'f',2},{'g',2},{'h',2},{'j',2},{'k',2},{'l',2},
            {'z',3},{'x',3},{'c',3},{'v',3},{'b',3},{'n',3},{'m',3},
        };

        std::vector<std::string> wordsMadeFromOneRow;

        for(const auto& word:words){
            int firstLetterRow{letterToRowMap.at(std::tolower(word[0]))};
            if(allLettersInSameRow(word,firstLetterRow,letterToRowMap)){
                wordsMadeFromOneRow.push_back(word);
            }
        }

        return wordsMadeFromOneRow;
    }
};