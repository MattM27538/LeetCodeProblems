class Solution {
public:
    int minFlips(int a, int b, int c) {
        int minFlips={0};
        const std::bitset<30> aInBinary{static_cast<unsigned long long>(a)};
        const std::bitset<30> bInBinary{static_cast<unsigned long long>(b)};
        const std::bitset<30> cInBinary{static_cast<unsigned long long>(c)};
        const std::bitset<30> aORbInBinary{aInBinary|bInBinary};

        for(int i=0;i<aORbInBinary.size();++i){
            if(aORbInBinary[i]==0 && cInBinary[i]==1){
                std::cout<<i;
                ++minFlips;
            }
            else if(aORbInBinary[i]==1 && cInBinary[i]==0){
                std::cout<<i;
                std::cout<<"else if = "<<aInBinary[i]+bInBinary[i]<<"\n";
                minFlips+=aInBinary[i]+bInBinary[i];
            }
            // std::cout<<aORbInBinary[i];
        }
        

        return minFlips;
    }
};