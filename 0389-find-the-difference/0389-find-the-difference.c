char findTheDifference(char* s, char* t) {
    int differenceBetweenStringsAsciiValues=0;

    for(int i=0; i < strlen(t)-1; ++i){
        differenceBetweenStringsAsciiValues+=t[i];
        differenceBetweenStringsAsciiValues-=s[i];
    }

    differenceBetweenStringsAsciiValues+=t[strlen(t)-1];

    return (char)differenceBetweenStringsAsciiValues;
}