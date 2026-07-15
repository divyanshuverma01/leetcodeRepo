class Solution {
public:
    // int usingRecursion(int n){
    //     if(n==0 || n==1) return n;
    //     return fib(n-1)+fib(n-2);
        
    // }
    int topDown(int n,vector<int>&dp){
        if(n==0 || n==1) return n;
        if(dp[n]!=-1)return dp[n];
        dp[n]=topDown(n-1,dp)+topDown(n-2,dp);
        return dp[n];


    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        // int ans=usingRecursion(n);
        // return ans;
        int ans=topDown(n,dp);
        return ans;
    }
};