class Solution {
public:
    //USING EXTRA SPACE
    // void fn( vector<int>& ds, vector<vector<int>>& ans, vector<int>& nums,int freq[]){
    //     if(ds.size()==nums.size()){
    //         ans.push_back(ds);
    //         return;
    //     }
    //     for(int i=0;i<nums.size();i++){
    //         if(!freq[i]){
    //             freq[i]=1;
    //             ds.push_back(nums[i]);
    //             fn(ds,ans,nums,freq);
    //             freq[i]=0;
    //             ds.pop_back();
    //         }
    //     }
    // }
    void fs(int ind, vector<vector<int>>& ans, vector<int>& nums){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[i],nums[ind]);
            fs(ind+1, ans, nums);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        // int freq[nums.size()];
        // for(int i=0;i<nums.size();i++) freq[i]=0;
        // fn(ds,ans,nums,freq);
        // vector<int> ds;
        vector<vector<int>> ans;
        fs(0,ans,nums);
        return ans;
    }
};