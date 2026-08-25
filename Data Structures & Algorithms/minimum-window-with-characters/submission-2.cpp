class Solution {
   public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mpp;
        int n = s.size(), m = t.size();
        if (m > n) return "";
        for (char c : t) {
            mpp[c]++;
        }
        int l = 0, r = 0, minlen = 1e9, idx = -1;
        int cnt = 0;
        while (r < n) {
            if (mpp[s[r]] > 0) {
                cnt++;
            }
            mpp[s[r]]--;
            while (cnt == m) {
                if (r - l + 1 < minlen) {
                    minlen = r - l + 1;
                    idx = l;
                }
                mpp[s[l]]++;
                if (mpp[s[l]] > 0) cnt--;
                l++;
            }
            r++;
        }
        return (idx == -1) ? "" : s.substr(idx, minlen);
    }
};
