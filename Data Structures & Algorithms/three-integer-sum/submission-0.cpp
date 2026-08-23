class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            int tar = -nums[i];
            int j = 0, k = n - 1;
            while (j < k) {
                if (j == i){
                    j++;
                    continue;
                }
                if (k == i){
                    k--;
                    continue;
                }
                if (nums[j] + nums[k] > tar)
                    k--;
                else if (nums[j] + nums[k] < tar)
                    j++;
                else{
                    vector<int> triplet = {-tar, nums[j], nums[k]};
                    sort(triplet.begin(), triplet.end());
                    if (find(ans.begin(), ans.end(), triplet) == ans.end()) {
                        ans.push_back(triplet);
                    } 
                    j++;
                    k--;
                }
            }
        }
        return ans;
    }
};
