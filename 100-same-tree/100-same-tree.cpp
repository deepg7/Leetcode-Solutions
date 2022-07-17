class Solution {
    bool check(TreeNode* p , TreeNode*q) {
        if(p == NULL && q == NULL) {
            return true;
        }
        
        if(p == NULL || q == NULL) {
            return false;
        }
        
        bool left = check(p->left , q->left);
        bool right = check(p->right , q->right);
        bool valueCheck = p->val == q->val ? true : false;
        
        
        return left && right && valueCheck;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return check(p , q);
    }
};