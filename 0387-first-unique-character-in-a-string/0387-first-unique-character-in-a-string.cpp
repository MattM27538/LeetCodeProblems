class Solution {
public:
    int firstUniqChar(string s) {
        int charsMap[26]={0};
        // Map number of appearances of each char in array.
        for(int i=0; i<s.length(); ++i){
            ++charsMap[s[i]-'a'];
        }
        // Return index of first char that maps to value 1(appearances) in array.
        for(int i=0; i<s.length(); ++i){
            if(charsMap[s[i]-'a']==1){return i;}
        }
        return -1;
    }
};