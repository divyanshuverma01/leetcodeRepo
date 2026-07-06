class Solution {
public:
    string removeDuplicates(string s) {
        int len=s.length();
        // for (int i=0;i<len;i++){
        //     if(s[i]==s[i+1]){
        //         s.erase(i,2);
        //     }
        int left=0;
        int right=1;
        while(len>right){
            if(s[left]==s[right]){
                s.erase(left,2);
                left=0;
                right=1;
            }
            else{
                left++;
                right++;
            }
        }
        return s;
    }

    
};