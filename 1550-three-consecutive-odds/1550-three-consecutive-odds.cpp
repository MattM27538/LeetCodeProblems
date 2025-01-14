class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int oddsInARow=0;
        for(int i=0; i<arr.size(); ++i){
            if(arr[i]%2!=0){
                ++oddsInARow;
                if(oddsInARow==3){return true;}
            } else {
                oddsInARow=0;
            }
        }
        return false;
    }
};