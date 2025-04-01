class Solution {
public:
    string removeTrailingZeros(string num) {
        /*Iterate through string in reverse.
          Pop all chars that equal '0'.
        */
        while(num[num.length()-1]=='0'){
            num.pop_back();
        }

        return num;
    }
};