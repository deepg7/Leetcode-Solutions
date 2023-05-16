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
    ListNode* swapPairs(ListNode* head) {
        ListNode* node = head;
        ListNode* curr;
        ListNode* nextNode;
        ListNode* prev = NULL;
        if(head!=NULL && head->next!=NULL) head=node->next;
        // bool flag = true;
        while(node && node->next){
            cout<<node->val;
            curr=node;
            // if(flag){
                nextNode = curr->next;
                if(prev!=NULL) prev->next=nextNode;
                curr->next = nextNode->next;
                nextNode->next = curr;    
            // }
            // flag = !flag;
            prev = node;
            node=node->next;
        }
        return head;
    }
};