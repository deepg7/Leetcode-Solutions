class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int subArrCnt=0, sum=0;
        int len = nums.size();

        map<int, int> mp;
        mp[0] = 1;
        for(int n : nums) {
            sum += n;
            int rem = sum%k;
            if(rem<0)
                rem+=k;

            if(mp.count(rem)){
                subArrCnt += mp[rem];
                mp[rem] += 1;
            }
            else
                mp[rem] = 1;
        }

        return subArrCnt;
    }
};