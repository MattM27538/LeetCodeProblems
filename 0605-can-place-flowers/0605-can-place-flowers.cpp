class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int possiblePlacements={0};
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);

        //Check index plus adjacent plots. If all are empty increase
        //possible placements by 1.
        for(int i=1;i<flowerbed.size()-1;++i){
            if(!(flowerbed[i-1]+flowerbed[i]+flowerbed[i+1])){
                ++possiblePlacements;
                i+=1;
            }
        }

        if(possiblePlacements>=n){return true;}
        return false;
    }
};