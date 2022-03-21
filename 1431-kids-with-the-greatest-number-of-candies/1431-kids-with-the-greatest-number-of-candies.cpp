class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max=candies[0];
        for (auto it:candies){
            if(max<it)max=it;
        }
        for(auto it:candies){
            if((it+=extraCandies)>=max){
                ans.push_back(true);
            }
            else {
                //c/out<<"hi";
                ans.push_back(false);
                }
        }
        return ans;
    }
};