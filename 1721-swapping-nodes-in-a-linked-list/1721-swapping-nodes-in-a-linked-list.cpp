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
        int first=101,second=101;
        int fC=1; int count = 0; int bC=1;
        ListNode* node = head;
        while(node!=NULL){
            count++;
            node=node->next;
        }
        if(count == 1) return head;
        node = head;
        while(node!=NULL){
            if(fC == k || fC == count+1-k){
                if(first ==101){
                    first = node->val;
                }else{
                    second = node -> val;
                    node->val = first;
                }
            } 
            node=node->next;
            fC++;
        }
        node = head;
        while(node!=NULL){
            int x =min(k,count+1-k);
            if(bC==x ){
                if(second !=101){
                    node->val=second;
                }else{
                    node->val=first;
                }
            }
            bC++;
            node=node->next;
        }
        
        cout<<count;
        return head;
    }
};