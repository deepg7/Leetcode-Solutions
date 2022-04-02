class Solution {
public:
    bool validPalindrome(string s) {
        int l= 0, r= s.length()-1;
        while(l< r){
            if(s[l] != s[r])
                return isValid(s, l+1, r) || isValid(s, l, r-1);
            l++; r--;
        }
        return true;
    }
    
    bool isValid(string s, int left, int right){
        while(left< right){
            if(s[left] != s[right])
                return false;
            left++; right--;
        }
        return true;
    }
};