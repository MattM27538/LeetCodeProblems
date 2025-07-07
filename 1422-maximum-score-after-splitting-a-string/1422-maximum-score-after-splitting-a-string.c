int maxScore(char* s) {
    int maxScore=0;
    int currentScore=0;

    for(int i=1; i<strlen(s); ++i){
        //Add count of each '1' after index s[0] to currentScore.
        if(s[i]=='1'){
            ++currentScore;
        }
    }

    for(int i=0; i<strlen(s)-1; ++i){
        //Add count of each '0' before last index of s to currentScore.
        if(s[i]=='0'){
            ++currentScore;
        }
        //Subtract count of each '1' after index s[0] and before last index of s to currentScore.
        else if(i>0){
            --currentScore;
        }
       
        maxScore=(currentScore>maxScore? currentScore:maxScore);  
    }

    return maxScore;
}