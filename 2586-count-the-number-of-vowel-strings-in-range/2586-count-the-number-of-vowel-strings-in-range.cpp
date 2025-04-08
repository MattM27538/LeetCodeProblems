class Solution {
public:
    bool isVowel(char &charInWord){
        switch(charInWord){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': 
            {
                return true;
            }
        }

        return false;
    }

    int vowelStrings(vector<string>& words, int left, int right) {
        int vowelStrings={0};

        for(int i={left};i<=right;++i){
            //Check if first and last char in each string is a vowel.
            if(isVowel(words[i][0])&&isVowel(words[i][words[i].length()-1])){
                ++vowelStrings;
            }
        }

        return vowelStrings;
    }
};