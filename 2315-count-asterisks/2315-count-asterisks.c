int countAsterisks(char* str) {
    bool isBetweenVerticalBars = false;
    int numberOfAsterisksInBetweenVerticalBars = 0;

    for(int i = 0; i < strlen(str); ++i){
        if(isBetweenVerticalBars == false && str[i] == '*'){
            ++numberOfAsterisksInBetweenVerticalBars;
        }
        else if(str[i] == '|'){
            if(isBetweenVerticalBars == false){
                isBetweenVerticalBars = true;
            }
            else{
                isBetweenVerticalBars = false;
            }
        }
    }

    return numberOfAsterisksInBetweenVerticalBars;     
}