/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if ( root == nullptr ) 
            return 0;
        
        queue < TreeNode* > q; 
        q.push(root); 

        int minDepth = 1; 
        bool flag = false;
        while ( !q.empty() ) {
            int sz = q.size(); 
            
            while ( sz-- ) {
                auto u = q.front(); 
                q.pop(); 
                
                if ( u->left == nullptr && u->right == nullptr ) {
                    flag = true; 
                    break;
                }
                
                if ( u->left ) 
                    q.push(u->left); 
                
                if ( u->right ) 
                    q.push(u->right); 
            }
            
            if ( flag ) 
                break;
            
            minDepth++;
        }
        
        return minDepth;
    }
};
