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
    int height(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        
        int left=height(root->left);
        int right=height(root->right);
        int ans=max(left,right)+1;
        return ans;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        
        int option1=diameterOfBinaryTree(root->left);
        int option2=diameterOfBinaryTree(root->right);
        
        int option3=height(root->left)+height(root->right);
        
        int ans=max({option1,option2,option3});
        return ans;
    }
};