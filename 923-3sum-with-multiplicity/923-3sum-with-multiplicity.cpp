class Solution {
public:
    int threeSumMulti(vector<int>& A, int T) {
        long nmap[101] = {0}, ans = 0;
        double third = T / 3;
        for (int num : A) nmap[num]++;
        for (int k = min(T, 100); k >= third; k--) {
            int rem = T - k;
            double half = rem / 2;
            for (int j = min(rem, k); j >= half; j--) {
                int i = rem - j;
                if (i > j || i < 0) continue;
                long x = nmap[i], y = nmap[j], z = nmap[k], res = x * y * z;
                if (res == 0) continue;
                if (i == k) res = x * (x-1) * (x-2) / 6;
                else if (i == j) res = x * (x-1) / 2 * z;
                else if (j == k) res = x * y * (y-1) / 2;
                ans += res;
            }
        }
        return (int)(ans % 1000000007);
    }
};