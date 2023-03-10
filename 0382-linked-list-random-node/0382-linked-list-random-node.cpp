class Solution {
public:
    ListNode * head;
    int num;
    Solution(ListNode* head) {
        this->head = head;
        this->num = 0;
        while(head != NULL)
        {
            this->num++;
            head = head->next;
        }
    }
    
    int getRandom() {
        int rnd = rand() % this->num;
        ListNode * ptr = this->head;
        while(rnd--)
        {
            ptr = ptr->next;
        }
        return ptr->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */