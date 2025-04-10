class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int permutationDifference={0};
        std::unordered_map<char,int> charIndexMap;
        
        //Map all chars in s to their index.
        for(int i={0};i<s.size();++i){
            charIndexMap[s[i]]=i;
        }

        //Add abs value of same char indices between strings s and t.
        for(int i={0};i<t.size();++i){
            permutationDifference+=abs(charIndexMap[t[i]]-i);
        }

        return permutationDifference;
    }
};