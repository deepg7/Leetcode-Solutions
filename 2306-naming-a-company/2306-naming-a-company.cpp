class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        long long ans=0;
        unordered_map<string,int> m;
        for(auto x:ideas)
            m[x]++;
        vector<vector<int>> v(26,vector<int>(26,0));
        for(int i=0;i<ideas.size();i++){
            string s=ideas[i].substr(1);
            int a=ideas[i][0]-'a';
            for(int j=0;j<26;j++){
                char b='a'+j;
                string t=b+s;
                if(m.find(t)==m.end())
                    v[a][j]++;
            }
        }
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                if(i==j)
                    continue;
                if(v[i][j]>0)
                    ans+=v[i][j]*v[j][i];
            }
        }
        return ans;
    }
};