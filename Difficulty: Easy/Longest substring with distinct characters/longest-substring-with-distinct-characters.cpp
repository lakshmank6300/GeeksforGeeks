//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        int n = s.length();
        int i = 0, ans = 0;
        vector<int> freq(26, 0);
    
        for (int j = 0; j < n; j++) {
            int idx = s[j] - 'a'; 
            freq[idx]++;
    
            while (freq[idx] > 1) {
                freq[s[i] - 'a']--; 
                i++;
            }
    
            ans = max(ans, j - i + 1);
        }
    
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends