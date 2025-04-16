class Solution {
public:
    int sumOfMultiples(int n) {
        auto sumOfMultiples{0};
        constexpr auto divisor1{3};
        constexpr auto divisor2{5};
        constexpr auto divisor3{7};

        for(int i{1};i<=n;++i){
            if(i%divisor1==0 || i%divisor2==0 || i%divisor3==0){
                sumOfMultiples+=i;
            }
        }        

        return sumOfMultiples;
    }
};