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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* root = head;
        if(root==NULL || root->next == NULL) return root;
        ListNode* nRoot = head;
        ListNode* prev;
        int n=0;
        while(nRoot){
            nRoot = nRoot->next;
            n++;
        }
        k = k%n;
        
        
        while(k!=0){
            while(root->next && root->next->next){
                root=root->next;
            }
            prev = root;
            root = root->next;
            root->next = head;
            head = root;
            prev->next =NULL;
                
            k--;
        }
        return head;
    }
};