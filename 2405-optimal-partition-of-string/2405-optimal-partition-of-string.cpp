class Solution {
public:
    int partitionString(string s) {
        int i = 0; int count = 1;
        unordered_map<char, int> mp;

        while(s[i] != '\0')
        {
            if(mp[s[i]] + 1 == 2)
            {
                mp.clear();
                count++;
            }
            mp[s[i]]++;
            i++;
        }
        return count;
    }
};