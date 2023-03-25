class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        //find out all the connected graphs
        //use for loop to return the result
        long long result = 0;
        vector<vector<int>> graph(n);
        for(auto& edge: edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        //use dfs to find the components
        vector<bool> visited(n);
        int num = 0;
        for(int i = 0; i < n; i++){
            int val = dfs(i, graph, visited);
            if(val != 0){
                result += 1LL * num * val;
                num += val;
            }
        }
        return result;
        
    }

    int dfs(int node, vector<vector<int>>& graph, vector<bool>& visited){
        if(visited[node]) return 0;
        int num = 1;
        visited[node] = true;
        for(int u: graph[node]){
            if(!visited[u]){
                num += dfs(u, graph, visited);
            }
        }
        return num;
    }
};