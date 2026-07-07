class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        // int left=0;
        // int right=1;
        int sum=0;
        int max=INT_MIN;
        for (int i=0;i<n;i++){
            sum=sum+nums[i];
            if(sum>max){max=sum;}
            if(sum<0){
                sum=0;
                // left++;
                // right++;

            }
           
                // max=sum;
            

           
            
            

        }
        return max;
    }
};