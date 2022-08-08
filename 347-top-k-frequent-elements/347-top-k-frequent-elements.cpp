class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> seen;
        for(int i=0;i<nums.size();i++){
            seen[nums[i]]++;
        }
        vector<int> vt;
        priority_queue<pair<int,int>> pq;
        for(auto i:seen){
            pair<int,int> p;
            p.first=i.second;
            p.second=i.first;
            pq.push(p);
        }
        while(k--){
            pair<int,int> temp = pq.top();
            pq.pop();
            vt.push_back(temp.second);
        }
        
        return vt;
    }
};