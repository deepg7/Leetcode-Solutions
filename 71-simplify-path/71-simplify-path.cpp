class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stck;
        string res;
        string p = path;
        string p1;
        int pos = 0;
        
        while(!p.empty())
        {
            //Parse the string
            if (p.substr(0,1)=="/")         //handle first "/"
            {
                pos = 0;
                p1="/";
                p = p.substr(pos+1);
            }
            else
            {
                pos = p.find("/");
                if (pos!=string::npos)
                {
                    p1 = p.substr(0, pos);  //string upto "/"
                    p = p.substr(pos);      //remaining string
                }
                else
                {
                    p1 = p;
                    p="";
                }
                
            }
             
            //Add blocks to stack
            if(p1=="/")
            {
                if(stck.empty() || stck.back()!="/")
                    stck.push_back(p1);
            }
            else if (p1==".")
            {
                //do nothing
            }
            else if (p1=="..")
            {
                if(!stck.empty() && stck.back()=="/")
                    stck.pop_back();
                
                if (stck.empty())
                    stck.push_back("/");
                else
                    stck.pop_back();             //pop the top directory
            }
            else
            {
                stck.push_back(p1);              //p1 is name of directory
            }
            
        }
        
        if (stck.size()>1)
            if (stck.back()=="/")
                stck.pop_back();
        
        //Push contents of stack into result
        for (int i=0; i<stck.size(); i++)
        {
            res += stck[i];
        }
        
        return res;
    }
};