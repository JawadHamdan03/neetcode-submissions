class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_pr = INT_MAX;
    int max_profit=0;
    for (int i : prices)
    {
        min_pr=min(i,min_pr);
        max_profit=max(max_profit,i-min_pr);
    }
    return max_profit;
    }
};
