int max(const int value1, const int value2){
    return value1 >= value2 ? value1 : value2;
}

int mostWordsFound(char** sentences, int sentencesSize) {
    int maximumNumberOfWordsInAnySentence = 0;

    for(int i = 0; i < sentencesSize; ++i){
        int wordsInSentence = 1;
        for(int j = 0; j < strlen(sentences[i]); ++j){
            if(sentences[i][j] == ' '){
                ++wordsInSentence;
            }

            maximumNumberOfWordsInAnySentence = max(wordsInSentence, maximumNumberOfWordsInAnySentence);
        }
    }

    return maximumNumberOfWordsInAnySentence;
}