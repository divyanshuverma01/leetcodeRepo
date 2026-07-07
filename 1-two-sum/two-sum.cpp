class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp;
        
        for(int i=0;i<nums.size();i++){
            int diff=0;
            diff=target-nums[i];
            for(int j=i+1;j<nums.size();j++){
                if (diff==nums[j]){
                    temp.push_back(i);
                    temp.push_back(j);
                    break;
                }

            }


        
        }
        return temp;
    }
};