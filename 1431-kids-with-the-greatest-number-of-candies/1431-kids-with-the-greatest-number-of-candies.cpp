class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int size = candies.size();

        int maxi = INT_MIN;

        for(int i = 0;i < size;i++){
            if(maxi < candies[i]){
                maxi = candies[i];
            }
        }

        for(int i = 0; i < size;i++){
            if(candies[i] + extraCandies >= maxi) ans.push_back(true);
            else ans.push_back(false);
        }

        return ans;
    }
};