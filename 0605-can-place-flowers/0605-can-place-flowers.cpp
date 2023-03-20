class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int x = flowerbed.size();
        if(n==0) return true;
        if(x==1) return flowerbed[0]==1?n==0:n==1;
        for(int i=0; i<x;i++){
            if(i==0  && flowerbed[i]==0 && flowerbed[i+1]==0){
                n--;
                flowerbed[i]=1;
            }
            if(n==0) break;
            else if(i==x-1 && flowerbed[x-1]==0 &&flowerbed[i-1]==0){
                n--;
                flowerbed[i]=1;
            }
            if(n==0)break;
            else if(i!=0 && i!=x-1 && !flowerbed[i]&&!flowerbed[i-1]&&!flowerbed[i+1]) {
                n--;
                flowerbed[i]=1;
            }
            if(n==0)break;
        }
        return n==0;
    }
};