func longestCommonPrefix(strs []string) string {
    longestPrefix := ""
    switch len(strs) {
        case 1: return strs[0]
        default: {
            // Sort strs alphabetically, determine length of first and last elements,
            // compare each sequential char of both words and append each match to 
            // longestPrefix string.
            sort.Strings(strs)
            var shortestStringLen int
            if len(strs[0])<len(strs[len(strs)-1]) {
                shortestStringLen = len(strs[0])
            } else{shortestStringLen = len(strs[len(strs)-1])}
            for i:=0; i<shortestStringLen; i++ {
                if strs[0][i]==strs[len(strs)-1][i] {
                    longestPrefix = longestPrefix + string([]rune(strs[0])[i])
                }   else{break}
            }
        }
    }
    return longestPrefix
}
