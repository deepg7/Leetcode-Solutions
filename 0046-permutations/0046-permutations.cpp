class Solution {
public:
    void fn( vector<int>& ds, vector<vector<int>>& ans, vector<int>& nums,int freq[]){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                freq[i]=1;
                ds.push_back(nums[i]);
                fn(ds,ans,nums,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++) freq[i]=0;
        vector<int> ds;
        vector<vector<int>> ans;
        fn(ds,ans,nums,freq);
        return ans;
    }
};