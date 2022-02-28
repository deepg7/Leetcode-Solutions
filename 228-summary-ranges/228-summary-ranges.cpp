class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int start = 0;
        int end = 0;
        vector<string> result;
        int count = 0;
        if(nums.size()==0){
           return {};
            
        }
        for(auto it: nums){
            // cout<<start<<" "<<end<<" "<<it<<endl;
            if (count==0){
                
                   start=it;
                    end=it;
                    count++; 
               
                
            }
            else if(it==end+1){
                end = it;
                count++;
            }
            else{
                string res = start==end? to_string(end):to_string(start)+"->"+to_string(end);
                // cout<<res;
                result.push_back(res);
                // if(it!=nums[nums.size()-1]){
                    start=it;
                    end=it;
                // }
                
            }
            
        }
        string res = start==end? to_string(end):to_string(start)+"->"+to_string(end);
        result.push_back(res);
        return result;
    }
};