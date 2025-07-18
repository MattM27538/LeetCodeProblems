char* makeSmallestPalindrome(char* s) {
    char* forwardIterator=&s[0];
    char* reverseIterator=&s[strlen(s)-1];

    while(forwardIterator < reverseIterator){
        if(*forwardIterator < *reverseIterator){
            *reverseIterator=*forwardIterator;
        }
        else if(*forwardIterator > *reverseIterator){
            *forwardIterator=*reverseIterator;
        }

        ++forwardIterator;
        --reverseIterator;
    }

    return s;
}