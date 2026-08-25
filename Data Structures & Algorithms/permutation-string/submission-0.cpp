class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        vector<int> freq1(26,0);

        for(int i=0;i<n;i++){
            freq1[s1[i]-'a']++;
        }
        int l=0,r=n-1;
        while(r<m){
            vector<int> freq2(26,0);
            for(int i=l;i<=r;i++){
                freq2[s2[i]-'a']++;
            }
            if(freq1==freq2) return true;
            l++;r++;
        }
        return false;
        
    }
};
