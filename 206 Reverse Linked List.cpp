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
    ListNode* reverseList(ListNode* head) {
        ListNode *p, *q, *r; 
        q = r = NULL; 
        p = head; 
        while ( p != NULL ) {
            r = q; 
            q = p;
            p = p->next; 
            q->next = r;
        }
        head = q;
        return head;
    }
};