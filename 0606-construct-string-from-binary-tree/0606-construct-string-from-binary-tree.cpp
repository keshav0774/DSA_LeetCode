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
    string tree2str(TreeNode* root) {
        if (root == NULL)
            return "";

        string ans = to_string(root->val);

        // left child
        if (root->left) {
            ans += "(";
            ans += tree2str(root->left);
            ans += ")";
        }

        // right child
        if (root->right) {
            // left child nahi hai, toh empty () zaroori hai
            if (!root->left) {
                ans += "()";
            }

            ans += "(";
            ans += tree2str(root->right);
            ans += ")";
        }

        return ans;
    }
};