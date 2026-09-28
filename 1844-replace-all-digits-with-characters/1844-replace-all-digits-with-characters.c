char getShiftedChar(const char* string, const int index){
    const int asciiValueOfZero = 48;

    return string[index - 1] + ((string[index]) - asciiValueOfZero);
}

char* replaceDigits(char* string) {
    for(int i = 1; i < strlen(string); i += 2){
        string[i] = getShiftedChar(string, i);
    }

    return string;
}
