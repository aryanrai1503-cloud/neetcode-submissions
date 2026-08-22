class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1,n0=0;
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) n0++;
            else prod*=nums[i];
        }
        fill(ans.begin(),ans.end(),0);
        if(n0>1) return ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0&&n0==0)ans[i]=(prod/nums[i]);
            else if(nums[i]!=0&&n0==1) ans[i]=0;
            else ans[i]=(prod);
        }
        return ans;
    }
};
