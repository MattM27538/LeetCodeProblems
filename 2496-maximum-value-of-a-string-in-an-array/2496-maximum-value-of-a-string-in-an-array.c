int max(const int num1, const int num2){
    return num1 > num2 ? num1 : num2;
}

int maximumValue(char** strs, int strsSize) {
    int  maximumValueOfStringInStrs;

    for(int i = 0; i < strsSize; ++i){
        bool isAlphaNumeric = false;
        int lengthOfString = 0;
        int numericRepresentationOfString = 0;

        for(int j = 0; j < strlen(strs[i]); ++j){
            if(!isdigit(strs[i][j])){
                isAlphaNumeric = true;
            }

            ++lengthOfString;
            numericRepresentationOfString += ((pow(10, ((strlen(strs[i]) - j) - 1))) * ((strs[i][j]) - 48));
        }
        
        if(isAlphaNumeric){ 
            maximumValueOfStringInStrs = max(lengthOfString, maximumValueOfStringInStrs);
        }
        else{
            maximumValueOfStringInStrs = max(numericRepresentationOfString, maximumValueOfStringInStrs);
        }

        isAlphaNumeric = false;
    }

    return maximumValueOfStringInStrs;
}