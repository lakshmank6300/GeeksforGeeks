//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        long long ans=0,k=1,m=1000000007;
        for(int i=1;i<=n;i++){
            int j=0;
            int p=1;
            while(j<i){
                p=(p*k)%m;
                k++;
                j++;
            }
            ans=(ans+p)%m;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends