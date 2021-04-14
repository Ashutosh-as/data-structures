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
      int diameter(TreeNode* root,int &ma){
        if(root==NULL) return 0;
        int x=diameter(root->left,ma);
        int y=diameter(root->right,ma);
        ma=max(ma,x+y+1);
        return (max(x,y)+1);
        
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int ma=0;
       int x= diameter(root,ma);
        return ma-1;
        
    }
       
};