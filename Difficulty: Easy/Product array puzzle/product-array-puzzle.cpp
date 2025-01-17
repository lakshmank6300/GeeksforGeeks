//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++


class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n=arr.size(),prod=1,cnt=0,ind;
        vector<int>res(n,0);
        for(int i=0;i<n;i++){
            if(arr[i]!=0)
            prod*=arr[i];
            else{
                cnt++;
                ind=i;
            }
        }
        if(cnt==1){
            res[ind]=prod;
            return res;
        }
        else if(cnt>1)
            return res;
        for(int i=0;i<n;i++){
            res[i]=prod/arr[i];
        }
        return res;
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

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends