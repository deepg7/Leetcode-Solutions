class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int> count;
        int n=s.size();
        vector<int> ans;
        for(int i=0;i<n;i++) count[s[i]]=i;
        int i=0,j=0,start=0;
         while(i < n){
         j = max(j, count[s[i]]);
         if( i == j){
            ans.push_back(i-start+ 1);
            start = i + 1;
         }
         i++;
      }
      return ans;
    }
};