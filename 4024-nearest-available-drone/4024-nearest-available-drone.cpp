class Solution {

private:
    int getDis(vector<int>& num, vector<int>& target) {
        int x1 = num[0];
        int y1 = num[1];
        int range = num[2];

        int x2 = target[0];
        int y2 = target[1];

        int dis = abs(x1 - x2) + abs(y1 - y2);

        return dis;
    }

public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int n = drones.size();

        int index = -1;

        int dis = INT_MAX;

        for (int i = 0; i < n; i++) {
            int checkDis = getDis(drones[i], target);

            if (checkDis <= drones[i][2]) {
                if (checkDis == dis) {
                    if (index > i)
                        index = i;
                } else if(checkDis < dis) {
                    dis = checkDis;
                    index = i;
                }
            }
        }

        return index;
    }
};