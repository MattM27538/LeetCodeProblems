struct lettersInBalloon{
    int numOfBs;
    int numOfAs;
    int numOfLs;
    int numOfOs;
    int numOfNs;

};

int numberOfBalloonAppearances(struct lettersInBalloon* countOfLetters){
    int smallestNumberOfAppearances=INT_MAX;
    if(countOfLetters->numOfBs < smallestNumberOfAppearances){smallestNumberOfAppearances=countOfLetters->numOfBs;}
    if(countOfLetters->numOfAs < smallestNumberOfAppearances){smallestNumberOfAppearances=countOfLetters->numOfAs;}
    if(countOfLetters->numOfLs/2 < smallestNumberOfAppearances){smallestNumberOfAppearances=countOfLetters->numOfLs;}
    if(countOfLetters->numOfOs/2 < smallestNumberOfAppearances){smallestNumberOfAppearances=countOfLetters->numOfOs;}
    if(countOfLetters->numOfNs < smallestNumberOfAppearances){smallestNumberOfAppearances=countOfLetters->numOfNs;}

    return smallestNumberOfAppearances;
}

int maxNumberOfBalloons(char* text) {
    struct lettersInBalloon countOfLetters = {
        .numOfBs=0,
        .numOfAs=0, 
        .numOfLs=0, 
        .numOfOs=0, 
        .numOfNs=0
    };

    for(int i=0; i<strlen(text); ++i){
        switch(text[i]){
            case 'b': ++countOfLetters.numOfBs;
            break;
            case 'a': ++countOfLetters.numOfAs;
            break;
            case 'l': ++countOfLetters.numOfLs;
            break;
            case 'o': ++countOfLetters.numOfOs;
            break;
            case 'n': ++countOfLetters.numOfNs;
            break;
        }
    }

    return numberOfBalloonAppearances(&countOfLetters);
}