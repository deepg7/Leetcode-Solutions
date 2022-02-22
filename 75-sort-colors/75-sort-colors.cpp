class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        //vector<int> count;
        // for(int i=0;i<n;i++){
        //     if(count[nums[i]]==0){
        //         count[nums[i]]=1;
        //     }
        //     count[nums[i]]++;
        // }
        int temp;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(nums[j]>nums[j+1]){
                    temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
    
    }
};