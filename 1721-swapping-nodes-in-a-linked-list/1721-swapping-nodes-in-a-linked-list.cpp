class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* firstnode = head;
        ListNode* secondnode = head;
        ListNode* current = head;
        int count = 0;
        
        if(head == nullptr || head->next == nullptr) return head;
        
        while(current){
            current = current->next;
            count++;
        }
        int num;
        num = count-k+1;
        
        while(k>1){
            firstnode = firstnode->next;
            k--;
        }
        
        while(num>1){
            secondnode = secondnode->next;
            num--;
        }
        
        int temp ;
        temp = firstnode->val;
        firstnode->val = secondnode->val;
        secondnode->val = temp;
        
        return head;
        
        
    }
};