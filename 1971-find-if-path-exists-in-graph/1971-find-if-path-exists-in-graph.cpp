class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adjList(n);
        vector<bool> visited(n);
        vector<int> parent(n,-1);

        // adjList created

        for(int i = 0; i < edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];

            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        queue<int> q;
        q.push(source);
        visited[source] = true; 
        

        while(!q.empty()){
            int frontNode = q.front();
            q.pop();

            for(auto neighbour : adjList[frontNode]){
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    parent[neighbour] = frontNode;
                    q.push(neighbour);
                }
            }
        }

        int cnt = 0;

        int currentNode = destination;

        while(currentNode != source){
            if(currentNode == -1){
                return false;
            }

            cnt++;
            currentNode = parent[currentNode];
        }

        return true;


    }
};