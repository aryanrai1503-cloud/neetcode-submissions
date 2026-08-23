class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int maxlen=1;
        for(int i=1;i<n;i++){
            int len=1;
            while(i<n){
                if(nums[i]-nums[i-1]==0) i++;
                else if(nums[i]-nums[i-1]==1){
                    len++;
                    i++;
                }else break;
            }
            maxlen=max(maxlen,len);
        }
        return maxlen;
    }
};
