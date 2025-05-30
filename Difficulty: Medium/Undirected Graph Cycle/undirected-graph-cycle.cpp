class Solution {
  public:
    bool dfs(vector<vector<int>>&adj,vector<bool>&vis,int src,int parent){
        vis[src]=true;
        for(auto i : adj[src]){
            if(!vis[i]){
                if(dfs(adj,vis,i,src)) return true;
            }
            else{
                if(parent!=i) return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>>adj(V);
        int n=edges.size();
        for(int i=0;i<n;i++){
            int u=edges[i][0],v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // return false;
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i])
                if(dfs(adj,vis,i,-1)) return true;
        }   
        return false;
    }
};
// for(auto i : adj[src]){
//             if(vis[i] && parent!=i){
//                 return true;
//             }
//             else{
//                 if(dfs(adj,vis,i,src)) return true;
//             }
//         }