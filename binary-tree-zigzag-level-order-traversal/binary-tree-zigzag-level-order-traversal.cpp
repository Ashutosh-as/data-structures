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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> res;
         if(root==NULL ) return res; 
        queue<TreeNode*> q;
        q.push(root);
        bool turn =true;
     
        while(!q.empty()){
            int size=q.size();
            vector<int>v;
            while(size--){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                v.push_back(curr->val);
                
            }
            if(turn) turn =false;
            else
            {
                reverse(v.begin(),v.end());
                turn =true;
            }
            res.push_back(v);
        }
        return res;
        
        
    }
};