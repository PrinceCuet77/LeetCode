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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p = headA; 
        stack < ListNode* > stA;
        while ( p != NULL ) {
            stA.push(p);
            p = p->next;
        }
        
        p = headB; 
        stack < ListNode* > stB; 
        while ( p != NULL ) {
            stB.push(p); 
            p = p->next; 
        }
        
        p = NULL;
        while ( stA.size() && stB.size() ) {
            if ( stA.top() == stB.top() ) {
                p = stA.top();
                stA.pop(); 
                stB.pop(); 
            } else 
                return p;
        }
        return p;
    }
};