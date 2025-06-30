class Solution {
public:
    string reverseOnlyLetters(string s) {
        auto forwardIterator{s.begin()};
        auto reverseIterator{s.end()};

        //Swap locations with letters.
        while(forwardIterator<reverseIterator){
            if(std::isalpha(*forwardIterator) && std::isalpha(*reverseIterator)){
                std::swap(*forwardIterator, *reverseIterator);
                ++forwardIterator;
                --reverseIterator;
            }
            else if(!(std::isalpha(*forwardIterator))){
                ++forwardIterator;
            }
            else if(!(std::isalpha(*reverseIterator))){
                --reverseIterator;
            }
        }

        return s;
    }
};