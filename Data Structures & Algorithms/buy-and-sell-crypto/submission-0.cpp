class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int profit = 0;
        int maxprofit = 0;
        // profit = sell - buy

        for(int x : prices){
            if(x<mini) mini = x;
            profit = x - mini;
            maxprofit = max(profit, maxprofit);
        }
        return maxprofit;
    }
};
