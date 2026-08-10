class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());

        int n = prices.size();
        int m = discounts.size();

        int i = n-1;
        int j = m-1;
        double finalPrice = 0;

        while(i >= 0){
            if(j >= 0){
                double disPrice = prices[i] * (100-discounts[j]);
                disPrice = disPrice/100.0;

                finalPrice += disPrice;
                i--;
                j--;
            }
            else{
                finalPrice += prices[i];
                i--;
            }
        }

        return finalPrice;
    }
};