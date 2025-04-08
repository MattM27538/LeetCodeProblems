class Solution {
public:
    int countSegments(string s) {
        char prevChar={' '};
        int numOfSegments={0};
        for(const char &charInStr:s){
            if(prevChar==' ' && charInStr!=' '){
                ++numOfSegments;
            }
            prevChar=charInStr;
        }

        return numOfSegments;
    }
};