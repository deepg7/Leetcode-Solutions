class Solution {
public:
    double average(vector<int>& salary) {
        int min = INT_MAX;
        int max = INT_MIN;
        int n = salary.size();
        double sum = 0;
        for(auto it:salary) {
            sum+=it;
            if(it>max) max = it;
            if(it<min) min = it;
        }
        return (sum-max-min)/(n-2);
    }
};