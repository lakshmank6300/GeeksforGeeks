//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int mn=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(mn<arr[i])
                mn=arr[i];
        }
        int f=mn;
        mn=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(mn<arr[i] && arr[i]!=f)
                mn=arr[i];
        }
        if(mn==INT_MIN)
            return -1;
        return mn;
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
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends