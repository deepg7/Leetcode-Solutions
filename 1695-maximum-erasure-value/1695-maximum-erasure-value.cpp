class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
//         int curr_sum=0, res=0;
		
// 		//set to store the elements
//         unordered_set<int> st;
        
//         int i=0,j=0;
//         while(j<nums.size()) {
//             while(st.count(nums[j])>0) {
// 				//Removing the ith element untill we reach the repeating element
//                 st.erase(nums[i]);
//                 curr_sum-=nums[i];
//                 i++;
//             }
// 			//Add the current element to set and curr_sum value
//             curr_sum+=nums[j];
//             st.insert(nums[j++]);
			
// 			//res variable to keep track of largest curr_sum encountered till now...
//             res = max(res, curr_sum);
//         }
        
//         return res;
        map<int,int> check;
        int i =0;
        int j = 0;
        int ans = 0;
        int curr = 0;
        int N = nums.size();
        for(;j<N;++j){
            check[nums[j]]++;
            curr+=nums[j];
            while(check[nums[j]]>1){
                check[nums[i]]--;
                curr-=nums[i++];
            }
            ans = max(curr,ans);
        }
        return ans;
    }
};