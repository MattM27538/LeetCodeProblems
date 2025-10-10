class Solution {
public:
    void reverseString(vector<char>& s) {
        auto forwardIterator {s.begin()};
        auto reverseIterator {s.end()-1};

        while(forwardIterator < reverseIterator){
            char characterFromForwardIterator = *forwardIterator;
            *forwardIterator = *reverseIterator;
            *reverseIterator = characterFromForwardIterator;

            ++forwardIterator;
            --reverseIterator;
        }
    }
};