class Solution {
public:
    int subtractProductAndSum(int n) {
        string nString=to_string(n);
        int product=1, sum=0;
        for(char c:nString){product*=c-'0';}
        for(char c:nString){sum+=c-'0';}
        return product-sum;
    }
};