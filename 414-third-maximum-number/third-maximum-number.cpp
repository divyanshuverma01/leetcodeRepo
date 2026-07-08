class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        sort(nums.begin(),nums.end());
        long v1=LONG_MIN;long v2=LONG_MIN;long v3=LONG_MIN;
        for(int i =n-1;i>=0;i--){
            if(v1<nums[i]){
                v1=nums[i];
                count++;
            }
            else if (v2<nums[i] && nums[i]!=v1){
                v2=nums[i];
                count++;
            }
            else if (v3<nums[i] && nums[i]!=v2 && nums[i]!=v1){
                v3=nums[i];
                count++;
            }
        }  
        if(count<3){
            return int(v1);
        }
        else{
            return int(v3);
        }  


        
    }
};