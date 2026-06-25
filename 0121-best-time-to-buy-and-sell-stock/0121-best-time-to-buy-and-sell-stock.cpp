class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a = prices[0];
        int profit = 0;

        for(int i=0; i<prices.size(); i++)
        {
            if(prices[i] < a)
                a = prices[i];
            else
            {
               int b = (prices[i] - a);
                profit = (max(b, profit));
            }
        }
        return profit;
    };
};