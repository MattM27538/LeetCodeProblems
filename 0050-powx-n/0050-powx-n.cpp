class Solution {
public:
    double myPow(double x, int n){
        double ans=1.0; long long ncopy=n;
        if(ncopy<0){ncopy=-1*ncopy;}
        while(ncopy){
            if(ncopy%2==0){
                x*=x; ncopy/=2;
            } else{
                ans*=x; ncopy--;
                }
       }
       if(n<0){ans=1/ans;}
       return ans;
    }
};