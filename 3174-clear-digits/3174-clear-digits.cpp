class Solution {
public:
    string clearDigits(std::string_view str) {
        std::stack<char> stackOfCharsInStr {};

        for(auto& character:str){
            stackOfCharsInStr.push(character);
        }

        std::string stringWithDigitsAndCharsRemoved {};
        auto numberOfCharsToBeRemoved {0};

        while(!stackOfCharsInStr.empty()){
            if(isdigit(stackOfCharsInStr.top())){
                ++numberOfCharsToBeRemoved;
            }
            else{
                if(numberOfCharsToBeRemoved > 0){
                    --numberOfCharsToBeRemoved;
                }
                else{
                    stringWithDigitsAndCharsRemoved.push_back(stackOfCharsInStr.top());
                }
            }

            stackOfCharsInStr.pop();
        }

        std::reverse(stringWithDigitsAndCharsRemoved.begin(), stringWithDigitsAndCharsRemoved.end());

        return stringWithDigitsAndCharsRemoved;
    }
};