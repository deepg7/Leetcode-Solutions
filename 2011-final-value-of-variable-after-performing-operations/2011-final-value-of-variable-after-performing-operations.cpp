class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        int n = operations.size();
        map<string,int> check;
        check["++X"]=1;
        check["X++"]=2;
        check["--X"]=3;
        check["X--"]=4;
        
        for( auto it: operations){
            int z=check[it];
            switch(z){
                case 1:{
                    ++x;
                    break;
                }
                case 2:{
                    x++;
                    break;
                }
                case 4:{
                    x--;
                    break;
                }
                case 3:{
                    --x;
                    break;
                }
            }
        }
        return x;
    }
};