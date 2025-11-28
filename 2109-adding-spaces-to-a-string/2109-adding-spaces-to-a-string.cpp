class Solution {
public:
    string addSpaces(string& s, vector<int>& spaces) {
        std::string stringWithSpacesAdded {""};
        stringWithSpacesAdded.reserve(s.size() + spaces.size());
        int nextSpaceIndexInNewString {0};

        for(decltype(std::ssize(s)) oldStringIndex {0}; oldStringIndex < std::ssize(s); ++oldStringIndex){
            if(oldStringIndex == spaces[nextSpaceIndexInNewString]){
                stringWithSpacesAdded.push_back(' ');
                if(nextSpaceIndexInNewString < (spaces.size() - 1)){
                    ++nextSpaceIndexInNewString;
                }
            }
            
            stringWithSpacesAdded.push_back(s[oldStringIndex]);
        }

        return stringWithSpacesAdded;
    }
};