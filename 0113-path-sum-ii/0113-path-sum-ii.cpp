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
void find(vector<int>& currentPath, TreeNode* root, int sum, vector<vector<int>>& ans){
    if(!root) return;

    currentPath.push_back(root->val);

    if(!root->left && !root->right && root->val == sum){
          ans.push_back(currentPath);
    }
    else{
        //left call 
        find(currentPath, root->left, sum - root->val , ans);

        //right call
        find(currentPath, root->right, sum  - root->val, ans);
    }
    currentPath.pop_back();
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        if(!root) return {};

        vector<vector<int>>ans;
        vector<int>currentPath;

        find(currentPath, root, targetSum , ans);
        return ans;
    }
};