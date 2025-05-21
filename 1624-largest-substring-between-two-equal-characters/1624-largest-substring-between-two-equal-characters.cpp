class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        auto maxLength{-1};
        std::unordered_map<char,std::pair<int,int>> charToStrIndicesMap{};

        for(int i{0};i<s.size();++i){
            //Add index of first instance of a char in s to map.
            if(charToStrIndicesMap.find(s[i])==charToStrIndicesMap.end()){
                charToStrIndicesMap[s[i]]=std::make_pair(i,0);
            }
            else{
                //Add index of non-first instance of a char in s to map and calculate distance
                //between the first and last instance of those chars.
                charToStrIndicesMap[s[i]].second=i;
                maxLength=max((charToStrIndicesMap[s[i]].second-charToStrIndicesMap[s[i]].first)-1,maxLength);
            }
        }
        return maxLength;
    }
};