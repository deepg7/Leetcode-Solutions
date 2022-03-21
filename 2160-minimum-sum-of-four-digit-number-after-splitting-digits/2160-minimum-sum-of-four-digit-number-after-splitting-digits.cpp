class Solution {
public:
    int minimumSum(int num) {
        vector<int> nums;
        for(auto it:to_string(num)){
            int a =it-'0';
            nums.push_back(a);
        }
        sort(nums.begin(),nums.end());
        return 10*(nums[0]+nums[1])+nums[2]+nums[3];
    }
};