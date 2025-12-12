int findIndexWhereCharOccursInWord(const char* const word, const char character){
    int indexWhereCharIsFound = 0;

    for(int i = 0; i < strlen(word); ++i){
        if(word[i] == character){
            indexWhereCharIsFound = i;
            break;
        }
    }

    return indexWhereCharIsFound;
}

void reversePrefixOfWord(const char* const word, const int indexWhereCharOccursInWord){
    char* forwardIterator = &word[0];
    char* reverseIterator = &word[indexWhereCharOccursInWord];

    while(forwardIterator < reverseIterator){
        const char temp = *forwardIterator;
        *forwardIterator = *reverseIterator;
        *reverseIterator = temp;
        ++forwardIterator;
        --reverseIterator;
    }
}

char* reversePrefix(const char* const word, const char character) {
    const int indexWhereCharOccursInWord = findIndexWhereCharOccursInWord(word, character);

    reversePrefixOfWord(word, indexWhereCharOccursInWord);

    return word;
}