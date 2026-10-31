class Solution {

private:

    int mod = (int) (1e9 + 7);

    long long solve(int r ,int c ,bool right,int m,int n,vector<vector<int>>& grid,vector<vector<vector<int>>>& dp){
        

        if(r == m-1 && c == n-1) return 1;

        if(r >= m || c >= n) return 0;
        
        long long rightValue = 0;
        long long downValue = 0;

        if(dp[r][c][right] != -1) return dp[r][c][right];

        if(grid[r][c]){
            if(right) rightValue += solve(r+1,c,false,m,n,grid,dp);
            else downValue += solve(r,c+1,true,m,n,grid,dp);
        }

        if(!grid[r][c]){
            rightValue += solve(r,c+1,true,m,n,grid,dp);
            downValue += solve(r+1,c,false,m,n,grid,dp);
        }

        return dp[r][c][right] = (rightValue + downValue) % mod;
    }

public:
    int uniquePaths(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<vector<int>>> dp(m,vector<vector<int>>(n,vector<int>(2,-1)));

        return solve(0,0,false,m,n,grid,dp);
    }
};