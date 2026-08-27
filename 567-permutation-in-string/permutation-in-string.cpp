class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int frameSize=s1.size();
        if(frameSize>s2.size()) return false;
        string sortS1=s1;
        string sortS2=s2;
        sort(sortS1.begin(),sortS1.end());
        for(int i=0;i<s2.size();i++){
            string sortS2=s2.substr(i,frameSize);
            sort(sortS2.begin(),sortS2.end());
            if(sortS2==sortS1){
                return true;
            }
        }
        return false;
    }
};