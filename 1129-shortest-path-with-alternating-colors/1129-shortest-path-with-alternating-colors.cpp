class Solution {
private:
    int n;
    vector<pair<int,int>> bfs(vector<int> adj1[],vector<int> adj2[],bool col){
        vector<pair<int,int>> vec(n,{1e9,1e9});
        queue<pair<int,int>> q;
        q.push({0,col}); vec[0] = {0,0};
        while(q.size()){
            auto [node,col] = q.front(); q.pop();
            if(col){
                for(auto child : adj1[node]){
                    if(vec[child].first <= (vec[node].second+1)) continue;
                    vec[child].first = vec[node].second+1;
                    q.push({child,!col});
                }
            }else{
                for(auto child : adj2[node]){
                    if(vec[child].second <= (vec[node].first+1)) continue;
                    vec[child].second = vec[node].first+1;
                    q.push({child,!col});
                }
            }
        }
        return vec;
    }
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        this->n = n;
        vector<int> adj1[n]; vector<int> adj2[n];
        for(auto v : redEdges) adj1[v.front()].push_back(v.back());
        for(auto v : blueEdges) adj2[v.front()].push_back(v.back());
        
        auto vec1 = bfs(adj1,adj2,false);
        auto vec2 = bfs(adj1,adj2,true);

        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i] = min({vec1[i].first,vec1[i].second,vec2[i].first,vec2[i].second});
            if(ans[i] == 1e9) ans[i] = -1;
        }
        return ans;
    }
};