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
    bool areidentical(TreeNode* root1,TreeNode* root2){
        if(!root1&&!root2) return true;
        if(!root1||!root2) return false;
          return (root1->val == root2->val && 
            areidentical(root1->left, root2->left) && 
            areidentical(root1->right, root2->right));
        
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(t==NULL) return true;
        if(s==NULL) return false;
        if (areidentical(s,t)) 
            return true;
          return isSubtree(s->left, t) || 
        isSubtree(s->right, t); 

        
    }
};