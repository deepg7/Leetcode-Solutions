class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     int count = 0,maxm=0;
        for(int i=0;i<nums.size();i++){
          if(nums[i]==1){
              maxm = max(++count,maxm);
          }else{
              count=0;
          }
            
        }
        return maxm;
    }
};