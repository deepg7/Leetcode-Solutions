class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                while(slow != head){
                    slow = slow->next;
                    head = head->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};