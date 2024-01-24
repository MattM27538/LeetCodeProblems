func lengthOfLastWord(s string) int {    
    switch(len(s)){
        case 1:return 1
        break
        default:{
            wordLen:=0
            startWord:=1
            for i:=len(s)-1; i>0; i-- {
                if(s[i]==' '){
                    startWord++
                }else {
                    break
                    }
            }
            
            for i:=len(s)-startWord; i>=0; i-- {
                if(s[i]!=' '){
                    wordLen++
                } else {
                    break
                     }
            }
            return wordLen
        }
    }
    return 0
}