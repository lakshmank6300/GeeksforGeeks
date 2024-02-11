//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        if(n==1)
        return {0};
        vector<int>ans;
        map<int,int>mp;
        int a=0;
        int b;
        for(int i=0;i<n;i++){
            if((a-i)>0 && mp[(a-i)]==0){
                b=a-i;
            }
            else
                b=a+i;
            mp[b]++;
            ans.push_back(b);
            a=b;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends