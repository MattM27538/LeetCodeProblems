class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int possiblePlacements={0};
        int count={0};
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);
        for(int i=1;i<flowerbed.size()-1;++i){
            // cout<<flowerbed[i];
            if(!(flowerbed[i-1]+flowerbed[i]+flowerbed[i+1])){
                // ++count;
                ++possiblePlacements;
                i+=1;
            }
            // else{
            //     // possiblePlacements+=count/2;
            //     cout<<count;
            //     count=0;
            //     }
        }

        if(possiblePlacements>=n){return true;}
        return false;
    }
};