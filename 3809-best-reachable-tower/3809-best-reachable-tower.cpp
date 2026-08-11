class Solution {

private:
    int findDist(vector<vector<int>>& towers, vector<int>& center, int index) {
        int dist = abs(towers[index][0] - center[0]) +
                   abs(towers[index][1] - center[1]);

        return dist;
    }

public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center,
                          int radius) {

        int size = towers.size();
        vector<int> ans;
        int qFactor = INT_MIN;
        int x = -1;
        int y = -1;

        for (int i = 0; i < size; i++) {
            int ans = findDist(towers, center, i);

            if (ans <= radius) {
                if (qFactor < towers[i][2]) {
                    qFactor = towers[i][2];
                    x = towers[i][0];
                    y = towers[i][1];

                } else if (qFactor == towers[i][2]) {
                    if ((x > towers[i][0]) || (x == towers[i][0] && y > towers[i][1])){
                        x = towers[i][0];
                        y = towers[i][1];
                    }
                }
            }
        }

        ans.push_back(x);
        ans.push_back(y);

        return ans;
    }
};