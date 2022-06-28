class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        map<int,int> check;
        for(auto it: nums) check[it]++;
        for(auto it: check){
            if(it.second > nums.size()/3) ans.push_back(it.first);
        }
        return ans;
    }
};