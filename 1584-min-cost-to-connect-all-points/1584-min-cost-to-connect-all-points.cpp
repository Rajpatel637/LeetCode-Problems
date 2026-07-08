

int getWeight(int u, int v, vector<vector<int>>& points) {
    int x = abs(points[u][0] - points[v][0]);
    int y = abs(points[u][1] - points[v][1]);

    return x + y;
}

class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<int> key(n, INT_MAX);
        vector<bool> mst(n);

        key[0] = 0;

        for (int i = 0; i < n; i++) {
            int u;
            int mini = INT_MAX;

            for (int v = 0; v < n; v++) {
                if (!mst[v] && key[v] < mini) {
                    u = v;
                    mini = key[v];
                }
            }
            mst[u] = true;

            for (int it = 0; it < n; it++) {
                if (!mst[it]) {
                    int weight = getWeight(u, it, points);
                    if (weight < key[it]) {                  
                        key[it] = weight;
                    }
                }
            }
        }

        int minCost = 0;

        for (int index = 0; index < n; index++) {
            minCost += key[index];
        }

        return minCost;
    }
};