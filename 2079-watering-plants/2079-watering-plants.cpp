class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int count = 1;
        int x = -1;
        int remainingCapacity = capacity;
        
        for(int i=0;i<plants.size()-1;i++){
            remainingCapacity -= plants[i];
            plants[i]=0;
            if(remainingCapacity>=plants[i+1]){//to determine whether i should go ahead
                count++;
            }else{
                remainingCapacity = capacity;
                count += (2*i-2*x+1);
            }
            
        }
        return count;
    }
};