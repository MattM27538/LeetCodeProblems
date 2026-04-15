class Solution {
public:
    void addAlphabetDecimalValuesToSet(std::set<int>& allLettersInAlphabetDecimalValues){
        constexpr int decimalValueOfa {97};
        constexpr int decimalValueOfz {122};

        for(int i {decimalValueOfa}; i <= decimalValueOfz; ++i){
            allLettersInAlphabetDecimalValues.insert(i);
        }
    }

    bool allLettersInAlphabetExistInSentence(std::string_view sentence, std::set<int>& allLettersInAlphabetDecimalValues){
        for(const auto& character : sentence){
            allLettersInAlphabetDecimalValues.erase(static_cast<int>(character));
            
            if(allLettersInAlphabetDecimalValues.empty()){
                return true;
            }
        }

        return false;
    }

    bool checkIfPangram(std::string_view sentence) {
        std::set<int> allLettersInAlphabetDecimalValues {};

        addAlphabetDecimalValuesToSet(allLettersInAlphabetDecimalValues);

        return allLettersInAlphabetExistInSentence(sentence, allLettersInAlphabetDecimalValues);
    }
};