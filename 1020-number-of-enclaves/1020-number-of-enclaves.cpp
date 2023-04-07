class Solution {
public:

    void dfs(int i,int j ,int m ,int n, vector<vector<int>> &grid){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!=1){
            return ;
        }
        grid[i][j]=2;

        dfs(i+1,j,m,n,grid);
        dfs(i,j+1,m,n,grid);
        dfs(i-1,j,m,n,grid);
        dfs(i,j-1,m,n,grid);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int res=0;
        int ini=0;
        int m =grid.size();
        int n =grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    ini++;
                    // dfs(i,j,m,n,grid);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && (i==0 || j==0 || i==m-1 || j==n-1)){
                    dfs(i,j,m,n,grid);
                }
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    res++;
                    // dfs(i,j,m,n,grid);
                }
            }
        }
        return ini-res;
    }
};