char* generateTheString(int n) {
    char* generatedString=calloc(n+1,sizeof(char));

    for(int i=0; i < n; ++i){
        generatedString[i]='o';
    }
    
    //Change last char in string if string length is even.
    if(n%2 == 0){
        generatedString[n-1]='k';
    }

    generatedString[n]='\0';

    return generatedString;
}