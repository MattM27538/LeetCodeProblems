class Solution {
public:

    constexpr void divideBy10(int &base){
        base/=10;
    }

    int alternateDigitSum(int n) {
        auto digitSum{0}; 

        while(n>0){
            digitSum+=n%10;
            divideBy10(n);
            digitSum-=n%10;
            divideBy10(n);
        }

        return digitSum;
    }
};