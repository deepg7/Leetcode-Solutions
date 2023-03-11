class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> arr;
        while(head){
            arr.push_back(head->val);
            head=head->next;
        }
        return solve(arr,0,arr.size()-1);
    }
    TreeNode* solve(vector<int> arr,int l,int r){
        if(l>r)return NULL;
        int mid=l+(r-l)/2;
        TreeNode* node=new TreeNode(arr[mid]);
        node->left=solve(arr,l,mid-1);
        node->right=solve(arr,mid+1,r);
        return node;
    }
};