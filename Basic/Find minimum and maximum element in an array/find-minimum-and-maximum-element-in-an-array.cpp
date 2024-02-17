//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        // long long mx=INT_MIN,mn=INT_MAX;
        pair<long long ,long long>res(INT_MAX,INT_MIN);
    
        for(int i=0;i<n;i++){
            if(a[i]<res.first)
                res.first=a[i];
            if(a[i]>res.second)
                res.second=a[i];
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(a, n);
        
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends