class Solution {
public:
   void solve(string digit, string output, int index, vector<string>& ans, string mapping[] ) 
   {
      if(index>=digit.length()) //base case 
      {
          ans.push_back(output);
          return;
      }
       int number=digit[index]-'0'; //change string into number
       string value=mapping[number];//find in mapping
       for(int i=0;i<value.length();i++)
       {
           output.push_back(value[i]);// store the char 
            solve(digit, output, index+1, ans, mapping);// call 
            output.pop_back(); //pop the last value
       }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)
            return ans;
        string output;
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};