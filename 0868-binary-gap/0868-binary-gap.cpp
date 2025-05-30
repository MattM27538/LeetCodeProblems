class Solution {
public:
    int binaryGap(int n) {
        auto longestGapDistance{0};
        auto lastIndexOfOne{-1};
        std::bitset<30> nInBinary(n);

        for(int i{0};i<nInBinary.size();++i){
            //Mark index of first 1 in bitset.
            if(lastIndexOfOne==-1 && nInBinary[i]==1){
                lastIndexOfOne=i;
            }
            //Update distances between 1s.
            else if(nInBinary[i]==1){
                longestGapDistance=max(longestGapDistance,i-lastIndexOfOne);
                lastIndexOfOne=i;
            }
        }

        return longestGapDistance;
    }
};