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
    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>> res;
        if(root==NULL ) return res; 
        queue<TreeNode*>q;
        q.push(root);
       
        TreeNode *temp;
        int len;
        while(!q.empty()){
            len=q.size();
            vector<int>v;
            for(int i=1;i<=len;i++){
                
                 temp=q.front();
                    q.pop();
                    v.push_back(temp->val);
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
                
         
            
        }
            res.push_back(v);
     
            
        }
        return res;
    }
};