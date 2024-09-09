class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){return false;}
        int anagramMap[26]={0};
        //Increment char position in alphabet in array to match number of
        //instances of that letter.
        for(int i=0; i<s.length(); i++){
            anagramMap[s[i]-'a']++;
        }
        //Check if letters in string s correspond to letters in string t
        // by checking for instances of t's letters in map.
        for(int i=0; i<t.length(); i++){
            if(anagramMap[t[i]-'a']<=0){return false;}
            anagramMap[t[i]-'a']--;
        }
        return true;
    }
};