//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
        int mx=arr[0],mn=arr[0];
        int curmx=0,curmn=0;
        int s=0;
        for(int i=0;i<arr.size();i++){
            curmx=max(curmx+arr[i],arr[i]);
            curmn=min(curmn+arr[i],arr[i]);
            s+=arr[i];
            mx=max(mx,curmx);
            mn=min(mn,curmn);
        }
        if(mx>0)
        return max(mx,s-mn);
        else
        return mx;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends