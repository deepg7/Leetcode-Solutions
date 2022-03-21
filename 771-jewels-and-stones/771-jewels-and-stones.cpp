class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> jewelMap;
        int c=0;
        for(auto it:jewels){
            if(jewelMap[it]==0) jewelMap[it]=1;
        }
        for(auto it:stones){
            if(jewelMap[it]==1)c++;
        }
        return c;
    }
};