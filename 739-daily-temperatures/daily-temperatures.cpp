class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>answer(temperatures.size());
        stack<int>st;
        for(int i=temperatures.size()-1;i>=0;i--){
            int currIdx=i;
            if(st.empty()){
                st.push(currIdx);
                answer[i]=0;
                continue;
            }
            if(temperatures[st.top()]>temperatures[currIdx]){
                
                answer[i]=st.top()-currIdx;
                st.push(currIdx);
                continue;
            }
            while(!st.empty() && temperatures[st.top()]<=temperatures[currIdx]){
                
                st.pop();
            }
            if(st.empty()) {
                
                answer[i]=0;
                }

            else {
                answer[i]=st.top()-currIdx;
                
            }
            st.push(currIdx);
        }
        return answer;
    }
};