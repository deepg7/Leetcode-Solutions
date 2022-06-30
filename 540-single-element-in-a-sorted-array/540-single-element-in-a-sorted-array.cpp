class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        //XOR APPROACH SPACE O(1) TIME O(N)
        // int ans = 0;
        // for (auto it: nums) ans ^=it;
        // return ans;
        
        int low = 0;
        int high = nums.size()-1;
        if(high == 0) return nums[0];
        int mid;
        while(low<=high){
            mid = low + (high-low)/2;
            
            if(mid%2==0){
                if(nums[mid]!=nums[mid+1]){
                    high = mid-1;
                }else low = mid+1;
            }else {
                if(nums[mid]==nums[mid+1]) high = mid -1;
                else low = mid+1;
            }
        }
        return nums[low];
    }
};