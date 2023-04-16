class Solution {
    typedef vector<long long> vi;
    const int MOD = 1e9 + 7;
public:
    int numWays(vector<string>& words, string target) {
        int n=size(words[0]), m=size(target);
        if(m > n) return 0;
        
        vector<vi> f(n+1, vi(26));
        for(string& word : words)
            for(int i=1; i<=n; ++i)
                ++f[i][word[i-1]-'a'];
        
        vector<vi> dp(n+1, vi(m+1));
        for(int i=0; i<=n; ++i) dp[i][0] = 1;
		
        for(int i=1; i<=n; ++i)
        for(int j=1; j<=min(i, m); ++j)
            (dp[i][j] += dp[i-1][j] + f[i][target[j-1]-'a'] * dp[i-1][j-1]) %= MOD;
        return dp[n][m];
    }
};