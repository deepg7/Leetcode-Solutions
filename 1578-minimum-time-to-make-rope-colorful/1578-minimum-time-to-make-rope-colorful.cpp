class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size();
        int ans=0;
        int cost=0;
        char c='*';
        for(int i=0;i<n;i++)
        {
            if(c==colors[i])
            {
               if(cost<neededTime[i])
               {
                 ans=ans+cost;
                 cost=neededTime[i];  
               }
                else
                    ans=ans+neededTime[i];
            }
            else
            {
                cost=neededTime[i];
                c=colors[i];
            }
        }
        return ans;
    }
};