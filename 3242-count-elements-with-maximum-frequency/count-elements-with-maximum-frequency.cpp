class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        if(nums.empty()) return 0;
        map<int,int>mp;
        int size=nums.size();
        for(int i =0;i<size;i++){
            if(mp.find(nums[i])!=mp.end()){
                mp[nums[i]]+=1;

            }
            else mp[nums[i]]++;
        }
        int maxFreq=0;int count=0;
        for(const auto ch:mp){
            if(ch.second>maxFreq){
                maxFreq=ch.second;
            }

        }
        for(const auto ch:mp){
            if(ch.second==maxFreq){
                count+=maxFreq;
            }
        }
        return count;
    }
};