class Solution {
    class UF {
        vector<int> parent;
        vector<int> rank;
        int num;
        public:
            UF(int n) {
                parent = vector<int>(n, 0);
                rank = vector<int>(n, 0);
                for(int i = 0; i < n; i++) {
                    parent[i] = i;
                }
                num = n;
            }
            void Union(int a, int b) {
                int pa = find(a), pb = find(b);
                if(pa == pb) {
                    return;
                }
                if(rank[pa] > rank[pb]) {
                    parent[pb] = pa;
                } else if(rank[pa] < rank[pb]) {
                    parent[pa] = pb;
                } else {
                    parent[pb] = pa;
                    rank[pa]++;
                }
            }
            int find(int index) {
                if(parent[index] == index) {
                    return index;
                }
                return parent[index] = find(parent[index]);
            }
            int getParrentCount() {
                unordered_map<int, int> visited;
                for(int i = 0; i < num; i++) {
                    cout << parent[i] << " ";
                    visited[parent[i]] = 1;
                }
                cout << endl;
                return visited.size();
            }
    };
public:
    static bool comp(vector<int>& a, vector<int>& b) {
        return a[0] > b[0];
    }
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        sort(edges.begin(), edges.end(), &comp);
        vector<UF> ufs;
        UF temp(n), temp2(n);
        ufs.push_back(temp);
        ufs.push_back(temp2);
        int m = edges.size(), res = 0;
        for(int i = 0; i < m; i++) {
            if(edges[i][0] == 3 && ufs[0].find(edges[i][1] - 1) != ufs[0].find(edges[i][2] - 1) && ufs[1].find(edges[i][1] - 1) != ufs[1].find(edges[i][2] - 1)) {
                ufs[0].Union(edges[i][1] - 1, edges[i][2] - 1);
                ufs[1].Union(edges[i][1] - 1, edges[i][2] - 1);
            } else if(edges[i][0] == 2 && ufs[1].find(edges[i][1] - 1) != ufs[1].find(edges[i][2] - 1)) {
                ufs[1].Union(edges[i][1] - 1, edges[i][2] - 1);
            } else if(edges[i][0] == 1 && ufs[0].find(edges[i][1] - 1) != ufs[0].find(edges[i][2] - 1)) {
                ufs[0].Union(edges[i][1] - 1, edges[i][2] - 1);
            } else {
                res++;
            }
        }
        for(int i = 0; i < n; i++) {
            ufs[0].find(i);
            ufs[1].find(i);
        }
        if(ufs[0].getParrentCount() != 1 || ufs[1].getParrentCount() != 1) {
            return -1;
        }
        return res;
    }
};