int maximumValue(char** strs, int strsSize) {
    bool isAlphaNumeric = false;
    // int longestLengthOfAStringInStrs = 0;
    // int numericRepresentationOfLongestStringInStrs = 0;
    int  maximumValueOfStringInStrs;

    for(int i = 0; i < strsSize; ++i){
        int lengthOfString = 0;
        int numericRepresentationOfString = 0;

        for(int j = 0; j < strlen(strs[i]); ++j){
            if(!isdigit(strs[i][j])){
                isAlphaNumeric = true;
            }

            ++lengthOfString;
            numericRepresentationOfString += ((pow(10, ((strlen(strs[i]) - j) - 1))) * ((strs[i][j]) - 48));
            printf("%zu , ",  (strlen(strs[i]) - j) - 1);
        }
        printf("%d, ",  numericRepresentationOfString);
        
        if(isAlphaNumeric){
            maximumValueOfStringInStrs = lengthOfString > maximumValueOfStringInStrs ? lengthOfString : maximumValueOfStringInStrs; 
        }
        else{
            maximumValueOfStringInStrs = numericRepresentationOfString > maximumValueOfStringInStrs ? numericRepresentationOfString : maximumValueOfStringInStrs; 
        }

        printf(" %d\n ",  maximumValueOfStringInStrs);

        isAlphaNumeric = false;
    }

    // return max(longestLengthOfAStringInStrs, numericRepresentationOfLongestStringInStrs);
    // return numericRepresentationOfLongestStringInStrs > longestLengthOfAStringInStrs ? numericRepresentationOfLongestStringInStrs : longestLengthOfAStringInStrs;
    return maximumValueOfStringInStrs;
}