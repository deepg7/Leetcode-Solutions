class Solution {
public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         int temp;
//         for(int i=0;i<n-1;i++){
//             for(int j=0;j<n-i-1;j++){
//                 if(nums[j]>nums[j+1]){
//                     temp=nums[j];
//                     nums[j]=nums[j+1];
//                     nums[j+1]=temp;
//                 }
//             }
//         }
    
//     }
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low=0,mid=0,high=n-1;
        while(mid<=high){
            switch(nums[mid]){
                case 0:
                    swap(nums[low++],nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[high--]);
                    break;
            }
        }
        
    
    }
};