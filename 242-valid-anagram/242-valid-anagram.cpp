class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> one;
        for(auto it:s) one[it]++;
        for(auto it:t) {
            if(one[it]==0) return false;
            else one[it]--;
        }
        for(auto it: one){
            if(it.second!=0) return false;
        }
        return true;
    }
};