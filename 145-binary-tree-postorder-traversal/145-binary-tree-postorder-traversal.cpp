
class Solution {
public:
    vector<int> ans;
    void postOrder(TreeNode* root){
        if(root==NULL) return;
        postOrder(root->left);
        postOrder(root->right);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postOrder(root);
        return ans;
    }
};