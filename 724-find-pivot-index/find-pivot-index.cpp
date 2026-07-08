class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightSum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            rightSum=rightSum+nums[i];
        }
        int leftSum=0;
        for(int i=0;i<n;i++){
            rightSum-=nums[i];
            if(rightSum==leftSum){
                return i;
            }
            leftSum+=nums[i];
            
        }
        return -1;
    }
};