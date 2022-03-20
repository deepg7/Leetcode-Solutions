class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Max = nums[0];
        int sum = 0;
        for (auto it:nums){
            sum+=it;
            Max=max(Max,sum);
            sum=max(0,sum);
        }
        return Max;
    }
};