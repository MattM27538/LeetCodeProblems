class Solution {
public:

    int alternateDigitSum(int n) {
        auto digitSum{0};
        stack<int> digits;

        //Add all digits to stack.
        while(n>0){
            digits.push(n%10);
            n/=10;
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