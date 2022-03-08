class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> rows;
        vector<int> cols;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }
        for (auto it:rows) {
            for(int j=0;j<m;j++){
                matrix[it][j]=0;
            }
        }
        for (auto it:cols) {
            for(int i=0;i<n;i++){
                matrix[i][it]=0;
            }
        }
        
        
    }
};