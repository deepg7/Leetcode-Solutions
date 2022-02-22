class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle;
    vector<int> rowOne={1};
    vector<int> rowTwo={1,1};
    for(int i=0;i<numRows;i++){
        triangle.push_back(rowOne);
        rowOne=rowTwo;
        rowTwo.push_back(1);
        for(int j=1;j<rowTwo.size()-1;j++){
            rowTwo[j]=rowOne[j-1]+rowOne[j];
        }
    }   
        return triangle;
    }
};