class Solution {
public:
    bool isIsomorphic(string s, string t) {
        std::unordered_map<char,char> charMap;
        int arr[127]={0};
        for(int i=0; i<s.length(); ++i){
            // If char in s has not been mapped check if it's corresponding
            // letter in t has been mapped to.
            if(charMap.find(s[i])==charMap.end()){
                if(!arr[127-t[i]]){
                charMap.insert({s[i],t[i]});
                arr[127-t[i]]=1;
                } else {
                    return false;
                }
            } else if(charMap[s[i]]!=t[i]){
                return false;
            }
        }
        return true;
    }
};