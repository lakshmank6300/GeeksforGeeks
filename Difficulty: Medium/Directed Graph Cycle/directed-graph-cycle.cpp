class Solution {
  public:
    bool dfs(vector<int>adj[],vector<int>&vis1,vector<int>&vis2,int node){
        vis1[node]=true;
        vis2[node]=true;
        for(auto i : adj[node]){
            if(!vis1[i]){
                if(dfs(adj,vis1,vis2,i)){
                    return true;
                }
            }
            else{
                if(vis2[i]){ return true;}
            }
        }
        vis2[node]=false;
        return false;
    }
    
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<int>adj[V];
        int u,v;
        for(int i=0;i<edges.size();i++){
            u=edges[i][0];
            v=edges[i][1];
            adj[u].push_back(v);
        }
        vector<int>vis1(V,false),vis2(V,false);
        for(int i=0;i<V;i++){
            if(!vis1[i]) 
                if(dfs(adj,vis1,vis2,i)) return true;
        }
        return false;
    }
};