class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        priority_queue<pair<int,int>> fpq;
        int i=1;
        int freq=1;
        while(i<n){

            if(nums[i]==nums[i-1]){
                freq++;
            }
            else{
                fpq.push({freq,nums[i-1]});
                freq=1;
            }
            i++;
        }
        fpq.push({freq,nums[n-1]});
        vector<int> ans;
        while(!fpq.empty()&&k>0){
            int no=fpq.top().second;
            fpq.pop();
            ans.push_back(no);
            k--;
        }
        return ans;
    }
};
