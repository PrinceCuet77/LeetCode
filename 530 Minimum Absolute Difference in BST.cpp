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
    int getMinimumDifference(TreeNode* root) {
        vector < int > ans; 
        store(root, ans); 
        
        int diff = 1000000, val = ans[0];
        for ( int i = 1; i < ans.size(); i++ ) {
            diff = min(diff, abs(val - ans[i])); 
            val = ans[i];
        }
        
        return diff; 
    }
    
    void store(TreeNode *root, vector < int>& ans) {
        if ( root == nullptr ) return; 
        
        store(root->left, ans); 
        ans.push_back(root->val); 
        store(root->right, ans); 
    }
};
