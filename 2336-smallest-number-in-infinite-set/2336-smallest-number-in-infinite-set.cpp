class SmallestInfiniteSet {
public:
    set<int> s;
    SmallestInfiniteSet() {
        for(int i=1;i<1001;i++){
            s.insert(i);
        }
    }
    
    int popSmallest() {
        int a=*s.begin();
        s.erase(s.begin());
        return a;
    }
    
    void addBack(int num) {
        s.insert(num);
    }
};