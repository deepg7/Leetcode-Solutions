class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int V = s.size();
        vector<vector<int>> graph(V);
        for(auto p: pairs) {
            graph[p[0]].push_back(p[1]);
            graph[p[1]].push_back(p[0]);
        }
        vector<bool> visit(V, false);
        vector<vector<int>> ConnCombs;
		/*finding connected componets*/
        for(int i = 0; i < V; ++i) {
            if(visit[i] == false) {
                vector<int> comb = getConnComb(graph, visit, i);
                ConnCombs.push_back(comb);
            }
        }
        /*Building output string from Computed connected components*/
        string output(s.size(),' ');
        for(auto &combPos: ConnCombs) {
            vector<char> combChars;
            for(auto pos: combPos) {
                combChars.push_back(s[pos]);
            }
            sort(combPos.begin(), combPos.end());
            sort(combChars.begin(), combChars.end());
            for(int i = 0; i < combPos.size(); ++i) {
                output[combPos[i]] = combChars[i];
            }
        }
        ////
        return output;
     }
    vector<int> getConnComb(vector<vector<int>>& graph, vector<bool>& visit, int u) {
         vector<int> cmb;
         stack<int> S;
         S.push(u);
         visit[u] = true;
         cmb.push_back(u);
         while(!S.empty()) {
             int uu = S.top();
             S.pop();
             for(auto v: graph[uu]) {
                 if(visit[v] == false) {
                     visit[v] = true;
                     S.push(v);
                     cmb.push_back(v);
                 }
             }
         }
         return cmb;
     }
};