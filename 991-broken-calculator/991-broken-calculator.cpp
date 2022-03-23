class Solution {
public:
    int brokenCalc(int X, int Y) {
        int ans = 0;
    while (X < Y) {
        ans++;
        if (Y % 2) Y++;
        else Y /= 2;
    }
    return X - Y + ans;
    }
};