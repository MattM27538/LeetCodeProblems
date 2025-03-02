class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        std::vector<int> wordIndiciesContainingX={};

        //For each word in words vector check for char x. If found push_back index
        //of word to final vector and proceed to next word in words vector.
        for(int i=0;i<words.size();++i){
            for(const char &charInWord:words[i]){
                if(charInWord==x){
                    wordIndiciesContainingX.push_back(i);
                    break;
                }
            }
        }

        return wordIndiciesContainingX;
    }
};