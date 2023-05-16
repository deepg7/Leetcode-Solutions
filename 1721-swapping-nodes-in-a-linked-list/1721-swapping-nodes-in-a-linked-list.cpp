/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* back;
        ListNode* front;
        ListNode* ret;
        int b,count = 0;
        back = head;
        ret = head;
        while(back!=NULL) {
            back=back->next;
            count++;
        }
        back=NULL;
        int curr=0;
        while(head!=NULL){
            curr++;
            if(curr==k) back = head;
            if(curr == count-k+1) front = head;
            head = head->next;
        }
        // cout<<front->val<<back->val;
        b = back->val;
        back->val = front->val;
        front->val = b;
        return ret;
    }
};