class Solution {
public:

    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return ((n&(n-1))==0);
    }
//     bool isPowerOfTwo(int n) {
//         if(n==0)return false;
//        return dp(n);
//     }
    
//     bool dp(int n){
//         if(n==1)return true;
//         else if (n%2!=0) return false;
//         else return dp(n/2);
//     }
};