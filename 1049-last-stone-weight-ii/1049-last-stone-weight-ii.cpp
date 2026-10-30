class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int n = stones.size();

        int totalSum = 0;

        for(int i : stones){
            totalSum += i;
        }

        vector<vector<bool>> dp(n,vector<bool>(totalSum+1,0));

        for(int i = 0; i < n;i++){
            dp[i][0] = true;
        }

        dp[0][stones[0]] = 1;

        for(int i = 1;i < n;i++){
            for(int j = 1; j <= totalSum;j++){
                bool notTaken = dp[i-1][j];

                bool taken = false;

                if(stones[i] <= j){
                    taken = dp[i-1][j-stones[i]];
                }

                dp[i][j] = notTaken | taken; 
            }
        }

        int minDiff = INT_MAX;

        for(int i = 0; i <= totalSum/2;i++){
            if(dp[n-1][i]) minDiff = min(minDiff,(totalSum - (2*i)));
        }

        if(minDiff == INT_MAX) return 0;

        return minDiff;
    }
};