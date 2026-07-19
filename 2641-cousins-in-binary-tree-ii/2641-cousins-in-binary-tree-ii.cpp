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
void solve(vector<int>& nums, TreeNode* root){
    if(!root) return ; 

    queue<TreeNode*>qu;
    qu.push(root);
    while(!qu.empty()){
        int size = qu.size(); 
        int  levelSum=0;
        while(size--){
            TreeNode*temp = qu.front(); 
            qu.pop(); 
            levelSum += temp->val;
            if(temp->left) qu.push(temp->left);
            if(temp->right) qu.push(temp->right);
        }
        nums.push_back(levelSum);
    }
    return;
}
    TreeNode* replaceValueInTree(TreeNode* root) {
        
        vector<int>levelSum; 
        solve(levelSum , root);

        int count = 0;
        queue<TreeNode*>qu;
        qu.push(root);
        root->val = 0;
        int level = 0;
        while(!qu.empty()){
            int size = qu.size(); 
            while(size--){
                TreeNode* parent = qu.front();
                qu.pop();
                int childSum = 0;
                if(parent->left) childSum += parent->left->val;
                if(parent->right) childSum += parent->right->val;
                if(parent->left){
                    parent->left->val = levelSum[level+1] - childSum;
                    qu.push(parent->left);
                }
                if(parent->right){
                    parent->right->val =  levelSum[level+1] - childSum;
                    qu.push(parent->right);
                }
            }
            level++;
        }
        return root;
    }
};