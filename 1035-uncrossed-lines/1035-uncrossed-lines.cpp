class Solution {
public:
    int backtrack(int i1,int i2,vector<int>&s1,vector<int>&s2,vector<vector<int>>&dp)
    {
        if(i1<0 or i2<0) return 0;
        if(dp[i1][i2]!=-1) return dp[i1][i2];
        if(s1[i1]==s2[i2]) return 1+backtrack(i1-1,i2-1,s1,s2,dp);
        return dp[i1][i2]=max(backtrack(i1-1,i2,s1,s2,dp),backtrack(i1,i2-1,s1,s2,dp));
    }
    int maxUncrossedLines(vector<int>& s1, vector<int>& s2) {
        int n1=s1.size();
        int n2=s2.size();
        vector<vector<int>>dp(n1,vector<int>(n2,-1));
        return backtrack(n1-1,n2-1,s1,s2,dp);
    }
};
