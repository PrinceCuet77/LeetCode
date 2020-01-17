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
    ListNode* middleNode(ListNode* head) {
        ListNode *p = head; 
        int cnt = 0, n; 
        while ( p != NULL ) {
            cnt++; 
            p = p->next; 
        } 
        
        n = cnt / 2;
        
        p = head;
        for ( int i = 0; i < n; i++ ) {
            p = p->next;
        }
        
        return p;
    }
};