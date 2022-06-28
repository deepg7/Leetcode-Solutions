class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int n1 = -1;
        int n2 = -1;
        int c1 = 0;
        int c2 = 0;
        for(auto i: nums){
            if(i == n1) c1++;
            else if(i == n2)c2++;
            else if(c1==0) {
                c1 = 1;
                n1 = i;
            }
            else if(c2==0){
                c2=1;
                n2=i;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=c2=0;
        for(auto i: nums){
            if(i == n1) c1++;
            else if (i==n2) c2++;
        }
        if(c1>n/3) ans.push_back(n1);
        if(c2>n/3)ans.push_back(n2);
        return ans;
        
        // vector<int> ans;
        // map<int,int> check;
        // for(auto it: nums) check[it]++;
        // for(auto it: check){
        //     if(it.second > nums.size()/3) ans.push_back(it.first);
        // }
        // return ans;
    }
};