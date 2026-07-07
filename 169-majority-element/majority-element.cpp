class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(nums[i])!=mpp.end()){
                mpp[nums[i]]+=1;
            }
            else{
                mpp[nums[i]]=1;
            }
            
        }
        for(const auto &x:mpp){
            if(x.second>nums.size()/2){
                return x.first;
            }
        }
        return -1;

    }
};