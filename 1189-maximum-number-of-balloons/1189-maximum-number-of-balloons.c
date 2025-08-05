struct Balloon{
    int lettersInBalloon[5]; // [0]='b', [1]='a', [2]='l', [3]='o', [4]='n'
    const size_t lettersInBalloonSize;
    int smallestNumberOfAppearancesOfBalloon;
};

int maxNumberOfBalloons(char* text) {
    struct Balloon Balloon={
        .lettersInBalloon={0,0,0,0,0},
        .lettersInBalloonSize=sizeof(Balloon.lettersInBalloon)/sizeof(int),
        .smallestNumberOfAppearancesOfBalloon=INT_MAX,
    };

    for(int i=0; i < strlen(text); ++i){
        switch(text[i]){
            case 'b': ++Balloon.lettersInBalloon[0];
            break;
            case 'a': ++Balloon.lettersInBalloon[1];
            break;
            case 'l': ++Balloon.lettersInBalloon[2];
            break;
            case 'o': ++Balloon.lettersInBalloon[3];
            break; 
            case 'n': ++Balloon.lettersInBalloon[4];
            break;
        }
    }

    //Account for 'l' and 'o' needing to appear twice to make one instance of "balloon".
    Balloon.lettersInBalloon[2]/=2;
    Balloon.lettersInBalloon[3]/=2;

    for(int i=0; i<Balloon.lettersInBalloonSize; ++i){
        if(Balloon.lettersInBalloon[i] < Balloon.smallestNumberOfAppearancesOfBalloon){
            Balloon.smallestNumberOfAppearancesOfBalloon=Balloon.lettersInBalloon[i];
        }
    }

    return Balloon.smallestNumberOfAppearancesOfBalloon;
}