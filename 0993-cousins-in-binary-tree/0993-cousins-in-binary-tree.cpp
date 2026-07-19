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
    bool isCousins(TreeNode* root, int x, int y) {
        

        queue<pair<TreeNode*, TreeNode*>>qu;
        qu.push({root, nullptr});
        
        while(!qu.empty()){
            int size = qu.size(); 
           TreeNode *parentX = nullptr, *parentY = nullptr;
        bool xFount = false , yFount = false;
            while(size--){
                TreeNode* temp = qu.front().first; 
                 TreeNode* parent = qu.front().second;
                 qu.pop();
                if(temp->val == x){
                    xFount = true;
                    parentX = parent;
                }
                if(temp->val == y ) {
                    yFount = true;
                    parentY = parent;
                }
                if(temp->left) qu.push({temp->left, temp});
                if(temp->right) qu.push({temp->right, temp});
            }
            if(xFount && yFount) return parentX != parentY;
            if (xFount || yFount)return false;
        }
        return false;
    }
};