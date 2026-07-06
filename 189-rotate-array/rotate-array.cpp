class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> temp(n);
        
        for(int index=0;index<n;index++){
            int newIndex=(index+k)%n;
            temp[newIndex]=nums[index];
            
        }
        nums=temp;
        }
};