char* restoreString(char* s, int* indices, int indicesSize) {
    char* restoredString = (char*)malloc(sizeof(char) * (indicesSize + 1));
    
    for(int i = 0; i < indicesSize; ++i){
        restoredString[indices[i]] = s[i];
    }

    restoredString[strlen(s)] = '\0';

    return restoredString;
}