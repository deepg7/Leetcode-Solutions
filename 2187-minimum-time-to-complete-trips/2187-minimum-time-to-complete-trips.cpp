class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        sort(time.begin(),time.end());
        long long start = 0;
        long long end = 1e14;
        long long mid;
        long long trips;
        while(start<=end){
            mid= start + (end-start)/2;
            trips = 0;
            for(auto it:time){
               trips += mid/it;
            }
            // if(trips==totalTrips) return mid;
            if(trips>=totalTrips) {
                // prevMid = mid;
                end = mid - 1;
            }
            else if(trips <= totalTrips){
                // prevMid=mid;
                start = mid+1;
            }
        }
        
        return start;
    }
};