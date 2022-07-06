class Solution {
public:
    int fib(int n) {
        int x = 0;
        int y = 1;
        
        if(n==0 || n==1){
            return n;
            
        }
        
        while(n!=0){
            x+=y;
            y=abs(y-x);
            n--;
        }
        return x;
    }
};