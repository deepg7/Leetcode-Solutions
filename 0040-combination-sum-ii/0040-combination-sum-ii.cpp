class Solution {
public:
    void fn(int i, int target, vector<int>& arr, vector<int>& ds, vector<vector<int>>& ans){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int j=i;j<arr.size();j++){
            if(j>i && arr[j-1]==arr[j]) continue;
            if(arr[j]>target) break;
            ds.push_back(arr[j]);
            fn(j+1,target-arr[j],arr,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        fn(0,target,candidates,ds,ans);
        return ans;
    }
};