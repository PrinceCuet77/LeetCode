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
    bool hasCycle(ListNode *head) {
        if ( head == NULL ) 
            return false; 
        
        ListNode *p = head, *q = head; 
        do {
            p = p->next; 
            q = q->next; 
            q = q ? q->next : q;
        } while ( p && q && p != q );
        
        if ( p == q && p != NULL && q != NULL ) 
            return true; 
        else 
            return false;
    }
};