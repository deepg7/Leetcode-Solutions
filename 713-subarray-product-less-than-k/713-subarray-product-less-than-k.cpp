class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i =0;
        int j = 0;
        int prod = 1;
        int ans = 0;
        int N = nums.size();
        for(;j<N;++j){
            prod*=nums[j];
            while(prod>=k && i<=j)prod /= nums[i++];
            ans += j-i+1;
        }
        return ans;
    }
};