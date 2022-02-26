class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
         int sz = graph.size(), N = 1 << sz;
        vector<vector<vector<int> > > A(sz, vector<vector<int> >(sz, vector<int>(N, -1)));
        queue<array<int, 3>> q;
        for (int i = 0; i < sz; ++i) {
            A[i][i][1 << i] = 0;
            array<int, 3> e = {i, i, 1 << i};
            q.push(e);
        }
        int result = 0;
        while (!q.empty()) {
            int sz1 = q.size();
            while (sz1-- > 0) {
                array<int, 3> from = q.front();
                q.pop();
                if (from[2] + 1 == N) {
                    return result;
                }
                for (const auto & to : graph[from[1]]) {
                    int nstatus = from[2] | (1 << to);
                    if (A[from[0]][to][nstatus] < 0 or result + 1 < A[from[0]][to][nstatus]) {
                        array<int, 3> e = {from[0], to, nstatus};
                        q.push(e);
                        A[from[0]][to][nstatus] = result + 1;
                    }
                }
            }
            ++result;
        }
        return -1;
    }
};