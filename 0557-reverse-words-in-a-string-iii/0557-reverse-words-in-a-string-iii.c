bool stringIndexIsSpaceOrNullTerminator(const char* str, const int index){
    return str[index] == ' ' || str[index] == '\0';
}

void reverseWordInString(char* str, const int startOfWordIndex, const int endOfWordIndex){
    char* forwardIteratorOfWord = &(str[startOfWordIndex]);
    char* reverseIteratorOfWord = &(str[endOfWordIndex]);

    while(forwardIteratorOfWord < reverseIteratorOfWord){
        const char forwardIteratorChar = *forwardIteratorOfWord;
        *forwardIteratorOfWord = *reverseIteratorOfWord;
        *reverseIteratorOfWord = forwardIteratorChar;
        ++forwardIteratorOfWord;
        --reverseIteratorOfWord;
    }
}

int setStartOfWordIndexToNextWord(const int whitespaceIndex){
    return whitespaceIndex + 1;
}

char* reverseWords(char* str) {
    int startOfWordIndex = 0;

    for(int i = 0; i < strlen(str) + 1; ++i){
        if(stringIndexIsSpaceOrNullTerminator(str, i)){
            reverseWordInString(str, startOfWordIndex, i - 1);
            
            startOfWordIndex = setStartOfWordIndexToNextWord(i);
        }
    }

    return str;
}