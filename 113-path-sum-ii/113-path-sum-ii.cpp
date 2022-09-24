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
    vector<vector<int>> ans;
    void helper(TreeNode* root, int targetSum, vector<int>& curr){
        
        if(!root ) return;
        else if(root->val == targetSum && !(root->left || root->right)){
            curr.push_back(root->val);
            // fn.push_back(root->val)
            ans.push_back(curr);
            return;    
        }
        else{
            vector<int> fn1;
            vector<int> fn2;
            curr.push_back(root->val);
            fn1=curr;
            fn2=curr;
            helper(root->left,targetSum-root->val,fn1);
            helper(root->right,targetSum-root->val,fn2);
        } 
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> curr;
        helper(root,targetSum,curr);
        return ans;
    }
};