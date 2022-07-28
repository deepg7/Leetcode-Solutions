class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size()) return false;
        //hashmap n,n
        unordered_map<char,int> one;
        unordered_map<char,int> two;
        for(auto it: s) one[it]++;
        for(auto it: t) two[it]++;
        for(int i = 0; i < s.size();i++) if (one[s[i]]!=two[s[i]]) return false;
        return true;
        
//         //sorting nlogn time 1 space
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         return s==t;
        
        //ordered map nlogn space n time
        // map<char,int> one;
        // for(auto it:s) one[it]++;
        // for(auto it:t) {
        //     if(one[it]==0) return false;
        //     else one[it]--;
        // }
        // for(auto it: one){
        //     if(it.second!=0) return false;
        // }
        // return true;
    }
};