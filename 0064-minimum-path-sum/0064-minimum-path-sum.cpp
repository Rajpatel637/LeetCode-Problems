class Solution {

public:
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<int> prev(col, 0);

        for (int i = 0; i < row; i++) {
            vector<int> temp(col, 0);

            for (int j = 0; j < col; j++) {
                if (i == 0 && j == 0)
                    temp[j] = grid[0][0];
                else {
                    int up = grid[i][j];

                    if (i > 0)
                        up += prev[j];
                    else
                        up = INT_MAX;
                    int left = grid[i][j];

                    if (j > 0)
                        left += temp[j - 1];
                    else
                        left = INT_MAX;

                    temp[j] = min(up, left);
                }
            }
            prev = temp;
        }

        return prev[col - 1];
    }
};