class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> tower;
        for(int i = 0; i < 100; i ++)
            tower.push_back(vector<double>(i + 1, 0.0));

        tower[0][0] = poured;
        for(int i = 0 ; i < tower.size() ; i ++)
            for(int j = 0 ; j <= i ; j ++){
                if(tower[i][j] > 1.0){
                    double left = tower[i][j] - 1.0;
                    tower[i][j] = 1.0;
                    if(i + 1 < tower.size()){
                        tower[i + 1][j] += left / 2;
                        tower[i + 1][j + 1] += left / 2;
                    }
                }
            }

        return tower[query_row][query_glass];
    }
};