class Solution {
public:
    vector<int> prevse(vector<int>& nums){
        int n=nums.size();
        vector<int> ans(n);
        ans[0]=nums[0];
        for(int i=1;i<n;i++){
            ans[i] = max(ans[i-1],nums[i-1]);
        }
        return ans;

    }

    vector<int> nextse(vector<int>& nums){
        int n=nums.size();
        vector<int> ans(n);
        ans[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            ans[i] = max(ans[i+1],nums[i]);
        }
        return ans;

    }
    int trap(vector<int>& height) {
        int totvol=0;
        int n=height.size();
        int i=0;
        vector<int> ps=prevse(height);
        vector<int> ns=nextse(height);
        while(i<n){
            int water=0;
            if(min(ps[i],ns[i])>height[i]) water = min(ps[i],ns[i])-height[i];
            height[i]+=water;
            totvol+=water;
            i++;
        }
        return totvol;
    }
};
