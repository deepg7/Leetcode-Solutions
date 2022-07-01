class Solution {
public:
    static bool sortCol(vector<int>& A, vector<int>& B){
        return A[1]>B[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),sortCol);
        int total = 0;
        for(auto it:boxTypes){
            if(it[0]<=truckSize){
                truckSize-=it[0];
                total+= it[0]*it[1];
            }else {
                total += (truckSize)*it[1];
                truckSize = 0;
                break;
            }
        }
        return total;
    }
};