class Solution {
public:
    bool freqCheck(int freq[],int winFreq[]){
        for(int i=0;i<26;i++){
            if(freq[i]!=winFreq[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for (int i=0;i<s1.size();i++){
            freq[s1[i]-'a']++;
        }
        int windSize=s1.size();
        for(int i=0;i<s2.size();i++){
            int windIdx=0;
            int idx=i;
            int winFreq[26]={0};
            while(windIdx<windSize && idx<s2.size()){
                winFreq[s2[idx]-'a']++;
                windIdx++;
                idx++;

                }
            if(freqCheck(freq,winFreq)) return true;

        }
        
        return false;
    }
};