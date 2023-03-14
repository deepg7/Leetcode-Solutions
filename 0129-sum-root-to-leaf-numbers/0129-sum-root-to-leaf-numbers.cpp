class Solution {
public:
int solve(TreeNode* root, int curr)
{
    if(root==NULL) //!root
    {
        return NULL;
    }

   curr= curr*10 + root->val;
   // leaf node whrn we reach to end of a perticular tree branch
    if(root->left==NULL && root->right==NULL)
       return curr;

  int l=solve(root->left, curr);
  int r= solve(root->right, curr);


  return l+r;      
}
    int sumNumbers(TreeNode* root) 
    {
      return solve(root,0);  
    }
};