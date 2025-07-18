class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        auto iteratorToNextGreatestLetter{std::ranges::upper_bound(letters, target)};

        if(iteratorToNextGreatestLetter != std::cend(letters)){
            return *iteratorToNextGreatestLetter;
        }

        return letters[0];
    }
};