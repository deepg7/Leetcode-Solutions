
class Solution {
public:
    ListNode* merge(ListNode* a, ListNode* b){
        ListNode *newHead = new ListNode(0);
        ListNode *cur = newHead;
        cur = a;
        while(cur){
            cur = cur->next;
        }
       
        
        cur = newHead;
        while(a && b){
            if(a->val <= b->val){
                cur->next = a;
                a = a->next;
            }else{
                cur->next = b;
                b = b->next;
            }
            cur = cur->next;
        }

        if(a){
            cur->next = a;
        }else if(b){
            cur->next = b;
        }


        return newHead->next;
    };
    
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* cur = head;
        while(cur){
            cur = cur->next;
        }
        ListNode *slow = head, *fast = head;
        ListNode *slowPrev; 
        while(fast && fast->next){
            slowPrev = slow;
            
            slow = slow->next;
            fast = fast->next->next;
        }
        slowPrev->next = nullptr;
        head = sortList(head);
        slow = sortList(slow);
        
        return merge(head, slow);
    }
};