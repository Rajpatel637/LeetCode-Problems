class Solution {

private:
    long long maxWays(vector<int>& coins, int n, int value) {
        vector<vector<long long>> ans(n + 1, vector<long long>(value + 1));

        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < value + 1; j++) {
                if (i == 0)
                    ans[i][j] = 0;

                if (j == 0)
                    ans[i][j] = 1;
            }
        }

        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < value + 1; j++) {
                if (coins[i - 1] <= j) {
                    if (ans[i - 1][j] > INT_MAX - ans[i][j - coins[i - 1]]) {
                        ans[i][j] = INT_MAX;
                    } else {
                        ans[i][j] = ans[i - 1][j] + ans[i][j - coins[i - 1]];
                    }
                } else {
                    ans[i][j] = ans[i - 1][j];
                }
            }
        }

        return ans[n][value];
    }

public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();

        return maxWays(coins, n, amount);
    }
};