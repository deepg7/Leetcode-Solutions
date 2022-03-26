class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start =0,end=nums.size()-1;
        int mid;
        while(start<=end){
            mid=(end-start)/2 +start;
            if(target==nums[mid])return mid;
            else if(target>nums[mid])start=mid+1;
            else end = mid -1;
        }
        return -1;
    }
};