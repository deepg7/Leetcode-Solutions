class Solution {
public:
     vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        vector<string>ans(score.size());
       
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        int count=1;
        while(!pq.empty()){
            int x = pq.top().second;
            if(count==1)
                ans[x]="Gold Medal";
            else if(count==2)
                ans[x]="Silver Medal";
            else if(count==3)
                ans[x]="Bronze Medal";
            else
                ans[x] = to_string(count);
            count++;
            pq.pop();
        }
        return ans;
    }
};