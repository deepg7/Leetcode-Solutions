class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int half = n/2;
        for(int i=0;i<half;i++){
            char temp = s[i];
            s[i]=s[n-i-1];
            s[n-1-i]=temp;
        }
    }
};