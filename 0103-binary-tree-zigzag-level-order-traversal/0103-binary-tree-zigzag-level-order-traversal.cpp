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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       if(!root) return {};

       vector<vector<int>>ans; 
       queue<TreeNode*>qu; 
       qu.push(root); 
       bool check = true;
       while(!qu.empty()){
        int size = qu.size(); 
        vector<int>level;
        while(size--){
            TreeNode* temp = qu.front(); 
            qu.pop();
            level.push_back(temp->val); 
            if(temp->left) qu.push(temp->left); 
            if(temp->right) qu.push(temp->right); 
        }
        if(!check) reverse(level.begin(),level.end());
        ans.push_back(level);
        check =! check;
    }
       return ans;
    }
};