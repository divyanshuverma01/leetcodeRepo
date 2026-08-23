class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left=0;
        int right=0;
        int len=0;
        while(right<s.size()){
            while(st.find(s[right])!=st.end()){
                st.erase(s[left]);
                left++;
                }
            st.insert(s[right]);
            len=max(len,right-left+1);
            right++;
            
            
            
        }

        return len;

    }
};