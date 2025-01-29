class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        //Loop through each string and append chars in each existing position to end of final string.
        for(int i=0;i<max(word1.length(),word2.length());++i){
            if(i<word1.length()){
                ans.push_back(word1[i]);
            }
            if(i<word2.length()){
                ans.push_back(word2[i]);
            }
        }
        return ans;
    }
};