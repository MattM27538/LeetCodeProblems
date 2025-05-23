class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size()>2){
            //Perform operations on s.
            for(int i{0};i<s.size()-1;++i){
                s[i]='0'+(((s[i]-'0')+(s[i+1]-'0'))%10);
            }

            s.pop_back();
        }

        if(s[0]==s[1]){
            return true;
        }

        return false;
    }
};