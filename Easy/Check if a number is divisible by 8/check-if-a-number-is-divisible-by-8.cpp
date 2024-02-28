//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        int c=0,n=s.size();
        if(n==1)
            c=s[0]-'0';
        else if(n==2)
            c=(s[0]-'0')*10+(s[1]-'0');
        else
            c=(s[n-3]-'0')*100+(s[n-2]-'0')*10+(s[n-1]-'0');
        if(c==0)
            return 1;
        else if(c%8==0)
            return 1;
        else
            return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends