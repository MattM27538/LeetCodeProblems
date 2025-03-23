class Solution {
public:
    int smallestNumber(int n) {
        std::bitset<10> myBitSet(n);
        int ans={0};

        /* Determine binary size of n then calculate value for binary 
           number of that size with all bits set. */
        for(int i={myBitSet.size()-1};i>=0;--i){
            if(myBitSet[i]==1){
                for(int j={i};j>=0;--j){
                    ans+=pow(2,j);
                }
                goto exitLoop;
            }
        }

    exitLoop:
        return ans;
    }
};