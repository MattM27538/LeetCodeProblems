class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        unsigned int lastDigit = digits[digits.size()-1];
        switch(lastDigit){
            case 9:{
                for(int i=digits.size()-1; i>=0; i--){
                    if(digits[i]==9){
                        if(i==0){
                            digits[i]=1;
                            digits.push_back(0);
                            break;
                        }
                        digits[i]=0;
                    } else{
                          digits[i]=digits[i]+1;
                          break;
                      }
                }
            }
            break;
            default:{
                 digits[digits.size()-1] = lastDigit+1;
            }
        }
        return digits;
    }
};