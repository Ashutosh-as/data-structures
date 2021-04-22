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
    int deepestLeavesSum(TreeNode* root) {
        if(!root)return 0;
        queue<TreeNode*>q;
        int sum=0;
        q.push(root);
        while(!q.empty()){
            sum=0;
            int n=q.size();
            
            for(int i=0;i<n;i++){
                TreeNode* curr=q.front();
                q.pop();
                 sum=sum+curr->val;
                if(curr->left!=NULL) 
                    q.push(curr->left);
                if(curr->right!=NULL)
                    q.push(curr->right);
              
                   
            }
        }
       return sum;
        
    }
};