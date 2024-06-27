//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool isToeplitz(vector<vector<int>> &mat);

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        }

        bool b = isToeplitz(a);

        if (b == true)
            cout << "true";
        else
            cout << "false";

        cout << endl;
    }
    return 0;
}
// } Driver Code Ends



bool isToeplitz(vector<vector<int>>& mat) {
    int i=0,j=0,k=0;
    while(k<mat[0].size()){
        i=0;
        j=k;
        while(i<mat.size()-1 && j<mat[0].size()-1){
            if(mat[i][j]^mat[++i][++j])
                return false;
        }
        k++;
    }
    k=1;
    while(k<mat[0].size()){
        i=k;
        j=0;
        while(i<mat.size()-1 && j<mat[0].size()-1){
            if(mat[i][j]^mat[++i][++j])
                return false;
        }
        k++;
    }
    return true;
}