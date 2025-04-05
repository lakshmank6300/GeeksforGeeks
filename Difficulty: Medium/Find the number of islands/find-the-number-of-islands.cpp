//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // bool check_condition(int i,int j){
    //     if(i>0){
    //         if(dp[i-1]==1) return false;
    //     }
    // }
    void solve(vector<vector<char>>&grid,vector<vector<int>>&dp,int i,int j,int n,int m){
        if(i<0 || j<0 || i==n || j==m || grid[i][j]=='W' || dp[i][j]==1 ) return;
        dp[i][j]=1;
        // cout<<i<<" "<<j<<endl;
        // solve(grid,dp,i)
        solve(grid,dp,i-1,j,n,m);
        solve(grid,dp,i-1,j+1,n,m);
        solve(grid,dp,i,j+1,n,m);
        solve(grid,dp,i+1,j+1,n,m);
        solve(grid,dp,i+1,j,n,m);
        solve(grid,dp,i+1,j-1,n,m);
        solve(grid,dp,i,j-1,n,m);
        solve(grid,dp,i-1,j-1,n,m);
        
    }
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='L' && dp[i][j]==0){
                    // cout<<"hello";
                    cnt++;
                    solve(grid,dp,i,j,n,m);
                }
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.countIslands(grid);
        cout << ans << '\n';

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends