class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
//         sort(nums1.begin(),nums1.end());
//         sort(nums2.begin(),nums2.end());
        
        int i = 0;
        if(n==0) return;
        while(i<m){
            if(nums1[i]>nums2[0]) {
                swap(nums1[i],nums2[0]);
                sort(nums2.begin(),nums2.end());
            }
            i++;
        }
        for(int j = 0;j<n;j++){
            nums1[m+j]=nums2[j];
        }
        
    }
};