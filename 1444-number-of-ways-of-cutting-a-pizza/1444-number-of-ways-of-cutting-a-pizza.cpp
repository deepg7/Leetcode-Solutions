class Solution {
    const int mod = 1e9 + 7;
    int solve(int r, int c, int k, vector<vector<int>> &count, vector<vector<vector<int>>> &memo) {
        if(k == 0) return count[r][c] > 0;
        int m = count.size() - 1;
        int n = count[0].size() - 1;
        if(memo[r][c][k] != -1) return memo[r][c][k];
        int ans = 0;
        for(int i = r + 1; i < m; i++) {
            if(count[r][c] - count[i][c] > 0)
                ans = (ans + solve(i, c, k - 1, count, memo)) % mod;
        }
        for(int i = c + 1; i < n; i++) {
            if(count[r][c] - count[r][i] > 0)
                ans = (ans + solve(r, i, k - 1, count, memo)) % mod;
        }
        return memo[r][c][k] = ans;
    } 
public:
    int ways(vector<string>& pizza, int k) {
        int m = pizza.size(), n = pizza[0].size();
        vector<vector<int>> count(m + 1, vector<int>(n + 1));
        for(int i = m - 1; i >= 0; i--) {
            for(int j = n - 1; j >= 0; j--) {
                count[i][j] = (pizza[i][j] == 'A') + count[i + 1][j] + count[i][j + 1] - count[i + 1][j + 1];
            }
        }
        vector memo(m, vector<vector<int>>(n, vector<int>(k, -1)));
        return solve(0, 0, k - 1, count, memo);
    }
};