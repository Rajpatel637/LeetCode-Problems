class Solution {

private:
    int countWealth(vector<int>& nums) { 
        int sum = 0;
        
        for(int i = 0; i < nums.size();i++){
            sum += nums[i];
        }
        return sum;
    }

public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = INT_MIN;

        for(int i = 0; i < accounts.size();i++){
            int wealth = countWealth(accounts[i]);
            maxi = max(maxi,wealth);
        }

        return maxi;
    }
};