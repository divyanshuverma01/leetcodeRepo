class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--){
            int currElem=nums2[i];
            if(st.empty()){
                st.push(currElem);
                mpp[currElem]=-1;
                continue;
            }
            if(st.top()>currElem){
                mpp[currElem]=st.top();
                st.push(currElem);
                continue;
            }
            while(!st.empty() && st.top()<currElem  ){
                st.pop();
            }
            if(st.empty()){
                mpp[currElem]=-1;

            }
            else{
                mpp[currElem]=st.top();
            }
            st.push(currElem);
        }
        vector<int>answer;
        for(int ans:nums1){
            answer.push_back(mpp[ans]);

        }
        return answer;
    }
};