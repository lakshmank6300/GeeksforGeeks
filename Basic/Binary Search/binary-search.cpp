//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int high, int k,int low=0) {
        // code here
        // high-=1;
        int mid=(low+high)>>1;
        if(low<=high){
            if(arr[mid]==k)
                return mid;
            else if(arr[mid]<k)
                return binarysearch(arr,high,k,mid+1);
            if(arr[mid]>k)
                return binarysearch(arr,mid-1,k,low);
        }
        else return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends