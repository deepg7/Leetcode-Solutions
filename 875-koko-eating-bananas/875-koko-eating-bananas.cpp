class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int hi = *max_element(piles.begin(),piles.end());
        int lo = 1;
        int mid;
        if(piles.size()==h) return hi;
        while(lo<hi){
            mid = lo + (hi-lo)/2;
            int hours = 0;
            for(auto it: piles){
                hours += it/mid+ (it%mid!=0);
            }
            if(hours<=h)hi = mid;
            else lo=mid+1;
            
        }
        return hi;
    }
};