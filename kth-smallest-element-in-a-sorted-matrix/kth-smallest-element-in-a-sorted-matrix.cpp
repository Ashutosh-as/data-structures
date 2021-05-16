class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>>maxh;
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[i].size();j++)
                maxh.push(matrix[i][j]);
              while(maxh.size()>k){
                  maxh.pop();
              }
        return maxh.top();
            
        
    }
};