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
    int getDecimalValue(ListNode* head) {
        ListNode *p = head; 
        int cnt = 0;
        while ( p != NULL ) {
            cnt++; 
            p = p->next;
        }
        
        p = head;
        int store = 0;
        while ( p != NULL ) {
            cnt--;
            store += p->val * pow(2, cnt); 
            p = p->next; 
        }
        return store;
    }
};