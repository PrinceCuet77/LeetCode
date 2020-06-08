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
    int length(ListNode* l) {
        int cnt = 0; 
        while ( l ) {
            cnt++;
            l = l->next;
        }
        
        return cnt;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int l1a = length(l1), l2b = length(l2); 
        
        if ( l1a >= l2b ) {
            ListNode* ans = l1;
            ListNode* prev = nullptr;
            int rem = 0; 
            while ( l1 && l2 ) {
                int value = l1->val + l2->val + rem; 
                if ( value > 9 ) {
                    l1->val = value % 10; 
                    rem = value / 10;
                }
                else {
                    l1->val = value; 
                    rem = 0;
                }
                
                prev = l1;
                l1 = l1->next; 
                l2 = l2->next;
            }
            
            while ( l1 ) {
                int value = l1->val + rem; 
                if ( value > 9 ) {
                    l1->val = value % 10; 
                    rem = value / 10;
                }
                else {
                    l1->val = value; 
                    rem = 0;
                }
                
                prev = l1;
                l1 = l1->next;
            }
            
            if ( rem != 0 ) {
                ListNode* tmp = new ListNode();
                tmp->val = rem; 
                tmp->next = nullptr; 
                
                prev->next = tmp;
            }
            
            return ans;
        }
        else {
            ListNode* ans = l2; 
            ListNode* prev = nullptr;
            int rem = 0; 
            while ( l1 && l2 ) {
                int value = l1->val + l2->val + rem; 
                if ( value > 9 ) {
                    l2->val = value % 10; 
                    rem = value / 10;
                }
                else {
                    l2->val = value; 
                    rem = 0;
                }
                
                prev = l2;
                l1 = l1->next; 
                l2 = l2->next;
            }
            
            while ( l2 ) {
                int value = l2->val + rem; 
                if ( value > 9 ) {
                    l2->val = value % 10; 
                    rem = value / 10;
                }
                else {
                    l2->val = value; 
                    rem = 0;
                }
                
                prev = l2;
                l2 = l2->next;
            }
            
            if ( rem != 0 ) {
                ListNode* tmp = new ListNode();
                tmp->val = rem; 
                tmp->next = nullptr; 
                
                prev->next = tmp;
            }
            
            return ans;
        }
    }
};
