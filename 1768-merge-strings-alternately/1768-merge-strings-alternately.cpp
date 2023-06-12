class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int o = word1.length();
        int t = word2.length();
        string ans = "";
        if(o==t){
            for(int i=0;i<o;i++){
                ans+=(word1[i]);
                ans+=word2[i];
            } 
        }
        else if(o>t){
            for(int i=0;i<t;i++){
                ans+=(word1[i]);
                ans+=word2[i];
            }
            for(int i=t;i<o;i++){
                ans+=(word1[i]);
            }
        }
        else{
            for(int i=0;i<o;i++){
                ans+=(word1[i]);
                ans+=word2[i];
            }
            for(int i=o;i<t;i++){
                ans+=(word2[i]);
            }
        }
        return ans;
    }
};