class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, string> mpp;
        vector<vector<string>> ans;
        for (int i = 0; i < n; i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            string ss = s;
            if (mpp.find(ss) != mpp.end()) {
                int row = 0;

                for (int idx = 0; idx < ans.size(); idx++) {
                    if (ans[idx][0] == mpp[ss]) {
                        row = idx;
                        break;
                    }
                }
                ans[row].push_back(strs[i]);
            }
            else {
                mpp.insert({ss, strs[i]});
                ans.push_back({strs[i]});
            }
        }
        return ans;
    }
};
