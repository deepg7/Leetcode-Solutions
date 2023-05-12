class Solution {
public:
    long long rec(int i, vector<vector<int>>& q,vector<long>& dp){
        if(i>=q.size())return 0;
        if(dp[i]!=-1) return dp[i];
        
        //pick
        int points = q[i][0];
        int skip = q[i][1];
        long long pickSum = points + rec(i+skip+1,q,dp);
        
        //dont pick 
        long long dpSum = rec(i+1,q,dp);
        
        long long ans = max(pickSum,dpSum);
        return dp[i]=ans;
        
    }
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long> dp(questions.size(),-1);
        return rec(0,questions,dp);
    }
};