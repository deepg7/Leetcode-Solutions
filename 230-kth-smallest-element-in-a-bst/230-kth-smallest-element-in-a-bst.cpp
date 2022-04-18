/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int x = 0;
    int ans = 0;
    void inOrder(TreeNode* root,int k){
        if(root==NULL)return;
        inOrder(root->left,k);
        x++;
        if(x==k)ans=root->val;
        inOrder(root->right,k);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        inOrder(root,k);
        return ans;
            
    }
};