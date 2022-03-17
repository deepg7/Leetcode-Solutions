class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans = 0, balance = 0;
        
        for(int i = 0; i <s.size(); i++){
            if(s[i] == '('){
                balance++;
            }else{
                balance--;
                if(s[i-1] == '('){
                    ans += (1 << balance);
                }
            }
            // cout << balance << " " << ans << endl;
        }
        
        return ans;
    }
};