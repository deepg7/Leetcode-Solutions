class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int lo = 0;
        int mid,ele;
        int hi = m*n-1;
        while(lo<=hi){
            mid = lo + (hi-lo)/2;
            ele = matrix[mid/n][mid%n];
            if(ele==target) return true;
            else if(ele>target)hi=mid-1;
            else lo = mid+1;
        }
        return false;
    }
};