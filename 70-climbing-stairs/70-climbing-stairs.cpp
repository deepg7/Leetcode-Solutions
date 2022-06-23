class Solution {
public:
    int stairs[46];
    int climbStairs(int n) {
    if(n<=1)
        return stairs[n]=1;
    
    if(stairs[n])
        return stairs[n];
    
    return stairs[n] = climbStairs(n-1)+climbStairs(n-2);
}
};