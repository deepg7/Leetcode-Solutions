class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long ans = 0;
        long long count = 0;
        for(int i=0; i<nums.size(); i++){
           if(nums[i] != 0)
               count = 0; 
           if(nums[i]==0){
               count = count + 1;
               ans += count;
        
           }
        }
        return ans;
    }
};