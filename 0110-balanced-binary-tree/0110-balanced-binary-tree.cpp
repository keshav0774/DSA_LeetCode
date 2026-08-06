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
int calculate(TreeNode* root, vector<int>& left , vector<int>& right){
    if(!root) return 0; 

    if(!root->left && !root->right) return 1; 

    int leftHeight = calculate(root->left , left,right); 
    int rightHeight = calculate(root->right , left , right);

    left.push_back(leftHeight); 
    right.push_back(rightHeight); 

    return 1+max(leftHeight , rightHeight);
}
    bool isBalanced(TreeNode* root) {
      
       if(!root) return true;

       vector<int>left; 
       vector<int>right; 
       calculate(root, left, right);
       for(int i=0; i<left.size(); i++){
        if(abs(left[i] - right[i]) > 1) return false;
       }
       return true;
        
    }
};