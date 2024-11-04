//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        map<int,vector<int>>mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]].push_back(i);
        }
        set<vector<int>>res;
        vector<vector<int>>ans;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                int rem=-(arr[i]+arr[j]);
                for(int k=0;k<mpp[rem].size();k++){
                    if(mpp[rem][k]!=j && mpp[rem][k]!=i){
                        if(i<j && i<mpp[rem][k]){
                            if(j<mpp[rem][k])
                                res.insert({i,j,mpp[rem][k]});
                            else
                                res.insert({i,mpp[rem][k],j});
                        }
                        else if(j<mpp[rem][k] && j<i){
                            if(i<mpp[rem][k]){
                                res.insert({j,i,mpp[rem][k]});
                            }
                            else
                                res.insert({j,mpp[rem][k],i});
                        }
                        else{
                            if(i<j){
                                res.insert({mpp[rem][k],i,j});
                            }
                            else
                                res.insert({mpp[rem][k],j,i});
                        }
                        // res.push_back({i,j,mpp[rem][k]});
                        // cout<<arr[i]<<" "<<arr[j]<<" "<<arr[mpp[-rem][k]]<<" "<<rem<<endl;
                    }
                }
            }
        }
        // sort(res.begin(),res.end());
        for(auto i:res){
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;

        vector<vector<int>> res = ob.findTriplets(arr);
        sort(res.begin(), res.end());
        if (res.size() == 0) {
            cout << "[]\n";
        }
        for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends