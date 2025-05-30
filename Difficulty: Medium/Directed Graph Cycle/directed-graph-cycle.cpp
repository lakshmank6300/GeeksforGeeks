class Solution {
  public:
    // bool dfs(vector<int>adj[],vector<int>&vis1,vector<int>&vis2,int node){
    //     vis1[node]=true;
    //     vis2[node]=true;
    //     for(auto i : adj[node]){
    //         if(!vis1[i]){
    //             if(dfs(adj,vis1,vis2,i)){
    //                 return true;
    //             }
    //         }
    //         else{
    //             if(vis2[i]){ return true;}
    //         }
    //     }
    //     vis2[node]=false;
    //     return false;
    // }
    
    bool isCyclic(int n, vector<vector<int>> &edges) {
        // code here
        vector<int>adj[n];
        vector<int>indeg(n,0);
        int u,v;
        for(int i=0;i<edges.size();i++){
            u=edges[i][0];
            v=edges[i][1];
            adj[u].push_back(v);
            indeg[v]++;
        }
        
        queue<int>que;
        for(int i=0;i<n;i++) if(indeg[i]==0) que.push(i);
        vector<int>topo;
        while(!que.empty()){
            int curr = que.front();
            topo.push_back(curr);
            que.pop();
            for(auto i:adj[curr]){
                if(indeg[i]>=1){
                    indeg[i]--;
                    if(indeg[i]==0) que.push(i);
                }
            }
        }
        if(topo.size()<n) return true;
        else return false;
        
    }
        // vector<int>vis1(V,false),vis2(V,false);
        // for(int i=0;i<V;i++){
        //     if(!vis1[i]) 
        //         if(dfs(adj,vis1,vis2,i)) return true;
        // }
        // return false;
};