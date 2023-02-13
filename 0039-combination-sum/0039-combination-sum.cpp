class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        fn(0,target,candidates.size(),candidates,ds,ans);
        return ans;
    }
    void fn(int i, int target, int n,vector<int>& candidates, vector<int>& ds, vector<vector<int>>& ans){
        if(i==n){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(candidates[i]<=target){
            ds.push_back(candidates[i]);
            fn(i,target-candidates[i],n,candidates,ds,ans);
            ds.pop_back();
        }
        fn(i+1,target,n,candidates,ds,ans);
    }
};