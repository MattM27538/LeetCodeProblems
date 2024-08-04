class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
        string numAsString = to_string(x);
        string reversed(numAsString.rbegin(), numAsString.rend());
        if (numAsString == reversed){return true;}
        return false;
    }
};