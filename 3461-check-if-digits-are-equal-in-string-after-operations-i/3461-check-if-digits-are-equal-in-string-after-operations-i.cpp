class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size()>2){
            std::string tempString{""};

            //Perform operations on string s.
            for(int i{0};i<s.size()-1;++i){
                tempString+=(to_string(((s[i]-'0')+(s[i+1]-'0'))%10));
            }

            s=tempString;
        }

        if(s[0]==s[1]){
            return true;
        }

        return false;
    }
};