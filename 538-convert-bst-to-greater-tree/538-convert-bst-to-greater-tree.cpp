
class Solution {
public:
    
    vector<int> nums;
    void printInorder(TreeNode* node){
        if (node == NULL)
            return;

        printInorder(node->left);

        cout << node->val << " ";
        nums.push_back(node->val);

        printInorder(node->right);
    }
    
    void addInorder(TreeNode* node){
        if (node == NULL)
            return;

        addInorder(node->left);
        int sum=0;
        int val = node->val;
        cout << node->val << " ";
        for(auto it:nums){
            if(it>val)sum+=it;
        }
        cout<<val+sum;
        node->val = val + sum;

        addInorder(node->right);
    }
    TreeNode* convertBST(TreeNode* root) {
        TreeNode* node = root;
        printInorder(node);
        std::reverse(nums.begin(),nums.end());
        addInorder(node);
        return root;
    }
};