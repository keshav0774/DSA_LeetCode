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
class Solve{
    public: 
    int totalSum;
    int maxValue;
    int minValue;
    bool isBST;
    
    Solve(int value){
        isBST = 1;
        totalSum = value;
        maxValue = minValue = value;
    }
};
class Solution {
public:
Solve* find(TreeNode* root , int & totalSum){
    if(!root->left && !root->right){
         totalSum = max(totalSum , root->val);
        return new Solve(root->val);
    }
    else if(!root->left && root->right){
        Solve* head = find(root->right, totalSum);
        if(head->isBST && head->minValue > root->val){
            head->totalSum += root->val;
            head->minValue = root->val;
            totalSum = max(totalSum , head->totalSum);
            return head;
        }
        else{
            head->isBST = 0;
            return head;
        }
    }
    else if(!root->right && root->left){
        Solve* head = find(root->left, totalSum);
        if(head->isBST && head->maxValue < root->val){
            head->totalSum += root->val;
            head->maxValue = root->val;
            totalSum = max(totalSum , head->totalSum);
            return head;
        }
        else{
            head->isBST = 0;
            return head;
        }
    }
    else{
        Solve* left = find(root->left, totalSum);
        Solve* right  = find(root->right, totalSum);

        if(left->isBST && left->maxValue < root->val && right->isBST && right->minValue > root->val ){
            Solve* head = new Solve(root->val);
            head->totalSum = root->val + right->totalSum + left->totalSum;
            head->isBST = 1;
            head->minValue = left->minValue;
            head->maxValue = right->maxValue;
            totalSum = max(totalSum, head->totalSum);
            return head;
        }
        else {
            left->isBST = 0;
            return left;
        }
    }
}
    int maxSumBST(TreeNode* root) {
        int totalSum = 0;
        find(root,totalSum);
        return totalSum;
    }
};