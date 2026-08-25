class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int n=s.size();
        int l=0,r=0,cnt=0;
        int maxlen=0;
        int maxfreq=0;
        while(r<n){
            int len;
            freq[s[r]-'A']++;
            maxfreq=max(maxfreq,freq[s[r]-'A']);
            cnt= (r-l+1) - (maxfreq);
            if(cnt>k){
                freq[s[l]-'A']--;
                l++;
            }
            
            if(cnt<=k){
                maxlen=max(r-l+1,maxlen);
            }
            r++;
        }
        return maxlen;
    }
};
