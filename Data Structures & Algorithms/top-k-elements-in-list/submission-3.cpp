class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        vector<vector<int>> freq(nums.size()+1);
        for(int n:nums){
            mpp[n] = 1 + mpp[n];
        }
        for(const auto& count:mpp){
            freq[count.second].push_back(count.first);
        }
        vector<int> ans;
        for(int i=nums.size();i>0;i--){
            for(int n:freq[i]){
                ans.push_back(n);
                if(ans.size()==k) return ans;
            }
        }
        return ans;
    }
};
