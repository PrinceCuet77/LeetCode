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
    TreeNode* increasingBST(TreeNode* root) {
        if ( root == nullptr ) return root; 
        
        vector < int > v; 
        inorder(root, v); 
        TreeNode *head = new TreeNode(v[0]); 
        TreeNode *current = head;
        for ( int i = 1; i < v.size(); i++ ) {
            TreeNode *temp = new TreeNode(v[i]); 
            current->right = temp; 
            current = temp;
        }
        
        return head;
    }
    
    void inorder(TreeNode *root, vector < int>& v) {
        if ( root == nullptr ) return; 
        
        inorder(root->left, v); 
        v.push_back(root->val); 
        inorder(root->right, v);
    }
};
