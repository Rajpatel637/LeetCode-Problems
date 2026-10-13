class Solution {
public:
    int maxProfit(vector<int>& prices) {
        

        int size = prices.size();

        int l = 0, r = 1;

        int maxProfit = 0;

        while(r < size){

            if(prices[l] < prices[r]){

                maxProfit = max(maxProfit,prices[r] - prices[l]);

            }
            else l = r;

            r++;
        }

        return maxProfit;
    }
};