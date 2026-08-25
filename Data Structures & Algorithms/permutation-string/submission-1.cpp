class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        int l=0,r=n-1;
        sort(s1.begin(),s1.end());
        while(r<m){
            string s3 = s2.substr(l,n);
            sort(s3.begin(),s3.end());
            if(s1==s3) return true;
            l++;r++;
        }
        return false;
        
    }
};
