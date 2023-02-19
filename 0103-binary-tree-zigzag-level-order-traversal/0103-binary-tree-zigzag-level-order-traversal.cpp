class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int c = 1;
        vector<vector<int>> ans;
        if(!root){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
            int n = q.size();
            for(int i=0; i<n; i++){
                TreeNode* curr = q.front();
                temp.push_back(curr->val);
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
                q.pop();
            }
            if(c%2 == 0){
                reverse(temp.begin() , temp.end());
            }
            c++;
            ans.push_back(temp);
        }
        return ans;
    }
};