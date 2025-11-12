int mostWordsFound(char** sentences, int sentencesSize) {
    int maximumNumberOfWordsInAnySentence = 0;

    for(int i = 0; i < sentencesSize; ++i){
        int wordsInSentence = 1;
        for(int j = 0; j < strlen(sentences[i]); ++j){
            if(sentences[i][j] == ' '){
                ++wordsInSentence;
            }

            maximumNumberOfWordsInAnySentence = wordsInSentence > maximumNumberOfWordsInAnySentence? wordsInSentence : maximumNumberOfWordsInAnySentence;
        }
    }

    return maximumNumberOfWordsInAnySentence;
}