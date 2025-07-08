bool isVowel(char letter){
    //Return true if letter is a vowel.
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
            //Move to forward to next char in string s.
            ++forwardIterator;
        }
        else if(!isVowel(*reverseIterator)){
            //Move to backwards to next char in string s.
            --reverseIterator;
        }
        else{
            swapChars(forwardIterator, reverseIterator);
            ++forwardIterator;
            --reverseIterator;
        }
    }

    return s;
}