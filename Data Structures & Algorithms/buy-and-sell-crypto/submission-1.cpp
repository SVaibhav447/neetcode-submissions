class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int profit = 0;
        int maxprofit = 0;
        // profit = sell - buy

       for(int x : prices) {
        mini = min(mini, x);
        maxprofit = max(maxprofit, x - mini);
                            }
        return maxprofit;
    }
};
