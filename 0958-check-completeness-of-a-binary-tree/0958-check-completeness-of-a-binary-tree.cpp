class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        //if root is null the tree is complete
        if(!root) return true;

        //initialize a queue and push root node
        queue<TreeNode*> q;
        q.push(root);
        //declare a flag variable to keep account of the above mentioned conditions
        bool flag = 0;

        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();

            //if left is not null, check if flag is true or not
            //if it is true return flase else push the node in queue
            if(front->left){
                if(flag) return false;
                q.push(front->left);
            }
            //if left is null change flag to true
            else flag = 1;
        
            if(front->right){
                if(flag) return false;
                q.push(front->right);
            }
            else flag = 1;
        }

        return true;
    }
};