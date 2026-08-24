class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profitmax=0;
        int n=prices.size();
        int lmin=prices[0];
        for(int i=1;i<n;i++){
            int profit=prices[i]-lmin;
            profitmax=max(profitmax,profit);
            lmin=min(lmin,prices[i]);
        }
        return profitmax;
        
    }
};
