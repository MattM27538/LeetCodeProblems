class Solution {
public:

    int alternateDigitSum(int n) {
        auto digitSum{0};
        constexpr auto divisorToGetDigits{10};
        std::stack<int> digits;

        while(n>0){
            digits.push(n%divisorToGetDigits);
            n/=divisorToGetDigits;
        }

        while(!digits.empty()){
            digitSum+=digits.top();
            digits.pop();
            
            if(digits.size()>0){
                digitSum-=digits.top();
                digits.pop();
            }
        }

        return digitSum;
    }
};