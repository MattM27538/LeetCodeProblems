class Solution {
public:
    vector<int> countBits(int n) {
        bitset<20> numAsBinary;
        vector<int> ans;

        //Convert n to binary. Push number of appearances of 1 in binary to vector.
        for(int i=0;i<=n;++i){
            numAsBinary=i;
            ans.push_back(numAsBinary.count());
        }

        return ans;
    }
};