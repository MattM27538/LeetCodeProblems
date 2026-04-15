class Solution {
public:
    bool checkIfPangram(std::string_view sentence) {
        std::set<int> allLettersInAlphabetDecimalValues {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 
        108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};

        for(const auto& character : sentence){
            allLettersInAlphabetDecimalValues.erase(static_cast<int>(character));
            
            if(allLettersInAlphabetDecimalValues.size() == 0){
                return true;
            }
        }

        return false;
    }
};