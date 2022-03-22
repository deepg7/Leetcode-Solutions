class Solution {
public:
    string getSmallestString(int n, int k) {
        string arr = "";
 
    for(int i = 0; i < n; i++)
        arr += 'a';
    for (int i = n - 1; i >= 0; i--)
    {
        k -= i;
        if (k >= 0)
        {
            if (k >= 26)
            {
                arr[i] = 'z';
                k -= 26;
            }
            else
            {
                char c= (char)(k + 97 - 1);
                arr[i] = c;
                k -= arr[i] - 'a' + 1;
            }
        }
 
        else
            break;
 
        k += i;
    }
    return arr;
    }
};