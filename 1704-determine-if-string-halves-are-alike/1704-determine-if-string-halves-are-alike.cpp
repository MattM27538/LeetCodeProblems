class Solution {
public:
    bool halvesAreAlike(string s) {
        int vowelsInS1=0, vowelsInS2=0;
        //Iterate through string, check for vowels in each half. 
        for(int i=0; i<s.length(); ++i){
            switch(s[i]){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':{
                    if(i<s.length()/2){++vowelsInS1;}
                    else{++vowelsInS2;}
                }     
            }
        }
        if(vowelsInS1==vowelsInS2){return true;}
        return false;
    }
};