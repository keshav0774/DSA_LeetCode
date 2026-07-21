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
void inorder(TreeNode* root,vector<int>& ans)
    {
        if(!root) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        vector<int>result(0);
   
        inorder(root,ans);
        unordered_map<int,int>ma;
        for(int i=0;i<ans.size();i++)ma[ans[i]]++;
        int maxFreq = INT_MIN;
        for(auto &it : ma) maxFreq = max(maxFreq, it.second);
        for(auto &it :ma) if(it.second == maxFreq) result.push_back(it.first);

        return result;
    }
};