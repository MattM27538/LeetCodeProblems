class Solution {
public:
    int subtractProductAndSum(int n) {
        string nAsString=to_string(n);
        int product=1, sum=0;
        for(char c:nAsString){product*=c-'0';}
        for(char c:nAsString){sum+=c-'0';}
        return product-sum;
    }
};