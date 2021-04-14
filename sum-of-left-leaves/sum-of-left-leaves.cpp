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
    int sum=0;
    void sumOfLeftLeaves(TreeNode* root,bool isleft){
        if(isleft&& !root->left&& !root->right){
            sum=sum+root->val;
            return;
        }
        if(root->left) sumOfLeftLeaves(root->left,true);
         if(root->right) sumOfLeftLeaves(root->right,false);
        
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;
         sumOfLeftLeaves(root,false);
             return sum;
        
    }
};