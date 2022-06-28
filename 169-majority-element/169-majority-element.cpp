class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> check;
        for(auto it: nums) check[it]++;
        for(auto it: check){
            if(it.second > nums.size()/2) return it.first;
        }
        return 0;
    }
};