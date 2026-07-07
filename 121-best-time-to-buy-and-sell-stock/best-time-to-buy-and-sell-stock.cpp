class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int profit=0;
        
        for (int i=1;i<prices.size();i++){
            if (prices[i]>buy){
                profit=max(prices[i]-buy,profit);
            }
            buy=min(buy,prices[i]);
            
           
            
        }
       
            
            
            
     return profit;        

    }
        // int profit=0;
        
   
    
};