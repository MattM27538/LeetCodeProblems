bool isVowel(char letter){
    switch(toupper(letter)){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                {
                    return true;
                }
            break;

            default: 
                {
                    return false;
                }
    }
}

void swapChars(char* letter1, char* letter2){
    char temp=*letter1;
    *letter1=*letter2;
    *letter2=temp;
}

char* reverseVowels(char* s) {
    char* forwardIterator=s;
    char* reverseIterator=s+(strlen(s)-1);

    while(forwardIterator<reverseIterator){
        if(!isVowel(*forwardIterator)){
            ++forwardIterator;
        }
        else if(!isVowel(*reverseIterator)){
            --reverseIterator;
        }
        else{
            swapChars(forwardIterator,reverseIterator);
            ++forwardIterator;
            --reverseIterator;
        }
    }

    return s;
}