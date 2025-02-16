class Solution {
public:
    vector<int> countBits(int n) {
        bitset<20> numAsBinary;
        vector<int> ans;

        //Convert i to binary. Push count of 1's in numAsBinary to vector.
        for(int i=0;i<=n;++i){
            numAsBinary=i;
            ans.push_back(numAsBinary.count());
        }

        return ans;
    }
};