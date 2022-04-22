class MyHashMap {
public:
    vector<int>v;
    
    MyHashMap() {
        v.resize(1000001,-1);
    }
    
    void put(int key, int value) {
        v[key] = value;
      
    }
    
    int get(int key) {
        if(v[key]!=-1)
            return v[key];
        else
            return -1;
    }
    
    void remove(int key) {
    v[key] = -1;
    }
};