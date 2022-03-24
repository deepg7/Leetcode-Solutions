class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end(),greater<int>());
        int boat =0;
        int n=people.size();
        int end = n-1;
        int i = 0;
        // for(int i=0;i<n;i++){
        while(i<=end){
            if(people[i]+people[end]<=limit){

                end--;
            }
                boat++;
                i++;
        }
            
            
        
        return boat;
    }
};