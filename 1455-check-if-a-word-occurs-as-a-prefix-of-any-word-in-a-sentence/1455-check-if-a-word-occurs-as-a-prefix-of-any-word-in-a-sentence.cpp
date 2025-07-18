class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        auto index{0};
        std::stringstream strStream(sentence);
        std::string sentenceWord{""};

        while(getline(strStream, sentenceWord, ' ')){
            ++index;

            if(searchWord.size() <= sentenceWord.size()){
                for(decltype(std::ssize(sentenceWord)) i{0}; i < std::ssize(searchWord); ++i){
                    if(searchWord.data()[i] != sentenceWord.data()[i]){
                        break;
                    }
                    //Return index if searchWord is a prefix of sentenceWord.
                    if(i == std::ssize(searchWord)-1){
                        return index;
                    }
                }
            }
        }

        return -1;
    }
};