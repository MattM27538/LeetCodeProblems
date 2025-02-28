class Solution {
public:
    int minFlips(int a, int b, int c) {
        int minFlips={0};
        const bitset<30> aInBinary{static_cast<unsigned long long>(a)};
        const bitset<30> bInBinary{static_cast<unsigned long long>(b)};
        const bitset<30> cInBinary{static_cast<unsigned long long>(c)};
        const bitset<30> aORbInBinary{aInBinary|bInBinary};

        /*If an index of aORbInBinary does not equal cInBinary then increment 
          minflips by 1 if aORbInBinary is 0 because only one bit in a or b 
          need to be flipped to make aOrbInBinary==c==1. Otherwise increment 
          minflips by the number of 1s in the indices of interest in a and b 
          which would be flipped to 0's to make aORbInBinary==c==0.
        */
        for(int i=0;i<aORbInBinary.size();++i){
            if(aORbInBinary[i]==0 && cInBinary[i]==1){
                ++minFlips;
            }
            else if(aORbInBinary[i]==1 && cInBinary[i]==0){
                minFlips+=aInBinary[i]+bInBinary[i];
            }
        }
        
        return minFlips;
    }
};