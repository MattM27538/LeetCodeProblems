// struct Balloon{
// };

int maxNumberOfBalloons(char* text) {
    // struct Balloon Balloon={
    // int lettersInBalloon[5]={0,0,0,0,0}; // [0]='b', [1]='a', [2]='l', [3]='o', [4]='n'
    size_t lettersInBalloonSize=5;
    int smallestNumberOfAppearancesOfBalloon=INT_MAX;
    int* lettersInBalloon = (int*)malloc(sizeof(int)*5);
    memset(lettersInBalloon,0,5*sizeof(int));
        // .lettersInBalloon={0,0,0,0,0},
        // .lettersInBalloonSize=sizeof(Balloon.lettersInBalloon)/sizeof(int),
        // .smallestNumberOfAppearancesOfBalloon=INT_MAX,
    // };

    for(int i=0; i < strlen(text); ++i){
        switch(text[i]){
            case 'b': ++lettersInBalloon[0];
            break;
            case 'a': ++lettersInBalloon[1];
            break;
            case 'l': ++lettersInBalloon[2];
            break;
            case 'o': ++lettersInBalloon[3];
            break; 
            case 'n': ++lettersInBalloon[4];
            break;
        }
    }

    //Account for 'l' and 'o' needing to appear twice to make one instance of "balloon".
    lettersInBalloon[2]/=2;
    lettersInBalloon[3]/=2;

    for(int i=0; i<lettersInBalloonSize; ++i){
        if(lettersInBalloon[i] < smallestNumberOfAppearancesOfBalloon){
            smallestNumberOfAppearancesOfBalloon=lettersInBalloon[i];
        }
    }

    return smallestNumberOfAppearancesOfBalloon;
}