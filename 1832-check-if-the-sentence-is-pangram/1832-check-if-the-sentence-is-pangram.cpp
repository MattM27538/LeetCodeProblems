class Solution {
public:
    bool checkIfPangram(std::string_view sentence) {
        std::set<int> allLettersInAlphabetDecimalValues {};

        for(int i {97}; i <= 122; ++i){
            allLettersInAlphabetDecimalValues.insert(i);
        }

        for(const auto& character : sentence){
            allLettersInAlphabetDecimalValues.erase(static_cast<int>(character));
            
            if(allLettersInAlphabetDecimalValues.size() == 0){
                return true;
            }
        }

        return false;
    }
};