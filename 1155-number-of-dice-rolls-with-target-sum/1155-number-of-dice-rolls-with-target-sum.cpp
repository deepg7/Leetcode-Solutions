class Solution {
public:
    int numRollsToTarget(int n, int m, int x) {
        int mod = 1e9 + 7;
        int dp[n + 1][x + 1];
        memset(dp, 0, sizeof(dp)); // Initialize all entries as 0
        for (int j = 1; j <= m && j <= x; j++)  dp[1][j] = 1;
        for (int i = 2; i <= n; i++)
            for (int j = 1; j <= x; j++)
                for (int k = 1; k <= m && k < j; k++)
                    dp[i][j] =(dp[i][j] + dp[i-1][j-k])%mod;
 
        /* Uncomment these lines to see content of table
        for (int i = 0; i <= n; i++){
            for (int j = 0; j <= x; j++)
                cout << dp[i][j] << " ";
            cout << endl;
        } */
        return dp[n][x];
    }
};