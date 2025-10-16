int reverseDegree(char* s) {
    int reverseDegree = 0;
    const int decimalValueForReverseda = 26;
    const int decimalValueForCharactera = 97;
    const int offsetFor1IndexedString = 1;

    for(int i = 0; i < strlen(s); ++i){
        const int decimalValueForCharInString = (int)s[i];
        reverseDegree += (decimalValueForReverseda - (decimalValueForCharInString - decimalValueForCharactera)) * (i + offsetFor1IndexedString);
    }

    return reverseDegree;
}