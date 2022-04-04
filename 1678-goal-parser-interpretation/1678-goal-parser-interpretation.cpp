class Solution {
public:
    string interpret(string command) {
        map<string,string> temp;
        temp["G"]="G";
        temp["()"]="o";
        temp["(al)"]="al";
        string ans ="";
        string check="";
        for (auto it:command){
            check+=it;
            if(temp[check]!=""){
                cout<<temp[check];
                ans+=temp[check];
                check="";
            }
        }
        return ans;
    }
};