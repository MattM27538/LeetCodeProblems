class Solution {
public:
    string removeStars(string s) {
        int starCount=0;
        //Read string from end of string. Remove and keep count of stars 
        //and remove chars for each star encountered. 
        for(int i=s.length()-1;i>=0;--i){
            if(s[i]=='*'){
                ++starCount;
                s.erase(s.begin()+i);
                }
            else if(starCount){
                s.erase(s.begin()+i);
                --starCount;
                }
        }
        return s;
    }
};