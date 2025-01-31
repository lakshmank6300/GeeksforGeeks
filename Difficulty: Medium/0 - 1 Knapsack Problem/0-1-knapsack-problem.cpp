//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#define ll long long
class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity.
    ll DP[(int)1e3][(int)1e3];
    int solve(int capacity,vector<int>&val,vector<int>&wt,int ind){
                //Base Case
        if(ind>=wt.size())
            return 0;
        if(DP[ind][capacity]!=-1)
            return DP[ind][capacity];
        //sub Problems
        int left=0,right=0;
        if(capacity>=wt[ind])
            left=val[ind]+solve(capacity-wt[ind],val,wt,ind+1);
        right=solve(capacity,val,wt,ind+1);
        return DP[ind][capacity] = max(left,right);
    }
    int knapSack(int capacity, vector<int> &val, vector<int> &wt) {
        memset(DP,-1,sizeof DP);
        return solve(capacity,val,wt,0);
    }
};

//{ Driver Code Starts.

int main() {
    // Taking total test cases
    int testCases;
    cin >> testCases;
    cin.ignore();
    while (testCases--) {
        // Reading number of items and capacity
        int numberOfItems, capacity;
        vector<int> weights, values;
        string input;
        int number;

        // Read capacity and number of items
        getline(cin, input);
        stringstream ss(input);
        ss >> capacity;      // The first number is the capacity
        ss >> numberOfItems; // The second number is the number of items

        // Read values
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            values.push_back(number);
        }

        // Read weights
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            weights.push_back(number);
        }

        Solution solution;
        cout << solution.knapSack(capacity, values, weights) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends