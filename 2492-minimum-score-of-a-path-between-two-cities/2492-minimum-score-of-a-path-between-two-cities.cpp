class Solution {
public:
int ans=INT_MAX;
    void dfs(int node,unordered_map<int,int> adj[],vector<int> &visited
    ,int mini){
        visited[node]=1;
        for(auto it:adj[node]){
            ans=min(ans,it.second);
            if(ans==mini)
            return;
            if(!visited[it.first])
                dfs(it.first,adj,visited,mini);
        }
        return;
    }
    int minScore(int n, vector<vector<int>>& roads) {
        unordered_map<int,int> adj[n+1];
        int mini=INT_MAX;
        for(int i=0;i<roads.size();i++){
            adj[roads[i][0]].insert({roads[i][1],roads[i][2]});
            adj[roads[i][1]].insert({roads[i][0],roads[i][2]});
            mini=min(mini,roads[i][2]);
        }
        vector<int> visited(n+1,0);
        dfs(1,adj,visited,mini);
        return ans;
    }
};