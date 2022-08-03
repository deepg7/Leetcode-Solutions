class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sizeOfVector=nums.size();
        if(sizeOfVector<2)
            return sizeOfVector;
        int id=1;
        for(int i=1;i<sizeOfVector;i++)
        {
            if(nums[i]!=nums[i-1])
               nums[id++]=nums[i];
        }
        return id++;
    }
};