class Solution {
public:
    string addSpaces(string& originalString, vector<int>& spaces) {
        std::string stringWithSpacesAdded {""};
        stringWithSpacesAdded.reserve(originalString.size() + spaces.size());
        int nextSpaceIndexInNewString {0};

        for(decltype(std::ssize(originalString)) originalStringIndex {0}; originalStringIndex < std::ssize(originalString); ++originalStringIndex){
            if(originalStringIndex == spaces[nextSpaceIndexInNewString]){
                stringWithSpacesAdded.push_back(' ');
                if(nextSpaceIndexInNewString < (spaces.size() - 1)){
                    ++nextSpaceIndexInNewString;
                }
            }

            stringWithSpacesAdded.push_back(originalString[originalStringIndex]);
        }

        return stringWithSpacesAdded;
    }
};