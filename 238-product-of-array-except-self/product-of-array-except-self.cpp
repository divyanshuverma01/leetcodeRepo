class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        // vector<int> prefix(len);
        // vector<int> suffix(len);
        vector<int>answer(len,1);
        // prefix[0]=1;
        // suffix[nums.size()-1]=1;
        
        for (int i=1;i<nums.size();i++){
            answer[i]=answer[i-1]*nums[i-1];
        }
        int suffix=1;
        for (int i=nums.size()-2;i>=0;i--){
            suffix=suffix*nums[i+1];
            answer[i]=answer[i]*suffix;
        }
        // for (int i=0;i<nums.size();i++){
        //     answer[i]=prefix[i]*suffix[i];
        // }
        return answer;
    }
};