class Solution {
public:
    string truncateSentence(string str, const int numberOfWordsWantedInTruncatedSentence) {
        std::size_t lengthOfTruncatedSentence {0};
        auto numberOfSpacesEncounteredInStr {0};

        for(auto& character: str){
            if(character == ' '){
                ++numberOfSpacesEncounteredInStr;
                if(numberOfSpacesEncounteredInStr == numberOfWordsWantedInTruncatedSentence){
                   break;
                }
            }

            ++lengthOfTruncatedSentence;
        }

        return str.substr(0, lengthOfTruncatedSentence);
    }
};