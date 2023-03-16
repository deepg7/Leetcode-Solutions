
class Solution {
public:
    TreeNode* solve(int in_start, int in_end, int post_start,int post_end,vector<int>& inorder, vector<int>& postorder)
    {
        //base case
        if(in_start>in_end) return NULL;
        
        int idx=-1;
        for(int k=in_start;k<=in_end;k++){
            if(inorder[k]==postorder[post_end]){
                idx=k;
                break;
            }
        }
        
        int left_num = idx-in_start;
        
        return new 
        TreeNode(
            postorder[post_end],
            
            solve(in_start,idx-1,post_start,post_start+left_num-1,inorder,postorder),
            
            solve(idx+1,in_end,post_start+left_num,post_end-1,inorder,postorder)
        );
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        int n=inorder.size();
        
        return solve(0,n-1,0,n-1,inorder,postorder);
    }
};