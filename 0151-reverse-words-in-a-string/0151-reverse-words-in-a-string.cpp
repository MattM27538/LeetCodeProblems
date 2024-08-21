class Solution {
public:
    string reverseWords(string s) {
        string reversedString;
        switch(s.length()){
            case 1: return s;
                break; 
            default:{
                int subStrLen = 0, startPos = 0;
                // Iterate through string s, copy each word substring from
                // s to reversedString
                for(int i=0; i<=s.length(); i++){
                    if(s[i]==' ' || i==s.length()){
                        if(subStrLen){
                            reversedString.insert(0, s, startPos,subStrLen);
                            reversedString.insert(0, " ");
                            startPos+=subStrLen+1;
                            subStrLen=0;
                        } else{startPos++;}
                    } else {
                        subStrLen++;
                    }
                }
            }
        }
        reversedString.erase(0,1);
        return reversedString;
    }
};