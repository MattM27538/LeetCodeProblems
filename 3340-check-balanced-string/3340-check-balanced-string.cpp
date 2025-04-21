class Solution {
public:
    bool isBalanced(string num) {
        auto oddSum{0};
        auto evenSum{0};

        //Sum off and even indices.
        for(int i{0};i<num.size();++i){
            if(i%2==0){
                evenSum+=num[i]-'0';
            }
            else{
                oddSum+=num[i]-'0';
            }
        }

        return oddSum==evenSum;
    }
};