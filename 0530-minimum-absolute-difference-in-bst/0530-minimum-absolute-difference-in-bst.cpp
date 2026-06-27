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
   void get(TreeNode* root, int & minDifference, TreeNode* & preNode){
    if(!root) return;

    get(root->left, minDifference, preNode);

    if(preNode){
        minDifference = min(minDifference, root->val - preNode->val);
    }
    preNode = root;
    get(root->right, minDifference , preNode);
   }
   int getMinimumDifference(TreeNode* root) {
      
      int minDifference = INT_MAX;
      TreeNode * preNode = nullptr;
      
      get(root,minDifference,preNode);
      return minDifference;
   }
};