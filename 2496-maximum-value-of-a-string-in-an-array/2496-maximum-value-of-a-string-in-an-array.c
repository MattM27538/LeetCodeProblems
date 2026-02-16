int max(const int num1, const int num2){
    return num1 > num2 ? num1 : num2;
}

int getCharacterAsDecimalNumber(const char characterInString, const int exponent){
    const int zeroInAscii = 48;
    return (pow(10, exponent) * (characterInString - zeroInAscii));
}

int maximumValue(char** strs, const int strsSize) {
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
            const int exponent = ((strlen(strs[i]) - j) - 1);
            const char characterInString = strs[i][j];
            numericRepresentationOfString += getCharacterAsDecimalNumber(characterInString, exponent);
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