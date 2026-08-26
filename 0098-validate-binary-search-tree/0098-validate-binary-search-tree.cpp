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
 bool check(TreeNode* root, long left_child, long right_child)
 {
    if(!root) return true; 

     if(root->val <= left_child || root->val >= right_child) return false;

     return (check(root->left, left_child, root->val) && check(root->right, root->val , right_child));
 }
     bool isValidBST(TreeNode* root) {
       long left_child = LONG_MIN;
       long right_child = LONG_MAX;
       return check(root, left_child, right_child);
    }
};