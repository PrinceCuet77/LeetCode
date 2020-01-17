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
    bool isPalindrome(ListNode* head) {
        ListNode *p = head; 
        int cnt = 0, n; 
        while ( p != NULL ) {
            cnt++; 
            p = p->next; 
        }
        
        if ( cnt % 2 == 0 ) 
            n = cnt / 2; 
        else 
            n = (cnt / 2) + 1; 
        
        stack < int > st; 
        p = head;
        for ( int i = 0; i < n; i++ ) {
            st.push(p->val); 
            p = p->next;
        }
        
        if ( cnt % 2 == 1 ) 
            st.pop(); 
        
        while ( !st.empty() ) {
            if ( p->val != st.top() ) 
                return false; 
            st.pop(); 
            p = p->next; 
        }
        return true;
    }
};