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
    bool isSymmetric(TreeNode* root) {
        return solve(root, root); 
    }
    
    bool solve(TreeNode *p, TreeNode* q) {
        if ( p == nullptr && q == nullptr ) 
            return true; 
        
        if ( p && q && p->val == q->val ) 
            return solve (p->left, q->right) && solve(p->right, q->left);
        
        return false;
    }
};
