class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n=adj.size();
        queue<int>que;
        vector<int>res;
        que.push(0);
        res.push_back(0);
        vector<int>vis(n+1);
        vis[0]=1;
        while(!que.empty()){
            int node=que.front();
            que.pop();
            for(int i=0;i<adj[node].size();i++){
                if(!vis[adj[node][i]]){
                    res.push_back(adj[node][i]);
                    vis[adj[node][i]]=1;
                    que.push(adj[node][i]);
                }
            }
        }
        return res;
    }
};