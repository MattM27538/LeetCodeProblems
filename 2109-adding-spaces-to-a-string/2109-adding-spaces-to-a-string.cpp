class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        //Test with reserve

        std::string stringWithSpacesAdded {""};
        stringWithSpacesAdded.reserve(s.size() + spaces.size());

        int nextSpaceIndex {0};

        for(decltype(std::ssize(s)) oldStringIndex {0}; oldStringIndex < std::ssize(s); ++oldStringIndex){
            if(oldStringIndex == spaces[nextSpaceIndex]){
                stringWithSpacesAdded.push_back(' ');
                if(nextSpaceIndex < spaces.size()-1){
                    ++nextSpaceIndex;
                }
                // ++oldStringIndex;
            }

            stringWithSpacesAdded.push_back(s[oldStringIndex]);
        }

        return stringWithSpacesAdded;
    }
};