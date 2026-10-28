class Solution {

private:

    int solve(int r , int c,vector<vector<int>>& triangle,vector<vector<int>>& dp){
        if(r == 0) return triangle[0][0];

        if(r < 0 || c < 0) return INT_MAX;

        if(dp[r][c] != -1) return dp[r][c];

        int step1 = INT_MAX;
        if(triangle[r-1].size() > c) step1 = triangle[r][c] + solve(r-1,c,triangle,dp);
        
        int step2 = INT_MAX;
        if(c > 0) step2 = triangle[r][c] + solve(r-1,c-1,triangle,dp);
        
        return dp[r][c] = min(step1,step2);
    }

public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int row = triangle.size();
        int col = triangle[row-1].size();
        int ans = INT_MAX;

        vector<vector<int>> dp(row,vector<int>(row,-1));

        // for(int i = 0; i < col;i++){
        //     ans = min(ans,solve(row-1,i,triangle,dp));
        // }

        // return ans;

        dp[0][0] = triangle[0][0];


        for(int i = 1; i < row;i++){
            
            for(int j = 0; j < triangle[i].size();j++){
                int step1 = INT_MAX;
                if(j < triangle[i-1].size()) step1 = triangle[i][j] + dp[i-1][j];
                
                int step2 = INT_MAX;

                if(j != 0) step2 = triangle[i][j] + dp[i-1][j-1];

                dp[i][j] = min(step1,step2);
            }
        }

        int size = triangle[row-1].size();

        for(int i = 0; i < size;i++){
            ans = min(ans,dp[row-1][i]);
        }

        return ans;
    }
};