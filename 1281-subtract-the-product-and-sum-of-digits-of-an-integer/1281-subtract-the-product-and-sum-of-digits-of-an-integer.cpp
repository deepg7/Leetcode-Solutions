class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum =0;
        int pr =1;
        while(n>0){
            int a = n%10;
            n/=10;
            sum+=a;
            pr*=a;
        }
        return pr-sum;
    }
};