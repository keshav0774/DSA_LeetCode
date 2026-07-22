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
    TreeNode* invertTree(TreeNode* root) {
        
        if(!root) return nullptr;

        queue<TreeNode*>qu;
        qu.push(root);
        while(!qu.empty()){
             TreeNode* node = qu.front();
             qu.pop();
               TreeNode* temp = node->left;
               node->left = node->right;
               node->right = temp;
               if(node->left) qu.push(node->left);
               if(node->right) qu.push(node->right);
        }
        return root;
    }
};