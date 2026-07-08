
void getCriticalConn(int node,int parent,int &timer,vector<int> &disc,vector<int> &low,vector<bool> &visited,vector<vector<int>> &adjList,vector<vector<int>> &result){

    visited[node] = true;
    disc[node] = low[node] = timer++;

    for(auto neighbour : adjList[node]){
        if(neighbour == parent) continue;

        if(!visited[neighbour]){
            getCriticalConn(neighbour,node,timer,disc,low,visited,adjList,result);

            low[node] = min(low[node],low[neighbour]);

            if(low[neighbour] > disc[node]){
                vector<int> ans;
                ans.push_back(node);
                ans.push_back(neighbour);
                result.push_back(ans);
            }
        }
        else{
            low[node] = min(low[node],disc[neighbour]);
        }
    }
}

class Solution {
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adjList(n);

        for(int i = 0; i < connections.size();i++){
            int u = connections[i][0];
            int v = connections[i][1];

            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        int timer = 0;
        int parent = -1;
        vector<int> disc(n,-1);
        vector<int> low(n,-1);
        vector<bool> visited(n);

        vector<vector<int>> result; 

        for(int i = 0; i < n;i++){
            if(!visited[i]){
                getCriticalConn(i,parent,timer,disc,low,visited,adjList,result);
            }
        }

        return result;
    }
};