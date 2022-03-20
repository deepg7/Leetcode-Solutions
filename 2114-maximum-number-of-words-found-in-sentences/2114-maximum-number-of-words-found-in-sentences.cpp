class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int temp=0,mac=0;
        for(auto it:sentences){
            for(auto it1:it){
                if(it1==' '){
                    temp++;
                }
            }
            mac=max(temp,mac);
            temp =0;
        }
        return ++mac;
    }
};