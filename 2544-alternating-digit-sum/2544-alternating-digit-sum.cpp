class Solution {
public:

    int alternateDigitSum(int n) {
        auto digitSum{0};
        constexpr auto divisorToGetDigits{10};
        stack<int> digits;

        //Add all digits to stack.
        while(n>0){
            digits.push(n%divisorToGetDigits);
            n/=divisorToGetDigits;
        }

        //Sum all digits.
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