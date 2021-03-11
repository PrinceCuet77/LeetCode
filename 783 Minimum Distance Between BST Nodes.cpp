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
    int minDiffInBST(TreeNode* root) {
        vector < int > v; 
        inorder(root, v); 
        
        int val = v[0], ans = INT_MAX; 
        for ( int i = 1; i < v.size(); i++ ) {
            ans = min(ans, abs(val - v[i])); 
            val = v[i];
        }
        
        return ans;
    }
    
    void inorder(TreeNode *root, vector < int>& v) {
        if ( root == nullptr ) return; 
        
        inorder(root->left, v); 
        v.push_back(root->val); 
        inorder(root->right, v); 
    }
};
