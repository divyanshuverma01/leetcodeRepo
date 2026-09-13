class Solution {
public:
struct Compare {
        bool operator()(const pair<int,int>& a,
                        const pair<int,int>& b) {
            return a.second > b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,Compare>minHeap;
        for(int num:nums) mp[num]++;
        for(auto num:mp){
            minHeap.push(num);
            if(minHeap.size()>k) minHeap.pop();
        }
        while(!minHeap.empty()){
            ans.push_back(minHeap.top().first);
            minHeap.pop();
        }
        return ans;
    }

};