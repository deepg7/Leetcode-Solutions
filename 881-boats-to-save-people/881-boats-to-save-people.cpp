class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end(),greater<int>());
        int boat =0;
        int n=people.size();
        int end = n-1;
        for(int i=0;i<n;i++){
            // cout<<"i: "<<i<<endl<<"end: "<<end<<endl<<"people i: "<<people[i]<<endl<<"people end: "<<people[end]<<endl;
            // cout<<(people[i]!=0&&people[i]+people[end]<=limit)<<endl;
            if(people[i]!=0&&people[i]+people[end]<=limit){
                people[end]=0;
                people[i]=0;
                boat++;
                end--;
            }
            else if(people[i]!=0){
                 people[i]=0;
                boat++;
            }
            
            
        }
        return boat;
    }
};