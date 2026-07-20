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
    TreeNode* deleteNode(TreeNode* root, int key) {
       if(!root) return nullptr;

       if(root->val > key){
         root->left = deleteNode(root->left,key);
         return root;
       }
       
       if(root->val < key){
         root->right = deleteNode(root->right,key);
         return root;
       } 
       else{
           // root-> data == key
        // 1) root is a leaf node 
        if(!root->left && !root->right){
             delete root;
             return nullptr;
        }
        // 2) root has only one child either left or either right
        //2(a) may be root right exist
        if(!root->left){
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }
        //2(b) may be root left exist
        if(!root->right){
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        //3) root is parent node and has both child
        // find the biggest node in the left part 
        else{
            TreeNode* child = root->left;
            TreeNode* parent = root;
            //right mode node is the biggest node in left part;
            while(child->right){
                parent = child;
                child = child->right;
            }
            if(root != parent){
                parent->right = child->left;
                child->left = root->left;
                child->right = root->right;
                delete root;
                return child;
            }
            else{
                 child->right = root->right;
                 delete root;
                 return child;
            }
        }
       }
       return root;
    }
};