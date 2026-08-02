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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {}; 


        vector<vector<int>>ans; 
        queue<TreeNode*>qu; 
        qu.push(root); 
        while(!qu.empty()){
            int size = qu.size(); 
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode* temp = qu.front(); 
                qu.pop(); 
                level.push_back(temp->val); 
                if(temp->left) qu.push(temp->left); 
                if(temp->right) qu.push(temp->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};