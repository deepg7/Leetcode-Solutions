class TimeMap {
public:
    unordered_map<string,unordered_map<int,string>> ds;
    unordered_map<string,vector<int>> timestamps; // to store the list of "timestamps" corresponding to "key" 
    
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        ds[key][timestamp] = value;
        timestamps[key].push_back(timestamp);
    }
    
    string get(string key, int timestamp) {
        int index = binarySearch(timestamps[key],timestamp);
        if(index!=-1){
            return ds[key][timestamps[key][index]];
        }
        return "";
    }
    // To find the index of value from array such that arr[index] strictly <= val, else return -1 if not exists.
    int binarySearch(vector<int> &arr, int &val){
        int l=0,r=arr.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==val)
                return mid;
            if(arr[mid]<val){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return l-1;
    }
};