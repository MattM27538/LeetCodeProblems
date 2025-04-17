class Solution {
public:
    int findComplement(int num) {
        std::bitset<32> numInBinary(num);
        auto lengthOfNumInBinary{0};

        //Get length of num in Binary.
        for(int i{0};i<numInBinary.size();++i){
            if(numInBinary[i]==1){
                lengthOfNumInBinary=i+1;
            }
        }

        //Flip all bits in bitset for length of num in Binary.
        for(int i{0};i<lengthOfNumInBinary;++i){
            numInBinary.flip(i);
        }

        return static_cast<int>(numInBinary.to_ulong());
    }
};