char* toLowerCase(char* s) {
    for(int i=0; i<strlen(s); ++i){
        *(s+i)=tolower(*(s+i));
    }

    return s;
}