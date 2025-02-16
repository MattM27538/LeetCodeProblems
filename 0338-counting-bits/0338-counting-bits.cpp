class Solution {
public:
    vector<int> countBits(int n) {
        bitset<20> binaryNum;
        vector<int> ans;

        //Convert n to binary. Push number of appearances of 1 in binary to vector.
        for(int i=0;i<=n;++i){
            binaryNum=i;
            ans.push_back(binaryNum.count());
        }

        return ans;
    }
};