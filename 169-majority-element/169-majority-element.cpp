class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        
        int num = nums[0];
        int count = 0;
        for(auto it: nums){
            if(it==num) count++;
            else{
                --count;
                if(count == 0) {
                    num = it;
                    count++;
                }
            }
        }
        return num;
        
        //O(n) time and space (better)
        // map<int,int> check;
        // for(auto it: nums){
        //     check[it]++;
        //     if(check[it]>nums.size()/2)return it;
        // } 
        // return 0;
        
        // O(n) time and space (brute)
        // map<int,int> check;
        // for(auto it: nums) check[it]++;
        // for(auto it: check){
        //     if(it.second > nums.size()/2) return it.first;
        // }
        // return 0;
    }
};