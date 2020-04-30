/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* p = head, *q = NULL; 
        while ( p != NULL ) {
            if ( p->val == val && p == head ) {
                head = p->next;
                delete(p);
                p = head;
            } else {
                if ( p->val == val ) {
                    q->next = p->next; 
                    delete(p); 
                    p = q; 
                }
                q = p; 
                p = p->next;
            }
        }
        return head;
    }
};