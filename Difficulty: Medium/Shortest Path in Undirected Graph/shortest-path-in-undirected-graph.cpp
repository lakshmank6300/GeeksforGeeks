class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> BFS(vector<vector<int>>&adj ,int src){
        queue<int>que;
        int n=adj.size();
        vector<int>dist(n,-1);
        dist[src]=0;
        que.push(src);
        while(!que.empty()){
            int node=que.front();
            que.pop();
            for(int i=0;i<adj[node].size();i++){
                if(dist[adj[node][i]]==-1){
                    dist[adj[node][i]]=dist[node]+1;
                    que.push(adj[node][i]);
                }  
            }
        }
        return dist;
    }
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // code here
        return BFS(adj,src);
    }
};