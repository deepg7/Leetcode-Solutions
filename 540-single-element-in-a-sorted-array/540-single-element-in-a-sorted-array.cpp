class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int ans = 0;
        for (auto it: nums) ans ^=it;
        return ans;
//         int start = 0;
//         int end = nums.size()-1; 
//         int mid = start + (start - end)/2;
//         while(start<=end){
//             if(mid!=0 && mid!=nums.size()-1) {
//                 if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]) return nums[mid];
                
//             }else if(mid!=0 || mid!=nums.size()-1){
//                 if(nums[mid]!=nums[mid-1]) return nums[mid];
//             }else 
//         }
//         return 0;
    }
};