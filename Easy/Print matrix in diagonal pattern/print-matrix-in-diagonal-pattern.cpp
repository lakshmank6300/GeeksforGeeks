//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        int n=mat.size();
        vector<vector<int>>res((n-1)*2+1);
        vector<int>ans;
         for(int i=0;i<mat.size();i++){
             for(int j=0;j<mat[i].size();j++){
                 res[i+j].push_back(mat[i][j]);
             }
         }
         for(int i=0;i<res.size();i++){
             if(i%2==0)
                reverse(res[i].begin(),res[i].end());
            for(int j=0;j<res[i].size();j++)
                ans.push_back(res[i][j]);
         }
         
         return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends