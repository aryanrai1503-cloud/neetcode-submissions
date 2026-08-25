class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        if(m<n) return false;
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);

        for(int i=0;i<n;i++){
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        int l=0,r=n-1;

        while(r<m){
            if(freq1==freq2) return true;
            freq2[s2[l]-'a']--;
            l++;
            if(r+1<m) freq2[s2[r+1]-'a']++;
            r++;
        }
        return false;
        
    }
};
