class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                if(nums[j]<nums[i])count++;
            }
            ans.push_back(count);
            count=0;
        }
        return ans;
    }
};