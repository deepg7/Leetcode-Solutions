class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Max = nums[0];
        int sum = 0;
        for (auto it:nums){
            sum+=it;
            if(sum>Max)Max=sum;
            if(sum<0)sum=0;
        }
        return Max;
    }
};