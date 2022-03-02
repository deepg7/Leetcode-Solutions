class Solution {
public:
    bool isSubsequence(string s, string t) {
      int j = 0; 
        int m = s.length();
        int n = t.length();

        for (int i=0; i<n && j<m; i++) 
            if (s[j] == t[i]) 
                j++; 

        // If all characters of s were found in t 
        return (j == m); 
    }
};