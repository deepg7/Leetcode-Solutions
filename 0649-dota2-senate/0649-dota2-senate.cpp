class Solution {
public:
    string predictPartyVictory(string senate) {
        int n=senate.size();

        queue<int> r, d;
        for(int i=0; i<senate.size(); i++)
        {
            if(senate[i]=='R') r.push(i);
            else d.push(i);
        }
        
        while(!r.empty() && !d.empty())
        {
            int rf=r.front(), df=d.front();
            r.pop();
            d.pop();
            if(rf<df) r.push(rf+n);
            else d.push(df+n);
        }
        
        if(!r.empty()) return "Radiant";
        return "Dire";
    }

// Please Upvote :)
};