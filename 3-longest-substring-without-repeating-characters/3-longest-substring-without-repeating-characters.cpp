class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> count(128,0);
        int i = 0;
        int j = 0;
        int N = s.size();
        int ans = 0;
        for(;j<N;++j){
            count[s[j]]++;
            while(count[s[j]]>1)count[s[i++]]--;
            ans = max(ans,j-i+1);
        }
        return ans;
    }
};