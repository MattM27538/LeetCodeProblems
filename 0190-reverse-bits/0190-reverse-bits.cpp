class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        std::bitset<32> myBitSet={n};

        //Reverse bits from ends of bitset to center of bitset iteratively.
        for(int i={0};i<myBitSet.size()/2;++i){
            int temp={myBitSet[i]};
            myBitSet[i]=myBitSet[myBitSet.size()-i-1];
            myBitSet[myBitSet.size()-i-1]=temp;
        }

        return myBitSet.to_ulong();
    }
};