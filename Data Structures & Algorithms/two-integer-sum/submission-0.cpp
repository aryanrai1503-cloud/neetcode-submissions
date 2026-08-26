class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            if (mpp.find(nums[i]) != mpp.end()) {
                return {mpp[nums[i]], i};
            }

            mpp.insert({target - nums[i], i});
        }
    }
};
