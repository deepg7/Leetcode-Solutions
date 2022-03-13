class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<char> ss;
        for(int i=0;i<n;i++) {
            if(ss.empty()) {
                if(s[i]=='(' || s[i]=='{' || s[i]=='[') ss.push(s[i]);
                else return false;
            }
            else if(s[i]=='(' || s[i]=='{' || s[i]=='[') ss.push(s[i]);
            else {
                if(ss.top()=='(' && s[i]==')') ss.pop();
                else if(ss.top()=='[' && s[i]==']') ss.pop();
                else if(ss.top()=='{' && s[i]=='}') ss.pop();
                else return false;
            }
        }
        if(ss.size()==0) return true;
        return false;
    }
};