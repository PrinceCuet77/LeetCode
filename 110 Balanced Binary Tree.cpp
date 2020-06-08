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
    bool flag = true; 
    int height(TreeNode* root) {
        if ( root == nullptr ) return 0; 
        
        int x = height(root->left);
        int y = height(root->right);
        
        if ( x > y ) {
            if ( abs(x-y) > 1 ) flag = false;
            return x+1;
        }
        else {
            if ( abs(x-y) > 1 ) flag = false;
            return y+1;
        }
    }
    
    bool isBalanced(TreeNode* root) {
        int h = height(root);
        return flag;
    }
};
