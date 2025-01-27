//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void solve(vector<vector<int>>&mat,vector<vector<int>>&vis,int i,int j,int n,string str,vector<string>&res){
        if(i>=n-1 && j>=n-1){
            res.push_back(str);
            return;
        }
        // cout<<str<<" "<<i<<" "<<j<<endl;
        if(i>=n || j>=n || i<0 || j<0 || vis[i][j]==1 || mat[i][j]==0)
            return;
        vis[i][j]=1;
        solve(mat,vis,i+1,j,n,str+"D",res);
        solve(mat,vis,i,j+1,n,str+"R",res);
        solve(mat,vis,i-1,j,n,str+"U",res);
        solve(mat,vis,i,j-1,n,str+"L",res);
            
        // if(i+1<n && mat[i+1][j]==1){
        //     str+="D";
            
        // }
        // else if(j+1<n && mat[i][j+1]==1){
        //     str+="R";
        // }
        // else if(i-1>0 && mat[i-1][j]==1){
        //     str+="U";
        // }
        // else if(j-1>0 &&  mat[i][j-1]==1){
        //     str+="L";
        //     solve(mat,vis,i,j-1,n,str,res);
            
        // }
        vis[i][j]=0;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        int n=mat.size();
        vector<string>res={};
        string s="";
        vector<vector<int>>vis(n,vector<int>(n,0));
        if(mat[0][0]==0)
            return res;
        solve(mat,vis,0,0,n,s,res);
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        vector<vector<int>> mat;
        string innerArray;
        bool isInsideArray = false;

        for (char c : input) {
            if (c == '[') {
                if (isInsideArray) {
                    innerArray.clear();
                }
                isInsideArray = true;
            } else if (c == ']') {
                if (isInsideArray && !innerArray.empty()) {
                    vector<int> row;
                    stringstream ss(innerArray);
                    int num;

                    while (ss >> num) {
                        row.push_back(num);
                        if (ss.peek() == ',')
                            ss.ignore();
                        while (isspace(ss.peek()))
                            ss.ignore();
                    }

                    mat.push_back(row);
                    innerArray.clear();
                }
                isInsideArray = false;
            } else if (isInsideArray) {
                if (!isspace(c)) {
                    innerArray += c;
                }
            }
        }

        Solution obj;
        vector<string> result = obj.findPath(mat);
        sort(result.begin(), result.end());

        if (result.empty())
            cout << "[]";
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends