class Solution {
public:
    int hammingWeight(int n) {
        bitset<31> foo(n);
        return foo.count();
    }
};