class Solution {
public:
    // int usingRecursion(int n){
    //     if(n==0 || n==1) return n;
    //     return fib(n-1)+fib(n-2);
        
    // }
   
   
    // int topDown(int n,vector<int>&dp){
    //     if(n==0 || n==1) return n;
    //     if(dp[n]!=-1)return dp[n];
    //     dp[n]=topDown(n-1,dp)+topDown(n-2,dp);
    //     return dp[n];
    // }


    // int bottomUp(int n,vector<int>&dp){
    //     if(n==0) return n;
    //     dp[0]=0;
    //     dp[1]=1;
        
    //     for (int i=2;i<=n;i++){
    //         dp[i]=dp[i-1]+dp[i-2];
    //     }
    //     return dp[n];
    // }
    int varApproach(int n ){
        if (n==0) return n;
        int prev=0;
        int curr=1;
        int ans=0;
        for (int i =2;i<=n;i++){
            ans =curr+prev;
            prev=curr;
            curr=ans;
        }
        return curr;
    }


    int fib(int n) {
        // vector<int> dp(n+1);
        // int ans=usingRecursion(n);
        // return ans;
        // int ans=topDown(n,dp);
        // return ans;

        // int ans=bottomUp(n,dp);
        // return ans;

        int ans=varApproach(n);
        return ans;
    }
};