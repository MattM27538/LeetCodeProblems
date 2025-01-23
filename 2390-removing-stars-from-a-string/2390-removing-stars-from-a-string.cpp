class Solution {
public:
    string removeStars(string s) {
        string ans="";
        //Iterate over string, append chars to new string. If char is '*'
        // remove last char from new string.
        for(int i=0;i<s.length();++i){
            if(s[i]=='*'){
                ans.pop_back();
            } else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};