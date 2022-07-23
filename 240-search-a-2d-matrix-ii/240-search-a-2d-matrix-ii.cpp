class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i =0;
        int j = matrix[0].size()-1;
        int n = matrix.size();
        int ele;
        while(i<n && j>=0){
            ele = matrix[i][j];
            if(ele==target) return true;
            else if(ele>target) j--;
            else i++;
        }
        return false;
    }
};