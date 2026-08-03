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
void find(TreeNode* root,long long& first,long long& second){
   if(!root) return; 
   if(root->val < first){
     second = first;
     first = root->val;
   } 
   else if (root->val > first && root->val < second){
     second = root->val;
   }
   find(root->left,first,second);
   find(root->right, first, second);
   return;
}
    int findSecondMinimumValue(TreeNode* root) {
        if(!root) return 0;
        long long first = LLONG_MAX;
        long long second = LLONG_MAX;
       find(root,first,second);
       return second ;
    }
};