class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>temp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int index=0;
            index=abs(nums[i])-1;
            // if(nums[i]<0){
            //     continue;
            // }
            
            if(nums[index]>0){
                nums[index]=-nums[index];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                temp.push_back(i+1);
            }
        }
        return temp;
    }
};