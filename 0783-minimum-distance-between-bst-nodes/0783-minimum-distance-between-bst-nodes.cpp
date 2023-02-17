class Solution {
public:
int ans = INT_MAX;
int data=-1;
int inorder(TreeNode* root){
if(root==NULL)return 0;

     if(root->left!=NULL)inorder(root->left);
     
     if(data>=0)ans=min(ans,root->val-data);
     data=root->val;
     if(root->right!=NULL)inorder(root->right);
     return ans;
 }
int minDiffInBST(TreeNode* root) {
    return inorder(root);  
}
};