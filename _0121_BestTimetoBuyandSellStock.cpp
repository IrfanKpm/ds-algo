class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_profit = 0;
        int buy_price = prices[0];
        for(int i=1;i<n;i++){
            if(prices[i] < buy_price){
               buy_price = prices[i];
            }else if(prices[i] - buy_price > max_profit){
                max_profit = prices[i] - buy_price;
            }
        }
        return max_profit;
    }
};
