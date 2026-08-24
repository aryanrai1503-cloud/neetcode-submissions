class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profitmax=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int profit = prices[j]-prices[i];
                profitmax=max(profit,profitmax);
            }
        }
        return profitmax;
        
    }
};
