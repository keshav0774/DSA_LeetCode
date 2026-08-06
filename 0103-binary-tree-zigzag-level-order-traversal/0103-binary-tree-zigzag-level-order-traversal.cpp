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
       
       stack<TreeNode*>leftToright; 
       stack<TreeNode*>rightToleft;

       leftToright.push(root); 
       while(!leftToright.empty() || !rightToleft.empty()){

           vector<int>level; 
           if(!leftToright.empty()){
             int size = leftToright.size(); 
             while(size--){
                TreeNode* temp = leftToright.top(); 
                leftToright.pop(); 
                level.push_back(temp->val);
                if(temp->left) rightToleft.push(temp->left); 
                if(temp->right) rightToleft.push(temp->right);
            }
        }
        else {
            int size = rightToleft.size(); 
            while(size--){
                TreeNode* temp = rightToleft.top(); 
                rightToleft.pop(); 
                level.push_back(temp->val);

                if(temp->right) leftToright.push(temp->right);
                if(temp->left) leftToright.push(temp->left);
            }
        }
        ans.push_back(level);
       }
       return ans;
    }
};