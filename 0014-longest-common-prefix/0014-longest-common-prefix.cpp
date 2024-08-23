class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longestPrefix = "";
        switch(strs.size()){
            case 1: return strs[0];
                break;
            default:{
                // Sort strs alphabetically, determine length of first and last elements,
                // compare each sequential char of both words and push each match to 
                // longestPrefix string.
                sort(strs.begin(), strs.end());
                int shortestStringLen = strs[0].length()>strs[strs.size()-1].length()?strs[0].length():strs[strs.size()-1].length();                             
                for(int i=0; i<shortestStringLen;i++){
                    if(strs[0][i]==strs[strs.size()-1][i]){
                        longestPrefix.push_back(strs[0][i]);
                    }   else{break;}
                }
            }
        }
        return longestPrefix;
    }
};