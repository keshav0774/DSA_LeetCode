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
void find(TreeNode* root, int& sum, int& nodes){
    if(!root) return; 

    nodes++; 
    sum += root->val;
    find(root->left, sum , nodes);
    find(root->right, sum ,  nodes);

    return;
}
int ans = 0;

void solve(TreeNode* root) {
    if (!root) return;

    int sum = 0;
    int nodes = 0;

    find(root, sum, nodes);

    int average = sum / nodes;

    if (average == root->val)
        ans++;

    solve(root->left);
    solve(root->right);
}
    int averageOfSubtree(TreeNode* root) {
        ans = 0;
        solve(root);

        return ans;
    }
};