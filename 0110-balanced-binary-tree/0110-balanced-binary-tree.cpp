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
int calculate(TreeNode* root){
    if(!root) return 0; 

    if(!root->left && !root->right) return 1; 

    int leftHeight = calculate(root->left); 
    int rightHeight = calculate(root->right );
     
    if(leftHeight == -1 || rightHeight == -1) return -1; // indicate that tree is unbalanced;

    if(abs(leftHeight - rightHeight)>1) return -1;

    return 1 + max(leftHeight , rightHeight);
     

    return 1+max(leftHeight , rightHeight);
}
    bool isBalanced(TreeNode* root) {
      
       if(!root) return true;

      return (calculate(root) != -1);
        
    }
};