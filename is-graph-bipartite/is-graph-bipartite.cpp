class Solution {
public:
    bool dfs(int start,vector<vector<int>>& graph,vector<int>&color){
        if(color[start]==-1)
            color[start]=1;
        for(auto x: graph[start])
        {
            if(color[x]==-1){
                color[x]=abs(1-color[start]);
                if(!dfs(x,graph,color)) return false;
            }
            else if(color[x]==color[start]) return false;
        }
         return true;
    }  
    
      
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(!dfs(i,graph,color)){
                    return false;
                }
            }
        }
        return true;
    }
};