class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int map[26]={0};
        //iterate through magazine and add increment alphabetical index of char by 1 in map. 
        //Then iterate through magazine, if any chars in ransomNote have a value of <=0 return false.
        for(char c:magazine){map[c-'a']++;}
        for(char c:ransomNote){if((map[c-'a']--)<=0){return false;}}
        return true;
    }
};