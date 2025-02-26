class Solution {
public:
    int hammingWeight(int n) {
        //Convert n into binary and return count(number of 1's in binVal).
        bitset<31> binVal(n);
        return binVal.count();
    }
};