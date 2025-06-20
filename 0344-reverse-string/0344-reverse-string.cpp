class Solution {
public:
    void reverseString(vector<char>& s) {
        char* letterToSwap1{&s[0]};
        char* letterToSwap2{&s[s.size()-1]};
        char temp{' '};

        //Swap letters in vector s.
        while(letterToSwap1<letterToSwap2){
            temp=*letterToSwap1;
            *letterToSwap1=*letterToSwap2;
            *letterToSwap2=temp;
            ++letterToSwap1;
            --letterToSwap2;
        }
    }
};