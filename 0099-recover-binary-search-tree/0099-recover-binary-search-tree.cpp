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
void findInorder(TreeNode*root, vector<int>& inOrder){
    if(!root) return;

    findInorder(root->left, inOrder);
    inOrder.push_back(root->val);
    findInorder(root->right, inOrder);
    return;
}
void recoverBST(TreeNode* root, vector<int>& inOrder, int& index){
    if(!root) return;
    recoverBST(root->left, inOrder, index);
    root->val = inOrder[index++];
    recoverBST(root->right, inOrder, index);
    return ;
}
void recoverTree(TreeNode* root) {
       if(!root)return ; 
       vector<int>inOrder;
       findInorder(root, inOrder);
       sort(inOrder.begin(), inOrder.end());
       int index = 0;
       recoverBST(root, inOrder, index);
     
       return ;
    }
};