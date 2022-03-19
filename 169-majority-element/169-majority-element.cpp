class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n = nums.size();
        int ans = nums[0];
        int count = 0;
        for(auto it=nums.begin();it!=nums.end();it++){
            if(ans == *it){
                ++count;
            }else{--count;
                    if(count==0){
                        ans=*it;
                        count++;
                    }
            }
        }
        return ans;
    }
};