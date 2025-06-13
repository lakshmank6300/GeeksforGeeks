class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    void BFS(vector<vector<int>>&adj,vector<int>&res,vector<bool>&vis,int src){
        vis[src]=true;
        queue<int>que;
        que.push(src);
        res[src]=0;
        while(!que.empty()){
            int top=que.front();
            que.pop();
            for(auto child: adj[top]){
                if(!vis[child]){
                    res[child]=res[top]+1;
                    vis[child]=true;
                    que.push(child);
                }
            }
        }
    }
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // code here
        int n=adj.size();
        vector<bool>vis(n,false);
        vector<int>res(n,-1);
        BFS(adj,res,vis,src);
        
        return res;
        
        
    }
};