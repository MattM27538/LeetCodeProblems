class Solution {
public:
    int mySqrt(int x) {
        long result = x;
        while(!(result*result-x<1)){result=(result+x/result)/2;}
        return result;
    }
};