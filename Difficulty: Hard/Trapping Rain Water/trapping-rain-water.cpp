//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        vector<int>r;
        vector<int>l;
        int max = 0 , j = 0 , sol = 0;
        for(int i = 0 ; i < n ; i++){
            if(max < arr[i]){
                max = arr[i];
                r.push_back(max);
            }
            else
            r.push_back(max);
        }
        max = 0;
        for(int i = n - 1 ; i >= 0 ; i--){
            if(max < arr[i]){
                max = arr[i];
                l.push_back(max);
            }
            else{
                l.push_back(max);
            }
        }
        reverse(l.begin() , l.end());
        for(int i = 0 ; i < n ; i++){
            sol += min(r[i] , l[i]) - arr[i];
        }
        return sol;
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
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends