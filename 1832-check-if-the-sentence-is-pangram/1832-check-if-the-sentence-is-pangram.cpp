class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<int,int> check;
        for(auto it:sentence){
            check[(int)it]++;
        }
        for(int i = 0; i<26;i++){
            if(check[97+i]==0) return false;
        }
        return true;
    }
};