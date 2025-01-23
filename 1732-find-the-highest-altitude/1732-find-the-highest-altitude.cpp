class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highestAlt=0, currentAlt=0;
        for(int i=0;i<gain.size();++i){
            currentAlt+=gain[i];
            if(highestAlt<currentAlt){highestAlt=currentAlt;}
        }
        return highestAlt;
    }
};