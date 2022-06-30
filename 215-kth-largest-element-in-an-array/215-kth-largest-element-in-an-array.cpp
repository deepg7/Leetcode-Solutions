class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      if(nums.size()==1) return nums[0];  
      sort(nums.begin(),nums.end());
        for(auto it: nums) cout<<it;
      for(int i = nums.size()-1;i>=0;i--){
          k--;
          if(k==0) return nums[i];
      }
        return 0;
    }
};