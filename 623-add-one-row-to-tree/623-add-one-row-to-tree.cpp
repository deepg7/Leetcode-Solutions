class Solution {
public:

    void func(TreeNode* root, int val, int depth){
        if(root == NULL) return;
        if(depth == 2){ // adding the val node to all the level which has the depth equal to the given value
            TreeNode* l = root->left; // first assigned the left and right subtree to the temp variables
            TreeNode* r = root->right;
            root->left = new TreeNode(val);  //then added the new nodes to the correct place;
            root->right = new TreeNode(val);
            root->left->left = l; // then again added the rest of the subtree to the new nodes
            root->right->right = r;
            return;
        }
        func(root->left,val,depth-1);
        func(root->right,val,depth-1);
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(root == NULL) return NULL;
        if(depth == 1){ // handled the base case
            TreeNode* x = new TreeNode(val);
            x->left = root;
            x->right = NULL;
            return x;
        }
        func(root,val,depth);
        return root;
    }
};