class Solution {
public:
    int maxDepth(string str) {
        std::stack<char> stackOfCharactersInString {};

        for(auto& character:str){
            if((character == '(') || (character == ')')){
                stackOfCharactersInString.push(character);
            }
        }

        auto currentNumberOfNestedParenthesis {0};
        auto maximumNumberOfNestedParenthesis {0};

        while(!(stackOfCharactersInString.empty())){
            if(stackOfCharactersInString.top() == ')'){
                ++currentNumberOfNestedParenthesis;
            } 
            else{
                --currentNumberOfNestedParenthesis;
            }

            maximumNumberOfNestedParenthesis = max(maximumNumberOfNestedParenthesis, currentNumberOfNestedParenthesis);
            stackOfCharactersInString.pop();
        }

        return maximumNumberOfNestedParenthesis;
    }
};