class Solution {

private:
    int solve(int r, int c, vector<vector<int>>& matrix,
              vector<vector<int>>& dp) {
        if (r < 0 || c < 0 || c >= matrix[0].size())
            return INT_MAX;
        if (r == 0)
            return dp[r][c] = matrix[r][c];

        if (dp[r][c] != -1)
            return dp[r][c];

        int step1 = solve(r - 1, c + 1, matrix, dp);
        if (step1 != INT_MAX)
            step1 += matrix[r][c];

        int step2 = solve(r - 1, c, matrix, dp);
        if (step2 != INT_MAX)
            step2 += matrix[r][c];

        int step3 = solve(r - 1, c - 1, matrix, dp);
        if (step3 != INT_MAX)
            step3 += matrix[r][c];

        return dp[r][c] = min(step1, min(step2, step3));
    }

public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>> dp(row, vector<int>(col, -1));

        for (int i = 0; i < col; i++) {
            dp[row-1][i] = matrix[row-1][i];
        }

        for (int i = row-2; i >= 0; i--) {
            for (int j = 0; j < col; j++) {

                int step1 = INT_MAX;
                if (j != 0)
                    step1 = dp[i + 1][j - 1];

                int step2 = dp[i + 1][j];

                int step3 = INT_MAX;
                if(j != col-1) step3 = dp[i+1][j+1];

                dp[i][j] = matrix[i][j] + min(step1,min(step2,step3));
            }
        }

        int ans = INT_MAX;

        for(int i = 0; i < col;i++){
            ans = min(ans,dp[0][i]);
        }

        return ans;
    }
};