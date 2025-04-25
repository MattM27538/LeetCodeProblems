class Solution {
public:
    int addDigits(int num) {
        constexpr auto digitDivisor{10};
        auto currentSum{0};

        while((num/digitDivisor)>0){
            //Add all digits to new sum.
            while((num/digitDivisor)>0){
                currentSum+=num%digitDivisor;
                num/=digitDivisor;
            }

            currentSum+=num;
            num=currentSum;
            currentSum=0;
        }

        return num;
    }
};