class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        auto index{0};
        std::stringstream strStream(sentence);
        std::string sentenceWord{""};

        while(getline(strStream, sentenceWord, ' ')){
            ++index;

            if(searchWord.size() <= sentenceWord.size()){
                for(std::size_t i{0}; i < searchWord.size(); ++i){
                    if(searchWord.data()[i] != sentenceWord.data()[i]){
                        break;
                    }
                    //Return index if searchWord is a prefix of sentenceWord.
                    if(i == searchWord.size()-1){
                        return index;
                    }
                }
            }
        }

        return -1;
    }
};