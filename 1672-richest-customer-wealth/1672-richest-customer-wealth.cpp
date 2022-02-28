class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int temp=0,max=0;
        for(int i =0;i<n;i++){
            for(auto it:accounts[i]){
                temp+=it;
            }
            if (max<temp) max=temp;
            temp = 0;
        }
        return max;
    }
};