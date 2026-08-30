class Solution {
public:
    double val(double x,long n){
        if(n==0) return 1;
        if(n<0) return val(1/x,-n) ;
        if(n%2==0) return val(x*x,n/2);
        else return x*val(x*x,n/2);
        
    }
    double myPow(double x, int n) {
        // long ans=1;
        return val(x,(long)n);
        
    }  
};