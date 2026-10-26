class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {

        vector<int> dp(n + 1);
        dp[0] = 0;

        for (int i = 1; i <= n; i++) {
            int minSteps = INT_MAX;
            for (int j = 1; j <= 3; j++) {
                if (i - j >= 0) {
                    int jump = dp[i - j] + costs[i-1];
                    jump += j * j;
                    minSteps = min(minSteps, jump);
                }
            }
            dp[i] = minSteps;
        }

        return dp[n];
    }
};