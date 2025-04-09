class Solution {
public:
    vector<int> evenOddBit(int n) {
        std::vector<int> evenOddVec={0,0};
        std::bitset<10> binaryOfN(n);

        //Iterate through bits of n and check if they're on or off.
        for(int i={0};i<binaryOfN.size();++i){
            if(binaryOfN[i]==1){
                if(i%2==0){
                    ++(evenOddVec[0]);
                }
                else{
                    ++(evenOddVec[1]);
                }
            }
        }

        return evenOddVec;
    }
};